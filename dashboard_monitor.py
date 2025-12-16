import tkinter as tk
from tkinter import ttk, messagebox, scrolledtext
from matplotlib.backends.backend_tkagg import FigureCanvasTkAgg
from matplotlib.figure import Figure
import serial
import serial.tools.list_ports
import pandas as pd
import threading
import time
import re
import os
from datetime import datetime
from collections import deque

# ================= CẤU HÌNH =================
DATA_FOLDER = 'DuLieuNhipTim' # Thư mục gốc chứa dữ liệu
BAUD_RATE = 115200
MAX_POINTS = 100  # Tăng số điểm hiển thị để biểu đồ dài hơn
SAVE_INTERVAL = 10  # Lưu file mỗi 10 giây

class HeartMonitorApp:
    def __init__(self, root):
        self.root = root
        self.root.title("TRẠM GIÁM SÁT TIM MẠCH (ADVANCED)")
        self.root.geometry("1300x800")
        
        # Biến dữ liệu
        self.running = False
        self.ser = None
        self.x_data = deque(maxlen=MAX_POINTS)
        self.y_hr = deque(maxlen=MAX_POINTS)
        self.data_buffer = []
        self.last_save_time = time.time()
        
        # --- GIAO DIỆN ---
        self.setup_ui()
        
        # --- TỰ ĐỘNG KẾT NỐI ---
        self.start_serial_thread()

    def setup_ui(self):
        # === 1. KHUNG TRÊN (Dữ liệu & Biểu đồ) ===
        top_frame = tk.Frame(self.root)
        top_frame.pack(side=tk.TOP, fill=tk.BOTH, expand=True)

        # --- Panel Trái (Thông số) ---
        left_panel = tk.Frame(top_frame, width=350, bg="#f0f0f0", relief=tk.RIDGE, borderwidth=2)
        left_panel.pack(side=tk.LEFT, fill=tk.Y, padx=5, pady=5)
        
        tk.Label(left_panel, text="THÔNG SỐ THỜI GIAN THỰC", font=("Arial", 12, "bold"), bg="#ddd", height=2).pack(fill=tk.X)

        self.lbl_hr = tk.Label(left_panel, text="--", font=("Arial", 50, "bold"), fg="red", bg="#f0f0f0")
        self.lbl_hr.pack(pady=(20, 0))
        tk.Label(left_panel, text="Nhịp tim (BPM)", bg="#f0f0f0").pack()
        
        self.lbl_spo2 = tk.Label(left_panel, text="--%", font=("Arial", 35, "bold"), fg="blue", bg="#f0f0f0")
        self.lbl_spo2.pack(pady=(20, 0))
        tk.Label(left_panel, text="SpO2 (Oxy máu)", bg="#f0f0f0").pack()
        
        self.lbl_accel = tk.Label(left_panel, text="Acc: --", font=("Arial", 14), fg="black", bg="#f0f0f0")
        self.lbl_accel.pack(pady=(10, 0))

        self.lbl_status = tk.Label(left_panel, text="Đang kết nối...", font=("Arial", 16, "bold"), fg="gray", bg="#f0f0f0")
        self.lbl_status.pack(pady=(20, 20))
        
        # Nút chức năng
        btn_frame = tk.Frame(left_panel, bg="#f0f0f0")
        btn_frame.pack(fill=tk.X, padx=10)
        
        tk.Button(btn_frame, text="📂 Mở Thư mục Dữ liệu", command=self.open_data_folder, height=2, bg="#bff").pack(fill=tk.X, pady=5)
        tk.Button(btn_frame, text="❌ Dừng & Thoát", command=self.on_close, height=2, bg="#fbb").pack(fill=tk.X, pady=5)

        # --- Panel Phải (Biểu đồ) ---
        right_panel = tk.Frame(top_frame, bg="white", relief=tk.RIDGE, borderwidth=2)
        right_panel.pack(side=tk.RIGHT, fill=tk.BOTH, expand=True, padx=5, pady=5)
        
        self.fig = Figure(figsize=(5, 4), dpi=100)
        self.ax = self.fig.add_subplot(111)
        self.ax.set_title("Biểu đồ Dao động Nhịp tim (Real-time)")
        self.ax.set_xlabel("Mẫu đo (Gần nhất)")
        self.ax.set_ylabel("BPM")
        self.line, = self.ax.plot([], [], 'r-', linewidth=1.5)
        self.ax.grid(True, linestyle='--', alpha=0.6)
        
        self.canvas = FigureCanvasTkAgg(self.fig, master=right_panel)
        self.canvas.draw()
        self.canvas.get_tk_widget().pack(fill=tk.BOTH, expand=True)

        # === 2. KHUNG DƯỚI (TERMINAL / RAW DATA) ===
        # Yêu cầu 1: Ô hiển thị thông báo gốc
        bottom_frame = tk.Frame(self.root, height=200, bg="black")
        bottom_frame.pack(side=tk.BOTTOM, fill=tk.X, padx=5, pady=5)
        
        tk.Label(bottom_frame, text="TERMINAL (Dữ liệu thô từ ESP32)", bg="#333", fg="white", anchor="w").pack(fill=tk.X)
        
        self.txt_terminal = scrolledtext.ScrolledText(bottom_frame, height=10, bg="black", fg="#00FF00", font=("Consolas", 9))
        self.txt_terminal.pack(fill=tk.BOTH, expand=True)
        self.txt_terminal.insert(tk.END, ">>> Hệ thống đã sẵn sàng...\n")

    def log_to_terminal(self, text):
        # Hàm ghi log vào ô đen bên dưới
        self.txt_terminal.insert(tk.END, f"[{datetime.now().strftime('%H:%M:%S')}] {text}\n")
        self.txt_terminal.see(tk.END) # Tự động cuộn xuống cuối

    def start_serial_thread(self):
        self.running = True
        thread = threading.Thread(target=self.read_serial_loop)
        thread.daemon = True
        thread.start()

    def find_port(self):
        ports = serial.tools.list_ports.comports()
        for port in ports:
            # Tìm cổng có tên USB hoặc CP210x/CH340
            if "CP210" in port.description or "CH340" in port.description or "USB Serial" in port.description:
                return port.device
        return None

    def read_serial_loop(self):
        # Tự động tìm cổng
        port = self.find_port()
        if not port:
            self.root.after(0, self.update_status, "Không tìm thấy thiết bị!", "red")
            return

        try:
            # Yêu cầu 3: Tăng tốc độ đọc, timeout thấp
            self.ser = serial.Serial(port, BAUD_RATE, timeout=0.1) 
            self.root.after(0, self.update_status, f"Đã kết nối {port}", "green")
            self.root.after(0, self.log_to_terminal, f"Đã kết nối thành công tới {port}")
        except Exception as e:
            self.root.after(0, self.update_status, "Lỗi cổng COM!", "red")
            return

        while self.running:
            try:
                if self.ser.in_waiting:
                    # Đọc raw line
                    raw_line = self.ser.readline().decode('utf-8', errors='ignore').strip()
                    
                    if raw_line:
                        # Hiện raw data lên terminal (Yêu cầu 1)
                        self.root.after(0, self.log_to_terminal, raw_line)

                    # Lọc lấy dòng ML PREDICTION
                    if "| ML PREDICTION:" in raw_line:
                        self.process_data(raw_line)
                        
            except Exception as e:
                print("Lỗi Serial:", e)
                break
            # Yêu cầu 3: Bỏ sleep hoặc để cực nhỏ để lấy dữ liệu liên tục
            # time.sleep(0.01) 

    def process_data(self, line):
        pattern = r"\| ML PREDICTION: Class (\d+) \((.*?)\) \| Inputs: HR=(\d+), SpO2=([\d.]+), HRV=([\d.]+), Acc=([\d.]+)"
        match = re.search(pattern, line)
        if match:
            status_text = match.group(2)
            hr = int(match.group(3))
            spo2 = float(match.group(4))
            accel = float(match.group(6))
            
            # Cập nhật GUI
            self.root.after(0, self.update_gui_values, hr, spo2, accel, status_text)
            
            # Cập nhật dữ liệu cho biểu đồ
            self.y_hr.append(hr)
            self.root.after(0, self.update_plot)
            
            # Đưa vào buffer để lưu file
            record = {
                'Time': datetime.now().strftime("%H:%M:%S"),
                'Timestamp': datetime.now().timestamp(),
                'Status': status_text,
                'HR (BPM)': hr,
                'SpO2 (%)': spo2,
                'HRV (ms)': float(match.group(5)),
                'Accel (g)': accel
            }
            self.data_buffer.append(record)
            
            # Lưu file định kỳ
            if time.time() - self.last_save_time >= SAVE_INTERVAL:
                self.save_to_excel_structured()

    def update_gui_values(self, hr, spo2, accel, status):
        self.lbl_hr.config(text=str(hr))
        self.lbl_spo2.config(text=f"{spo2}%")
        self.lbl_accel.config(text=f"Acc: {accel:.2f}g")
        
        color = "green"
        if "Stress" in status or "Risk" in status: color = "#FF8C00" # Cam đậm
        if "Arrhythmia" in status or "Low SpO2" in status: color = "red"
        if "Moving" in status: color = "blue"
        
        self.lbl_status.config(text=status, fg=color)

    def update_plot(self):
        # Vẽ lại biểu đồ
        if len(self.y_hr) > 0:
            self.line.set_xdata(range(len(self.y_hr)))
            self.line.set_ydata(self.y_hr)
            
            self.ax.set_xlim(0, MAX_POINTS)
            # Tự động scale trục Y nhưng giữ khoảng tối thiểu
            current_data = list(self.y_hr)
            min_y = min(current_data) - 5
            max_y = max(current_data) + 5
            if max_y - min_y < 20: # Giữ khoảng cách tối thiểu
                mid = (max_y + min_y) / 2
                min_y = mid - 15
                max_y = mid + 15
            
            self.ax.set_ylim(min_y, max_y)
            self.canvas.draw()

    def update_status(self, text, color):
        self.lbl_status.config(text=text, fg=color)

    def save_to_excel_structured(self):
        # Yêu cầu 2: Quản lý theo ngày tháng
        if not self.data_buffer: return
        
        try:
            now = datetime.now()
            year_month = now.strftime("%Y-%m") # Folder: 2024-05
            day_str = now.strftime("%Y-%m-%d") # File: 2024-05-20.xlsx
            
            # Tạo đường dẫn thư mục: DuLieuNhipTim/2024-05/
            save_path = os.path.join(DATA_FOLDER, year_month)
            if not os.path.exists(save_path):
                os.makedirs(save_path)
                
            file_path = os.path.join(save_path, f"{day_str}.xlsx")
            
            # Lưu file
            df_new = pd.DataFrame(self.data_buffer)
            
            if os.path.exists(file_path):
                # Append vào file cũ
                with pd.ExcelWriter(file_path, mode='a', engine='openpyxl', if_sheet_exists='overlay') as writer:
                    try:
                        writer.sheets['Sheet1']
                        start_row = writer.sheets['Sheet1'].max_row
                        df_new.to_excel(writer, index=False, header=False, startrow=start_row)
                    except KeyError:
                        df_new.to_excel(writer, index=False)
            else:
                # Tạo file mới
                df_new.to_excel(file_path, index=False)
            
            # Thông báo nhỏ vào terminal
            self.root.after(0, self.log_to_terminal, f"-> Đã lưu {len(self.data_buffer)} dòng vào {file_path}")
            
            self.data_buffer = [] 
            self.last_save_time = time.time()
            
        except Exception as e:
            print("Lỗi lưu file:", e)
            self.root.after(0, self.log_to_terminal, f"LỖI LƯU FILE: {e}")

    def open_data_folder(self):
        # Mở thư mục chứa dữ liệu
        if not os.path.exists(DATA_FOLDER):
            os.makedirs(DATA_FOLDER)
        os.startfile(DATA_FOLDER)

    def on_close(self):
        self.running = False
        if self.ser and self.ser.is_open:
            self.ser.close()
        self.root.destroy()

if __name__ == "__main__":
    root = tk.Tk()
    app = HeartMonitorApp(root)
    root.protocol("WM_DELETE_WINDOW", app.on_close)
    root.mainloop()