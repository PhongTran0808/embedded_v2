import tkinter as tk
from tkinter import ttk, messagebox, scrolledtext, simpledialog, Toplevel
from matplotlib.backends.backend_tkagg import FigureCanvasTkAgg
from matplotlib.figure import Figure
from matplotlib.ticker import MaxNLocator  # Để chỉnh trục thời gian số nguyên
import serial
import serial.tools.list_ports
import pandas as pd
import threading
import time
import re
import os
import glob
from datetime import datetime
from collections import deque

# =============================================================================
# 1. CẤU HÌNH HỆ THỐNG (SYSTEM CONFIGURATION)
# =============================================================================

# Thư mục lưu dữ liệu
DATA_FOLDER = 'DuLieuNhipTim'

# Cấu hình Serial (Phải khớp với ESP32)
DEFAULT_BAUD_RATE = 115200

# Cấu hình hiển thị
DEFAULT_GRAPH_WINDOW = 50   # Mặc định hiển thị 50 điểm (Zoom trung bình)
MAX_BUFFER_SIZE = 1000      # Bộ nhớ đệm tối đa cho vẽ
SAVE_INTERVAL_SEC = 10      # Lưu file mỗi 10 giây

# BẢNG MÀU GIAO DIỆN (CARBON THEME - PROFESSIONAL MEDICAL STYLE)
THEME = {
    "BG_MAIN":      "#2b2b2b",  # Nền chính (Xám Carbon)
    "BG_PANEL":     "#383838",  # Nền Panel điều khiển
    "BG_GRAPH":     "#1e1e1e",  # Nền biểu đồ (Đen xám)
    "FG_TEXT":      "#ffffff",  # Chữ chính (Trắng)
    "FG_SUB":       "#aaaaaa",  # Chữ phụ (Xám nhạt)
    "GRID_COLOR":   "#2e4e2e",  # Lưới biểu đồ (Xanh rêu)
    "LINE_COLOR":   "#00FF00",  # Đường tín hiệu tim (Xanh Neon)
    "ACCENT":       "#0099cc",  # Màu nhấn (Xanh dương)
    "ALERT":        "#ff4444",  # Màu báo động (Đỏ)
    "WARNING":      "#ffbb33",  # Màu cảnh báo (Cam)
    "SAFE":         "#00C851",  # Màu an toàn (Xanh lá)
    "BTN_BG":       "#505050",  # Nền nút mặc định
    "BTN_FG":       "#ffffff"   # Chữ nút
}

# =============================================================================
# 2. CLASS CHÍNH: MEDICAL MONITOR APP
# =============================================================================

