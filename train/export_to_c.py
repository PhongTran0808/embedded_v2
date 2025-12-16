import joblib
import m2cgen as m2c
import os

# =========================================================
# CẤU HÌNH
# =========================================================
# Tên file mô hình đã train (phải khớp với tên file bạn đã tạo ở bước trước)
INPUT_MODEL_FILE = 'enhanced_health_model_5_classes.joblib'

# Tên file C sẽ được tạo ra
OUTPUT_C_FILE = 'model_prediction.c'
OUTPUT_H_FILE = 'model_prediction.h'

def main():
    print(f"--- BẮT ĐẦU CHUYỂN ĐỔI MÔ HÌNH: {INPUT_MODEL_FILE} ---")

    # 1. Kiểm tra file tồn tại
    if not os.path.exists(INPUT_MODEL_FILE):
        print(f"LỖI: Không tìm thấy file '{INPUT_MODEL_FILE}'. Hãy chạy training trước!")
        return

    # 2. Tải mô hình
    print("1. Đang tải mô hình...")
    model = joblib.load(INPUT_MODEL_FILE)

    # 3. Chuyển đổi sang mã C
    # function_name='score': Tên hàm trong C sẽ là score()
    print("2. Đang sinh mã C (m2cgen)...")
    c_code = m2c.export_to_c(model, function_name='score')

    # 4. Ghi file .c (Source)
    print(f"3. Đang ghi file {OUTPUT_C_FILE}...")
    # SỬA LỖI Ở ĐÂY: Thêm encoding='utf-8'
    with open(OUTPUT_C_FILE, 'w', encoding='utf-8') as f:
        # Thêm các include cần thiết cho tính toán
        f.write('/* Tu dong sinh boi m2cgen & export_to_c.py */\n') # Đã bỏ dấu tiếng Việt để an toàn tuyệt đối
        f.write('#include <math.h>\n')
        f.write('#include "model_prediction.h"\n\n')
        f.write(c_code)

    # 5. Ghi file .h (Header)
    print(f"4. Đang ghi file {OUTPUT_H_FILE}...")
    # SỬA LỖI Ở ĐÂY: Thêm encoding='utf-8'
    with open(OUTPUT_H_FILE, 'w', encoding='utf-8') as f:
        header_content = """#ifndef MODEL_PREDICTION_H
#define MODEL_PREDICTION_H

#ifdef __cplusplus
extern "C" {
#endif

// Ham du doan:
// input: Mang chua 4 dac trung [HR, SpO2, HRV, Accel]
// output: Mang chua xac suat cua 5 lop
void score(double * input, double * output);

#ifdef __cplusplus
}
#endif

#endif // MODEL_PREDICTION_H
"""
        f.write(header_content)

    print("\n✅ CHUYỂN ĐỔI THÀNH CÔNG!")
    print(f"-> File C: {os.path.abspath(OUTPUT_C_FILE)}")
    print(f"-> File H: {os.path.abspath(OUTPUT_H_FILE)}")
    print("\n[HƯỚNG DẪN TIẾP THEO]")
    print("1. Copy 2 file 'model_prediction.c' và 'model_prediction.h' vào thư mục 'src/' của dự án ESP32.")
    print("2. Cập nhật 'src/CMakeLists.txt' để thêm 'model_prediction.c' vào danh sách SRCS.")
    print("3. Build dự án.")

if __name__ == "__main__":
    main()