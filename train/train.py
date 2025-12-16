import pandas as pd
import numpy as np
import time
import os
import sys
from sklearn.model_selection import train_test_split
from sklearn.ensemble import RandomForestClassifier
from sklearn.metrics import accuracy_score, classification_report, confusion_matrix
import joblib 

# =========================================================
# 1. CẤU HÌNH HỆ THỐNG
# =========================================================

OUTPUT_MODEL_FILE = 'health_model_1M_complete.joblib' 
RANDOM_SEED = 42
NUM_SAMPLES = 1000000  # 1 Triệu mẫu

# Định nghĩa tên các đặc trưng (Features)
FEATURES = ['HR (bpm)', 'SpO2 (%)', 'HRV (ms)', 'Accel_Total (g)']
# Định nghĩa tên cột nhãn (Label)
LABEL = 'Label (Nhãn)'

# Định nghĩa tên các lớp để hiển thị báo cáo
TARGET_NAMES = [
    '0: Normal (Bình thường)', 
    '1: Stress/Risk (Nguy cơ)', 
    '2: Motion (Vận động)', 
    '3: Low SpO2 (Suy hô hấp)', 
    '4: Arrhythmia (Rối loạn nhịp)'
]

# =========================================================
# 2. HÀM SINH DỮ LIỆU GIẢ LẬP (BIG DATA GENERATOR)
# =========================================================
def generate_synthetic_data(num_samples):
    print(f"\n[1/5] Đang sinh {num_samples:,} mẫu dữ liệu giả lập...")
    start_time = time.time()
    
    data = []
    # Chia đều số mẫu cho 5 lớp
    N = num_samples // 5 
    
    # --- Lớp 0: Normal ---
    # HR: 55-95, SpO2: 96-100, HRV: 45-120 (Cao), Accel: Thấp
    data.append(pd.DataFrame({
        FEATURES[0]: np.random.uniform(55, 95, N).astype(int),
        FEATURES[1]: np.random.uniform(96.0, 99.9, N).round(1),
        FEATURES[2]: np.random.uniform(45, 120, N).round(1),
        FEATURES[3]: np.random.uniform(0.90, 1.08, N).round(2),
        LABEL: 0
    }))

    # --- Lớp 1: Stress/Risk ---
    # HR: Cao (100-140), SpO2: Bình thường, HRV: Thấp (15-45), Accel: Thấp/Trung bình
    data.append(pd.DataFrame({
        FEATURES[0]: np.random.uniform(100, 140, N).astype(int),
        FEATURES[1]: np.random.uniform(95.0, 98.5, N).round(1),
        FEATURES[2]: np.random.uniform(15, 45, N).round(1),
        FEATURES[3]: np.random.uniform(0.95, 1.2, N).round(2),
        LABEL: 1
    }))

    # --- Lớp 2: Motion ---
    # HR: Cao do vận động, Accel: Rất cao (>1.8g)
    data.append(pd.DataFrame({
        FEATURES[0]: np.random.uniform(90, 160, N).astype(int),
        FEATURES[1]: np.random.uniform(96.0, 99.5, N).round(1),
        FEATURES[2]: np.random.uniform(25, 75, N).round(1),
        FEATURES[3]: np.random.uniform(1.8, 8.0, N).round(2),
        LABEL: 2
    }))
    
    # --- Lớp 3: Low SpO2 ---
    # SpO2: Thấp nguy hiểm (<94%), HR: Tăng nhẹ bù trừ
    data.append(pd.DataFrame({
        FEATURES[0]: np.random.uniform(85, 125, N).astype(int),
        FEATURES[1]: np.random.uniform(80.0, 93.9, N).round(1),
        FEATURES[2]: np.random.uniform(30, 65, N).round(1),
        FEATURES[3]: np.random.uniform(0.92, 1.15, N).round(2),
        LABEL: 3
    }))
    
    # --- Lớp 4: Arrhythmia (Rối loạn nhịp) ---
    # HR: Rất nhanh (>145) HOẶC Rất chậm (<50), HRV: Cực thấp (<22)
    hr_fast = np.random.uniform(145, 190, N//2)
    hr_slow = np.random.uniform(30, 50, N - N//2)
    # Nối mảng và xáo trộn
    hr_combined = np.concatenate([hr_fast, hr_slow]).astype(int)
    np.random.shuffle(hr_combined)

    data.append(pd.DataFrame({
        FEATURES[0]: hr_combined,
        FEATURES[1]: np.random.uniform(94.0, 99.0, N).round(1),
        FEATURES[2]: np.random.uniform(5, 22, N).round(1),
        FEATURES[3]: np.random.uniform(0.85, 1.15, N).round(2),
        LABEL: 4
    }))

    # Gộp tất cả và xáo trộn ngẫu nhiên
    df_combined = pd.concat(data).sample(frac=1, random_state=RANDOM_SEED).reset_index(drop=True)
    
    elapsed = time.time() - start_time
    print(f"   -> Hoàn thành sinh dữ liệu trong {elapsed:.2f} giây.")
    print(f"   -> Dung lượng dữ liệu ước tính trong RAM: {df_combined.memory_usage(deep=True).sum() / 1024**2:.2f} MB")
    
    return df_combined

# =========================================================
# 3. HÀM CHÍNH (MAIN PROCESS)
# =========================================================
def main():
    print("="*60)
    print(f"BẮT ĐẦU QUY TRÌNH TRAINING MODEL ({NUM_SAMPLES} SAMPLES)")
    print("="*60)

    # --- BƯỚC 1: Tải/Sinh dữ liệu ---
    df = generate_synthetic_data(NUM_SAMPLES)

    X = df[FEATURES]
    y = df[LABEL]

    # --- BƯỚC 2: Chia tập dữ liệu (Split) ---
    print("\n[2/5] Chia tập dữ liệu Training (70%) và Testing (30%)...")
    X_train, X_test, y_train, y_test = train_test_split(
        X, y, test_size=0.3, random_state=RANDOM_SEED, stratify=y
    )
    print(f"   -> Training samples: {len(X_train):,}")
    print(f"   -> Testing samples:  {len(X_test):,}")

    # --- BƯỚC 3: Cấu hình và Đào tạo Model ---
    print("\n[3/5] Khởi tạo và Đào tạo Random Forest...")
    print("   -> Cấu hình: 100 cây, độ sâu max 15, sử dụng tất cả nhân CPU.")
    
    model = RandomForestClassifier(
        n_estimators=100,      # Số lượng cây (đủ lớn cho 1M mẫu mà không quá chậm)
        max_depth=15,          # Giới hạn độ sâu để tránh quá tải bộ nhớ ESP32 sau này
        min_samples_leaf=10,   # Giảm nhiễu
        random_state=RANDOM_SEED, 
        class_weight='balanced',
        n_jobs=-1,             # Dùng đa luồng (Multi-core)
        verbose=1              # Hiện tiến trình
    )

    train_start = time.time()
    model.fit(X_train, y_train)
    train_end = time.time()
    print(f"   -> Đào tạo HOÀN TẤT trong {train_end - train_start:.2f} giây.")

    # --- BƯỚC 4: Đánh giá Model ---
    print("\n[4/5] Đánh giá độ chính xác trên tập Test...")
    y_pred = model.predict(X_test)

    accuracy = accuracy_score(y_test, y_pred)
    print(f"\n   >>> ĐỘ CHÍNH XÁC (ACCURACY): {accuracy * 100:.4f}% <<<\n")

    print("--- Báo cáo chi tiết ---")
    print(classification_report(y_test, y_pred, target_names=TARGET_NAMES, digits=4))

    print("--- Ma trận nhầm lẫn (Confusion Matrix) ---")
    print(confusion_matrix(y_test, y_pred))

    # --- BƯỚC 5: Lưu Model và Kiểm tra Demo ---
    print("\n[5/5] Lưu Model và Chạy Demo kiểm thử...")
    
    joblib.dump(model, OUTPUT_MODEL_FILE)
    file_size = os.path.getsize(OUTPUT_MODEL_FILE) / (1024 * 1024)
    print(f"   -> Đã lưu model vào file: {OUTPUT_MODEL_FILE}")
    print(f"   -> Kích thước file: {file_size:.2f} MB")

    # Hàm chạy demo dự đoán
    def predict_demo(hr, spo2, hrv, accel):
        # Tạo DataFrame đúng chuẩn để tránh cảnh báo
        input_data = pd.DataFrame([[hr, spo2, hrv, accel]], columns=FEATURES)
        pred = model.predict(input_data)[0]
        prob = model.predict_proba(input_data)[0]
        max_prob = max(prob) * 100
        return pred, max_prob

    print("\n--- KẾT QUẢ DỰ ĐOÁN DEMO ---")
    
    # Case 0: Bình thường
    p1, prob1 = predict_demo(75, 98.5, 65.0, 1.01)
    print(f"1. HR=75,  SpO2=98.5, HRV=65, Acc=1.0 -> Dự đoán: {TARGET_NAMES[p1]} ({prob1:.1f}%)")

    # Case 1: Stress (HR cao, HRV thấp)
    p2, prob2 = predict_demo(130, 97.0, 25.0, 1.05)
    print(f"2. HR=130, SpO2=97.0, HRV=25, Acc=1.0 -> Dự đoán: {TARGET_NAMES[p2]} ({prob2:.1f}%)")

    # Case 2: Chuyển động (Accel cao)
    p3, prob3 = predict_demo(140, 97.0, 50.0, 3.50)
    print(f"3. HR=140, SpO2=97.0, HRV=50, Acc=3.5 -> Dự đoán: {TARGET_NAMES[p3]} ({prob3:.1f}%)")
    
    # Case 3: Suy hô hấp (SpO2 thấp)
    p4, prob4 = predict_demo(110, 88.0, 40.0, 1.00)
    print(f"4. HR=110, SpO2=88.0, HRV=40, Acc=1.0 -> Dự đoán: {TARGET_NAMES[p4]} ({prob4:.1f}%)")

    # Case 4: Rối loạn nhịp (HR cực cao, HRV cực thấp)
    p5, prob5 = predict_demo(170, 96.0, 12.0, 1.02)
    print(f"5. HR=170, SpO2=96.0, HRV=12, Acc=1.0 -> Dự đoán: {TARGET_NAMES[p5]} ({prob5:.1f}%)")

    print("\n" + "="*60)
    print("CHƯƠNG TRÌNH HOÀN TẤT THÀNH CÔNG!")
    print("="*60)

# Bắt buộc phải có dòng này để chạy đa luồng trên Windows
if __name__ == "__main__":
    main()