class MedicalMonitorApp:
    """
    Ứng dụng giám sát nhịp tim trung tâm (Central Monitoring Station).
    Phiên bản V9: Đã sửa lỗi đọc dữ liệu Excel bằng thuật toán Normalize Column.
    """
    
    def __init__(self, root):
        self.root = root
        self.root.title("HEART SENSE V9 - ULTIMATE DIAGNOSTIC SYSTEM")
        self.root.geometry("1400x950")
        self.root.configure(bg=THEME["BG_MAIN"])
        
        # --- BƯỚC 1: KHỞI TẠO BIẾN ---
        self.init_system_variables()
        
        # --- BƯỚC 2: KHỞI TẠO FILE SYSTEM ---
        self.init_filesystem()
        
        # --- BƯỚC 3: CẤU HÌNH GIAO DIỆN ---
        self.setup_ui_styles()
        self.build_main_layout()
        
        # --- BƯỚC 4: TỰ ĐỘNG KẾT NỐI ---
        self.root.after(1000, self.auto_connect_serial)

    def init_system_variables(self):
        """Khởi tạo các biến toàn cục"""
        self.running = False           # Trạng thái vòng lặp Serial
        self.ser = None                # Đối tượng Serial
        self.thread = None             # Luồng đọc dữ liệu
        
        # Buffer dữ liệu hiển thị biểu đồ
        self.y_hr = deque(maxlen=MAX_BUFFER_SIZE)
        
        # Buffer dữ liệu để lưu vào Excel
        self.data_buffer = []
        self.last_save_time = time.time()
        
        # Cấu hình ngưỡng cảnh báo
        self.alarm_threshold = 120
        
        # Dataframe lịch sử
        self.df_history = pd.DataFrame()
        
        # Biến điều khiển Zoom
        self.current_zoom_level = DEFAULT_GRAPH_WINDOW

    def init_filesystem(self):
        """Kiểm tra và tạo thư mục dữ liệu"""
        if not os.path.exists(DATA_FOLDER):
            try:
                os.makedirs(DATA_FOLDER)
                print(f"[SYSTEM] Đã tạo thư mục: {DATA_FOLDER}")
            except Exception as e:
                messagebox.showerror("Critical Error", f"Không thể tạo thư mục:\n{e}")

    def setup_ui_styles(self):
        """Cấu hình CSS (Styles) cho Tkinter"""
        style = ttk.Style()
        style.theme_use('clam')
        
        # Style Tabs
        style.configure("TNotebook", background=THEME["BG_MAIN"], borderwidth=0)
        style.configure("TNotebook.Tab", 
                        background="#444", 
                        foreground="#ccc", 
                        padding=[25, 12], 
                        font=("Arial", 11, "bold"))
        style.map("TNotebook.Tab", 
                  background=[("selected", THEME["ACCENT"])], 
                  foreground=[("selected", "white")])
        
        # Style Treeview (Bảng)
        style.configure("Treeview", 
                        background="#e6e6e6", 
                        fieldbackground="#e6e6e6", 
                        foreground="black", 
                        rowheight=28,
                        font=("Arial", 10))
        style.configure("Treeview.Heading", 
                        background="#555", 
                        foreground="white", 
                        font=('Arial', 10, 'bold'))
        
        # Style Slider
        style.configure("Horizontal.TScale", background=THEME["BG_MAIN"])

    # =========================================================================
    # 3. XÂY DỰNG GIAO DIỆN (UI BUILDER)
    # =========================================================================

    def build_main_layout(self):
        """Tạo bố cục chính"""
        self.tab_control = ttk.Notebook(self.root)
        
        # --- TAB 1: REAL-TIME MONITOR ---
        self.tab_monitor = tk.Frame(self.tab_control, bg=THEME["BG_MAIN"])
        self.tab_control.add(self.tab_monitor, text="  📊 MONITOR & LIVE DATA  ")
        self.build_monitor_tab_ui()
        
        # --- TAB 2: HISTORY & ANALYSIS ---
        self.tab_history = tk.Frame(self.tab_control, bg=THEME["BG_MAIN"])
        self.tab_control.add(self.tab_history, text="  📂 LỊCH SỬ & CHẨN ĐOÁN AI  ")
        self.build_history_tab_ui()
        
        self.tab_control.pack(expand=1, fill="both")

    def build_monitor_tab_ui(self):
        """Giao diện Tab Giám sát"""
        # === KHUNG TRÁI: THÔNG SỐ (VITALS) ===
        left_panel = tk.Frame(self.tab_monitor, bg=THEME["BG_PANEL"], width=360, relief=tk.RAISED, bd=1)
        left_panel.pack(side=tk.LEFT, fill=tk.Y, padx=5, pady=5)
        
        tk.Label(left_panel, text="♥ PATIENT VITALS", font=("Impact", 24), bg=THEME["BG_PANEL"], fg=THEME["ACCENT"]).pack(pady=(25, 15))
        
        # HR
        tk.Label(left_panel, text="HEART RATE (BPM)", font=("Arial", 11, "bold"), bg=THEME["BG_PANEL"], fg="#aaa").pack()
        self.lbl_hr = tk.Label(left_panel, text="--", font=("Consolas", 85, "bold"), fg=THEME["LINE_COLOR"], bg=THEME["BG_PANEL"])
        self.lbl_hr.pack()
        
        # SpO2
        tk.Label(left_panel, text="SpO2 SATURATION (%)", font=("Arial", 11, "bold"), bg=THEME["BG_PANEL"], fg="#aaa").pack(pady=(20, 0))
        self.lbl_spo2 = tk.Label(left_panel, text="--", font=("Consolas", 65, "bold"), fg="#00FFFF", bg=THEME["BG_PANEL"])
        self.lbl_spo2.pack()
        
        # Status
        self.lbl_status = tk.Label(left_panel, text="DISCONNECTED", font=("Arial", 14, "bold"), fg="gray", bg="#222", width=28, height=2)
        self.lbl_status.pack(pady=25)
        
        self.lbl_accel = tk.Label(left_panel, text="Motion: -- G", font=("Consolas", 12), fg="yellow", bg=THEME["BG_PANEL"])
        self.lbl_accel.pack()

        # Buttons
        btn_frame = tk.Frame(left_panel, bg=THEME["BG_PANEL"])
        btn_frame.pack(side=tk.BOTTOM, fill=tk.X, padx=20, pady=40)
        
        self.create_styled_button(btn_frame, "🔌 KẾT NỐI / NGẮT", self.toggle_connection, "#444").pack(fill=tk.X, pady=5)
        self.create_styled_button(btn_frame, "📝 THÊM GHI CHÚ", self.add_annotation, "#555").pack(fill=tk.X, pady=5)
        self.create_styled_button(btn_frame, "⚙️ CÀI ĐẶT NGƯỠNG", self.set_threshold, "#555").pack(fill=tk.X, pady=5)
        self.create_styled_button(btn_frame, "📸 CHỤP MÀN HÌNH", self.snapshot_graph, "#555").pack(fill=tk.X, pady=5)
        self.create_styled_button(btn_frame, "🔄 RESET BIỂU ĐỒ", self.reset_graph, "#666").pack(fill=tk.X, pady=5)

        # === KHUNG PHẢI: GRAPH & TERMINAL ===
        right_panel = tk.Frame(self.tab_monitor, bg=THEME["BG_MAIN"])
        right_panel.pack(side=tk.RIGHT, fill=tk.BOTH, expand=True, padx=5, pady=5)
        
        # 1. Graph Area
        self.fig = Figure(figsize=(5, 4), dpi=100, facecolor=THEME["BG_MAIN"])
        self.ax = self.fig.add_subplot(111)
        self.ax.set_facecolor(THEME["BG_GRAPH"])
        self.ax.grid(True, color=THEME["GRID_COLOR"], linestyle='-', linewidth=0.5)
        
        self.ax.spines['bottom'].set_color('white')
        self.ax.spines['top'].set_color('white') 
        self.ax.spines['right'].set_color('white')
        self.ax.spines['left'].set_color('white')
        self.ax.tick_params(axis='x', colors='white')
        self.ax.tick_params(axis='y', colors='white')
        
        # Fix: Trục thời gian số nguyên
        self.ax.xaxis.set_major_locator(MaxNLocator(integer=True))
        
        self.line, = self.ax.plot([], [], color=THEME["LINE_COLOR"], linewidth=2)
        
        self.canvas = FigureCanvasTkAgg(self.fig, master=right_panel)
        self.canvas.draw()
        self.canvas.get_tk_widget().pack(fill=tk.BOTH, expand=True)
        
        # 2. Zoom Slider
        zoom_frame = tk.Frame(right_panel, bg=THEME["BG_MAIN"], height=40)
        zoom_frame.pack(fill=tk.X, padx=10, pady=5)
        
        tk.Label(zoom_frame, text="🔍 ZOOM:", bg=THEME["BG_MAIN"], fg="white", font=("Arial", 9, "bold")).pack(side=tk.LEFT)
    
        self.scale_zoom = tk.Scale(zoom_frame, from_=10, to=MAX_BUFFER_SIZE, orient=tk.HORIZONTAL, 
                               bg=THEME["BG_MAIN"], fg="white", troughcolor="#444",
                               highlightthickness=0, length=400,
                               command=self.on_zoom_change)
    
        self.scale_zoom.set(DEFAULT_GRAPH_WINDOW)
        self.scale_zoom.pack(side=tk.LEFT, padx=10)

        # 3. Terminal
        term_container = tk.Frame(right_panel, height=200, bg="#111")
        term_container.pack(fill=tk.X, pady=(5, 0))
        
        term_header = tk.Frame(term_container, bg="#222", height=25)
        term_header.pack(fill=tk.X)
        tk.Label(term_header, text=" > SYSTEM LOG", bg="#222", fg="#00ff00", font=("Consolas", 9)).pack(side=tk.LEFT, padx=5)
        tk.Button(term_header, text="Clear Log", command=self.clear_log, bg="#444", fg="white", font=("Arial", 8), bd=0).pack(side=tk.RIGHT, padx=5)
        
        self.txt_term = scrolledtext.ScrolledText(term_container, height=12, bg="#0f0f0f", fg="#00FF00", font=("Consolas", 10), bd=0)
        self.txt_term.pack(fill=tk.BOTH, expand=True)

    def build_history_tab_ui(self):
        """Giao diện Tab Lịch sử"""
        # Toolbar
        toolbar = tk.Frame(self.tab_history, bg=THEME["BG_PANEL"], height=60)
        toolbar.pack(side=tk.TOP, fill=tk.X, padx=5, pady=5)
        
        tk.Label(toolbar, text="Chọn File:", bg=THEME["BG_PANEL"], fg="white", font=("Arial", 10)).pack(side=tk.LEFT, padx=10)
        self.cbo_files = ttk.Combobox(toolbar, width=35, font=("Arial", 10))
        self.cbo_files.pack(side=tk.LEFT, padx=5)
        self.refresh_file_list() 
        
        # Buttons
        self.create_styled_button(toolbar, "📥 TẢI DỮ LIỆU", self.load_history_data, "#007bff").pack(side=tk.LEFT, padx=5)
        self.create_styled_button(toolbar, "🏥 CHẨN ĐOÁN AI", self.analyze_health, "#ff9900", fg="black").pack(side=tk.LEFT, padx=15)
        self.create_styled_button(toolbar, "⏯️ PHÁT LẠI", self.replay_history, "#9933cc").pack(side=tk.LEFT, padx=5)
        self.create_styled_button(toolbar, "🔄 Refresh", self.refresh_file_list, "#555").pack(side=tk.LEFT, padx=5)

        # Table
        cols = ("Date", "Time", "HR", "SpO2", "HRV", "Status", "Accel")
        self.tree = ttk.Treeview(self.tab_history, columns=cols, show='headings')
        
        self.tree.heading("Date", text="Ngày")
        self.tree.column("Date", width=100, anchor="center")
        self.tree.heading("Time", text="Giờ")
        self.tree.column("Time", width=100, anchor="center")
        self.tree.heading("HR", text="HR (bpm)")
        self.tree.column("HR", width=80, anchor="center")
        self.tree.heading("SpO2", text="SpO2 (%)")
        self.tree.column("SpO2", width=80, anchor="center")
        self.tree.heading("HRV", text="HRV (ms)")
        self.tree.column("HRV", width=80, anchor="center")
        self.tree.heading("Status", text="Phân loại AI")
        self.tree.column("Status", width=200, anchor="w")
        self.tree.heading("Accel", text="Gia tốc (g)")
        self.tree.column("Accel", width=80, anchor="center")

        scrollbar = ttk.Scrollbar(self.tab_history, orient="vertical", command=self.tree.yview)
        self.tree.configure(yscroll=scrollbar.set)
        scrollbar.pack(side=tk.RIGHT, fill=tk.Y)
        self.tree.pack(fill=tk.BOTH, expand=True, padx=5, pady=5)

    def create_styled_button(self, parent, text, command, bg, fg="white"):
        return tk.Button(parent, text=text, command=command, bg=bg, fg=fg, font=("Arial", 9, "bold"), relief=tk.RAISED, bd=2)

    # =========================================================================
    # 4. LOGIC XỬ LÝ (CORE LOGIC)
    # =========================================================================

    def on_zoom_change(self, val):
        self.current_zoom_level = int(val)
        if self.running and len(self.y_hr) > 0:
            current_len = len(self.y_hr)
            start = max(0, current_len - self.current_zoom_level)
            end = max(self.current_zoom_level, current_len)
            self.ax.set_xlim(start, end)
            self.canvas.draw_idle()

    def auto_connect_serial(self):
        port = self.find_port()
        if port: self.connect_serial(port)
        else: self.log_terminal("Không tìm thấy thiết bị ESP32.")

    def find_port(self):
        ports = serial.tools.list_ports.comports()
        for p in ports:
            if "CP210" in p.description or "CH340" in p.description or "USB" in p.description:
                return p.device
        return None

    def toggle_connection(self):
        if self.running:
            self.running = False
            if self.ser: 
                try: self.ser.close()
                except: pass
            self.lbl_status.config(text="DISCONNECTED", fg="gray")
            self.log_terminal("Ngắt kết nối.")
        else:
            port = self.find_port()
            if port: self.connect_serial(port)
            else: messagebox.showwarning("Lỗi", "Không tìm thấy thiết bị!")

    def connect_serial(self, port):
        try:
            self.ser = serial.Serial(port, DEFAULT_BAUD_RATE, timeout=0.1)
            self.running = True
            self.lbl_status.config(text="CONNECTED", fg=THEME["SAFE"])
            self.log_terminal(f"Đã kết nối: {port}")
            self.thread = threading.Thread(target=self.serial_read_loop, daemon=True)
            self.thread.start()
        except Exception as e:
            messagebox.showerror("Lỗi", str(e))

    def serial_read_loop(self):
        while self.running:
            try:
                if self.ser.in_waiting:
                    line = self.ser.readline().decode('utf-8', errors='ignore').strip()
                    if line:
                        if len(line) < 150: self.root.after(0, self.log_terminal, line)
                        if "| ML PREDICTION:" in line:
                            self.process_data_line(line)
            except Exception as e:
                print(f"Serial Error: {e}")
                break
            time.sleep(0.01)

    def process_data_line(self, line):
        pattern = r"\| ML PREDICTION: Class (\d+) \((.*?)\) \| Inputs: HR=(\d+), SpO2=([\d.]+), HRV=([\d.]+), Acc=([\d.]+)"
        match = re.search(pattern, line)
        if match:
            class_id = int(match.group(1))
            status_text = match.group(2)
            hr = int(match.group(3))
            spo2 = float(match.group(4))
            hrv = float(match.group(5))
            accel = float(match.group(6))
            
            # --- FIX SPO2 CLAMP ---
            if spo2 > 99.9: spo2 = 99.9
            
            self.root.after(0, self.update_dashboard_ui, hr, spo2, status_text, accel)
            
            now = datetime.now()
            record = {
                'Date': now.strftime("%Y-%m-%d"),
                'Time': now.strftime("%H:%M:%S"),
                'HR': hr,
                'SpO2': spo2,
                'HRV': hrv,
                'Status': status_text,
                'Accel': accel,
                'Class_ID': class_id
            }
            self.data_buffer.append(record)
            
            if time.time() - self.last_save_time > SAVE_INTERVAL_SEC:
                self.save_data_to_excel()

    def update_dashboard_ui(self, hr, spo2, status, accel):
        self.lbl_hr.config(text=str(hr))
        self.lbl_spo2.config(text=f"{spo2:.1f}%")
        self.lbl_accel.config(text=f"Motion: {accel:.2f} G")
        
        color = THEME["FG_TEXT"]
        if "Stress" in status: color = THEME["WARNING"]
        if "Arrhythmia" in status or "Low SpO2" in status: color = THEME["ALERT"]
        if "Normal" in status: color = THEME["SAFE"]
        if hr > self.alarm_threshold:
            status += " (HIGH BPM!)"
            color = THEME["ALERT"]
            
        self.lbl_status.config(text=status, fg=color)
        
        self.y_hr.append(hr)
        
        self.line.set_xdata(range(len(self.y_hr)))
        self.line.set_ydata(self.y_hr)
        
 
        current_len = len(self.y_hr)
        
        if current_len > self.current_zoom_level:
            self.ax.set_xlim(current_len - self.current_zoom_level, current_len)
        else:
            self.ax.set_xlim(0, self.current_zoom_level)
        

        visible_data = list(self.y_hr)[-self.current_zoom_level:]
        if len(visible_data) > 0:
            min_y = min(visible_data) - 5
            max_y = max(visible_data) + 5
            self.ax.set_ylim(min_y, max_y)
            
        self.canvas.draw()

    # =========================================================================
    # 5. DATA MANAGEMENT & FIX LỖI SỐ 0 (SMART MAPPING)
    # =========================================================================

    def save_data_to_excel(self):
        if not self.data_buffer: return
        try:
            now = datetime.now()
            folder_path = os.path.join(DATA_FOLDER, now.strftime("%Y-%m"))
            if not os.path.exists(folder_path): os.makedirs(folder_path)
            
            file_name = os.path.join(folder_path, f"{now.strftime('%Y-%m-%d')}.xlsx")
            
            df = pd.DataFrame(self.data_buffer, columns=['Date', 'Time', 'HR', 'SpO2', 'HRV', 'Status', 'Accel', 'Class_ID'])
            
            if os.path.exists(file_name):
                with pd.ExcelWriter(file_name, mode='a', engine='openpyxl', if_sheet_exists='overlay') as writer:
                    try:
                        start_row = writer.sheets['Sheet1'].max_row
                        df.to_excel(writer, index=False, header=False, startrow=start_row)
                    except: df.to_excel(writer, index=False)
            else:
                df.to_excel(file_name, index=False)
                
            self.log_terminal(f"[SYSTEM] Đã lưu {len(self.data_buffer)} bản ghi.")
            self.data_buffer = []
            self.last_save_time = time.time()
            self.refresh_file_list()
        except Exception as e:
            self.log_terminal(f"[ERROR] Lưu file: {e}")

    def refresh_file_list(self):
        files = glob.glob(os.path.join(DATA_FOLDER, "**/*.xlsx"), recursive=True)
        self.cbo_files['values'] = files
        if files: self.cbo_files.current(len(files)-1)

    def load_history_data(self):
        """Hàm đọc dữ liệu Excel - ĐÃ SỬA LỖI ĐỌC CỘT"""
        path = self.cbo_files.get()
        if not path or not os.path.exists(path):
            messagebox.showwarning("Lỗi", "Vui lòng chọn file!")
            return
        
        try:
            self.df_history = pd.read_excel(path)
            if self.df_history.empty:
                messagebox.showinfo("Thông báo", "File trống!")
                return
            
            # Xóa bảng cũ
            for i in self.tree.get_children(): self.tree.delete(i)
            
            # --- FIX THÔNG MINH: CHUẨN HÓA TÊN CỘT ---
            # 1. Chuyển hết tên cột trong file thành chữ IN HOA, bỏ khoảng trắng
            # Ví dụ: "HR (bpm)" -> "HR(BPM)", " heart rate" -> "HEARTRATE"
            self.df_history.columns = [str(c).upper().strip().replace(" ", "") for c in self.df_history.columns]
            
            # Debug: In ra các cột tìm thấy để kiểm tra
            print(f"DEBUG - Các cột tìm thấy trong Excel: {list(self.df_history.columns)}")
            
            def get_val_safe(row, possible_keys):
                """Tìm giá trị từ danh sách các tên cột có thể có"""
                for key in possible_keys:
                    clean_key = key.upper().strip().replace(" ", "")
                    if clean_key in row:
                        return row[clean_key]
                return 0 # Không tìm thấy

            # Hiển thị 1000 dòng cuối
            for idx, row in self.df_history.tail(1000).iterrows():
                vals = (
                    get_val_safe(row, ['Date', 'Timestamp']),
                    get_val_safe(row, ['Time']),
                    get_val_safe(row, ['HR', 'HeartRate', 'HR(bpm)', 'BPM']),
                    get_val_safe(row, ['SpO2', 'SpO2(%)', 'Oxygen']),
                    get_val_safe(row, ['HRV', 'HRV(ms)']),
                    get_val_safe(row, ['Status', 'Label', 'PhanLoai']),
                    get_val_safe(row, ['Accel', 'Accel(g)', 'Motion'])
                )
                self.tree.insert("", 0, values=vals)
                
            self.log_terminal(f"[HISTORY] Tải thành công {len(self.df_history)} dòng.")
            messagebox.showinfo("Thành công", "Đã tải dữ liệu lịch sử!")
            
        except Exception as e:
            messagebox.showerror("Lỗi Đọc File", str(e))

    # =========================================================================
    # 6. TÍNH NĂNG NÂNG CAO
    # =========================================================================

    def analyze_health(self):
        """Bác sĩ AI chẩn đoán"""
        if self.df_history.empty:
            messagebox.showwarning("Lỗi", "Vui lòng tải dữ liệu trước!")
            return
            
        # Tìm cột HR và Status bằng cách chuẩn hóa
        hr_col = next((c for c in self.df_history.columns if "HR" in c or "HEART" in c), None)
        status_col = next((c for c in self.df_history.columns if "STATUS" in c or "LABEL" in c), None)
        
        if not hr_col:
            messagebox.showerror("Lỗi", "Không tìm thấy dữ liệu Nhịp tim!")
            return
            
        avg_hr = self.df_history[hr_col].mean()
        max_hr = self.df_history[hr_col].max()
        
        danger_count = 0
        stress_count = 0
        
        if status_col:
            for s in self.df_history[status_col]:
                s_str = str(s).lower()
                if "arrhythmia" in s_str or "low" in s_str: danger_count += 1
                if "stress" in s_str: stress_count += 1
        
        report = "=== KẾT QUẢ CHẨN ĐOÁN (AI) ===\n\n"
        report += f"Trung bình HR: {avg_hr:.1f} BPM (Max: {max_hr})\n"
        report += f"Số lần Stress: {stress_count}\n"
        report += f"Số lần Nguy hiểm: {danger_count}\n\n"
        
        bg_col = "#e6ffe6"
        if danger_count > 0:
            report += "KẾT LUẬN: 🔴 CÓ DẤU HIỆU BẤT THƯỜNG!\nCần đi khám bác sĩ."
            bg_col = "#ffcccc"
        elif stress_count > len(self.df_history) * 0.3:
            report += "KẾT LUẬN: 🟠 CẢNH BÁO STRESS.\nHãy nghỉ ngơi."
            bg_col = "#ffe6cc"
        else:
            report += "KẾT LUẬN: 🟢 SỨC KHỎE TỐT."
            
        self.show_popup(report, bg_col)

    def show_popup(self, text, bg):
        win = Toplevel(self.root)
        win.title("Kết quả")
        win.geometry("400x350")
        win.configure(bg=bg)
        t = scrolledtext.ScrolledText(win, font=("Arial", 11), height=15)
        t.pack(padx=10, pady=10, fill="both")
        t.insert(tk.END, text)

    def replay_history(self):
        """Phát lại biểu đồ"""
        if self.df_history.empty: return
        
        hr_col = next((c for c in self.df_history.columns if "HR" in c or "HEART" in c), None)
        if not hr_col: return
        
        data = self.df_history[hr_col].tolist()
        
        win = Toplevel(self.root)
        win.title("REPLAY MODE")
        win.geometry("700x350")
        win.configure(bg="black")
        
        fig = Figure(figsize=(5,3), dpi=100, facecolor="black")
        ax = fig.add_subplot(111)
        ax.set_facecolor("black")
        ax.grid(True, color="#333")
        line, = ax.plot([], [], color="#00FF00")
        ax.set_ylim(40, 160)
        
        canvas = FigureCanvasTkAgg(fig, master=win)
        canvas.get_tk_widget().pack(fill=tk.BOTH, expand=True)
        
        def run():
            buf = []
            for val in data:
                if not win.winfo_exists(): break
                buf.append(val)
                if len(buf) > 100: buf.pop(0)
                line.set_xdata(range(len(buf)))
                line.set_ydata(buf)
                canvas.draw()
                time.sleep(0.05)
        threading.Thread(target=run, daemon=True).start()

    def add_annotation(self):
        n = simpledialog.askstring("Ghi chú", "Nội dung:")
        if n: self.log_terminal(f"[NOTE] {n}")

    def set_threshold(self):
        v = simpledialog.askinteger("Cài đặt", "Ngưỡng BPM:", initialvalue=self.alarm_threshold)
        if v: self.alarm_threshold = v

    def snapshot_graph(self):
        try:
            f = f"Snap_{datetime.now().strftime('%H%M%S')}.png"
            self.fig.savefig(f)
            messagebox.showinfo("OK", f"Lưu: {f}")
        except: pass

    def reset_graph(self):
        self.y_hr.clear()
        self.canvas.draw()
        self.log_terminal("Đã reset biểu đồ.")

    def log_terminal(self, text):
        ts = datetime.now().strftime("%H:%M:%S")
        self.txt_term.insert(tk.END, f"[{ts}] {text}\n")
        self.txt_term.see(tk.END)

    def clear_log(self):
        self.txt_term.delete('1.0', tk.END)

    def on_close(self):
        if messagebox.askokcancel("Thoát", "Bạn có chắc muốn thoát?"):
            self.running = False
            if self.ser: 
                try: self.ser.close()
                except: pass
            self.root.destroy()

if __name__ == "__main__":
    try:
        root = tk.Tk()
        app = MedicalMonitorApp(root)
        root.protocol("WM_DELETE_WINDOW", app.on_close)
        root.mainloop()
    except Exception as e:
        print(f"CRITICAL ERROR: {e}")