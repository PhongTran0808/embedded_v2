#include "algorithm.h"
#include <math.h>
#include <stdbool.h>
#include <string.h> 
#include <stdlib.h> // Cần cho abs()

// Khai báo lại time_array (Đã có trong header)
double time_array[BUFFER_SIZE];

#define DEBUG true
#define MINIMUM_RATIO 0.3
#define SPO2_A 1.5958422
#define SPO2_B -34.6596622
#define SPO2_C 112.6898759

// =========================================================
// HÀM HỖ TRỢ PHÂN TÍCH HRV
// =========================================================

/**
 * @brief Hàm tính RMSSD và SDNN từ mảng RR-Intervals
 * @param rmssd_out: Con trỏ để lưu trữ kết quả RMSSD
 * @param sdnn_out: Con trỏ để lưu trữ kết quả SDNN (không dùng trong main.c hiện tại, nhưng được tính)
 */
static void compute_hrv_metrics(const int *rr_data, int count, float *rmssd_out, float *sdnn_out) {
    if (count < 2) {
        *rmssd_out = 0.0f;
        *sdnn_out = 0.0f;
        return;
    }
    
    double sum_rr = 0.0;
    for (int i = 0; i < count; i++) {
        sum_rr += rr_data[i];
    }
    float mean_rr = sum_rr / count;

    // 1. Tính RMSSD (Root Mean Square of Successive Differences)
    double sum_sq_diff = 0.0;
    int valid_diff_count = 0;
    float artifact_threshold = 0.2f;

    for (int i = 1; i < count; i++) {
        int diff = rr_data[i] - rr_data[i - 1];
        // Loại bỏ Artifact: Nếu sự khác biệt quá lớn (ví dụ > 20%), bỏ qua
        if (rr_data[i-1] != 0 && (float)abs(diff) > (float)rr_data[i-1] * artifact_threshold) {
             continue; 
        }
        sum_sq_diff += (double)diff * diff;
        valid_diff_count++;
    }
    
    *rmssd_out = (valid_diff_count > 0) ? sqrt(sum_sq_diff / valid_diff_count) : 0.0f;


    // 2. Tính SDNN (Standard Deviation of NN intervals)
    double sum_sq_dev = 0.0;
    for (int i = 0; i < count; i++) {
        double deviation = rr_data[i] - mean_rr;
        sum_sq_dev += deviation * deviation;
    }
    *sdnn_out = (count > 1) ? sqrt(sum_sq_dev / (count - 1)) : 0.0f;
}

/**
 * @brief Hàm tìm các đỉnh R-peak (systolic peak) trong dữ liệu IR
 * và lưu trữ khoảng thời gian giữa chúng (RR-Intervals).
 */
static int find_peaks(int32_t *ir_data, int *rr_intervals) {
    int peak_indices[BUFFER_SIZE / 2]; 
    int peak_count = 0;
    
    // Ngưỡng động: 30% giá trị đỉnh lớn nhất
    int max_ir = 0;
    for (int i = 0; i < BUFFER_SIZE; i++) {
        if (ir_data[i] > max_ir) max_ir = ir_data[i];
    }
    // 
    int threshold = max_ir * 0.3; 
    
    // Khoảng cách tối thiểu giữa các đỉnh (300ms = Max 200 BPM)
    const int min_peak_distance_samples = 300 / DELAY_AMOSTRAGEM; 
    
    int last_peak_index = -min_peak_distance_samples; 

    for (int i = 1; i < BUFFER_SIZE - 1; i++) {
        // Kiểm tra: Giá trị > Ngưỡng VÀ Đang ở đỉnh cục bộ
        if (ir_data[i] > threshold && ir_data[i] > ir_data[i - 1] && ir_data[i] > ir_data[i + 1]) {
            // Kiểm tra: Khoảng cách giữa các đỉnh
            if (i - last_peak_index >= min_peak_distance_samples) {
                peak_indices[peak_count++] = i;
                last_peak_index = i;
            }
        }
    }
    
    // Tính toán RR-Intervals (ms)
    int rr_count = 0;
    for (int i = 1; i < peak_count; i++) {
        int index_diff = peak_indices[i] - peak_indices[i - 1];
        rr_intervals[rr_count++] = index_diff * DELAY_AMOSTRAGEM;
    }
    
    return rr_count;
}

// =========================================================
// CHỨC NĂNG PHÂN TÍCH CHÍNH (HRV VÀ STRESS)
// =========================================================

float calculate_hrv_rmssd(int32_t *ir_data, size_t buffer_size)
{
    int rr_intervals[BUFFER_SIZE / 2]; 
    float rmssd, sdnn;
    
    int rr_count = find_peaks(ir_data, rr_intervals);
    
    compute_hrv_metrics(rr_intervals, rr_count, &rmssd, &sdnn);
    
    // Trả về RMSSD làm chỉ số chính cho HRV
    return rmssd;
}

void predict_stress(int hr, double spo2, float hrv, char *output_status)
{
    // LOGIC NGƯỠNG ĐÃ TÍNH ĐẾN TRẠNG THÁI STRESS/NGUY CƠ DỰA TRÊN HR VÀ HRV
    
    if (hr < 50 || hr > 180 || spo2 < 85.0 || hrv < 10.0f) {
        strcpy(output_status, "Check Sensor");
        return;
    }

    if (hr < 80 && hrv > 50.0f) {
        strcpy(output_status, "Relax");
    } 
    else if (hr > 110 && hrv < 30.0f) {
        strcpy(output_status, "Stress");
    }
    else {
        strcpy(output_status, "Normal");
    }
}

// =========================================================
// CÁC HÀM XỬ LÝ DỮ LIỆU CŨ (GIỮ NGUYÊN)
// =========================================================

void init_time_array()
{
    double time = 0;
    for(int i = 0; i < BUFFER_SIZE; i++){
        time_array[i] = time;
        time += DELAY_AMOSTRAGEM / 1000.0;
    }
}

void remove_dc_part(int32_t *ir_buffer, int32_t *red_buffer, uint64_t *ir_mean, uint64_t *red_mean)
{
    *ir_mean = 0;
    *red_mean = 0;
    for(int i = 0; i < BUFFER_SIZE; i++){
        *ir_mean += ir_buffer[i];
        *red_mean += red_buffer[i];
    }

    *ir_mean = *ir_mean / (BUFFER_SIZE);
    *red_mean = *red_mean / (BUFFER_SIZE);

    for(int i = 0; i < BUFFER_SIZE; i++){
        red_buffer[i] = red_buffer[i] - *red_mean;
        ir_buffer[i] = ir_buffer[i] - *ir_mean;
    }
}

void remove_trend_line(int32_t *buffer)
{
    double a = 0;
    double b = 0;

    calculate_linear_regression(&a, &b, buffer);

    double time = 0;
    for(int i = 0; i < BUFFER_SIZE; i++){
        buffer [i] = ((buffer[i] + (-a * time)) - b);
        time += DELAY_AMOSTRAGEM / 1000.0;
    }
}

void calculate_linear_regression(double *angular_coef, double *linear_coef, int32_t *data)
{
    int64_t sum_of_y = sum_of_elements(data);
    double sum_of_x = 325.12; 
    double sum_of_x2 = somatoria_x2();
    double sum_of_xy = sum_of_xy_elements(data);
    double sum_of_x_squared = (sum_of_x * sum_of_x);

    double temp = (sum_of_xy - (sum_of_x * sum_of_y) / BUFFER_SIZE);
    double temp2 = (sum_of_x2 - (sum_of_x_squared / BUFFER_SIZE));

    *angular_coef = temp/temp2;
    *linear_coef = ((sum_of_y/BUFFER_SIZE) - (*angular_coef*(sum_of_x/BUFFER_SIZE)));
}

double correlation_datay_datax(int32_t *data_red, int32_t *data_ir)
{
    double correlation = 0;
    double x_mean = 0;
    double y_mean = 0;
    double volatile sum_of_x = 0;
    double volatile sum_of_y = 0;
    double sum_of_x_minus_xmean2 = 0;
    double sum_of_y_minus_ymean2 = 0;
    double covar_xy = 0;
    double sx = 0; 
    double sy = 0; 

    for(int i = 0; i < BUFFER_SIZE; i++){
        sum_of_x += data_red[i];
        sum_of_y += data_ir[i];
    }
    x_mean = sum_of_x / BUFFER_SIZE;
    y_mean = sum_of_y / BUFFER_SIZE;

    for(int i = 0; i < BUFFER_SIZE; i++){
        sum_of_x_minus_xmean2 += ((data_red[i] - x_mean)*(data_red[i] - x_mean));
        sum_of_y_minus_ymean2 += ((data_ir[i] - y_mean)*(data_ir[i] - y_mean));
        covar_xy += ((data_red[i] - x_mean)*(data_ir[i] - y_mean));
    }
    sx = sqrt(sum_of_x_minus_xmean2 / (BUFFER_SIZE)); 
    sy = sqrt(sum_of_y_minus_ymean2 / (BUFFER_SIZE)); 
    covar_xy = (covar_xy / (BUFFER_SIZE));

    correlation = (covar_xy / (sx * sy));

    return correlation;
}

double spo2_measurement(int32_t *ir_data, int32_t *red_data, uint64_t ir_mean, uint64_t red_mean)
{
    double Z = 0;
    double SpO2;
    double ir_rms = rms_value(ir_data);
    double red_rms = rms_value(red_data);

    if (ir_mean == 0 || red_mean == 0) {
        return 0.0; 
    }

    Z = (red_rms/red_mean) / (ir_rms/ir_mean); 
    
    SpO2 = SPO2_A * Z * Z + SPO2_B * Z + SPO2_C; 
    
    if (SpO2 > 100.0) SpO2 = 100.0;
    if (SpO2 < 80.0) SpO2 = 80.0; 

    return SpO2;
}

int calculate_heart_rate(int32_t *ir_data, double *r0, double *auto_correlationated_data)
{
    double auto_correlation_result;
    double resultado = 0;
    
    double auto_coorelation_0 = auto_correlation_function(ir_data, 0);
    *r0 = auto_coorelation_0;
    
    double biggest_value = 0;
    int biggest_value_index = 0;
    double division;

    for(int i = 0; i < 125; i++){
        auto_correlation_result = auto_correlation_function(ir_data, i);
        division = auto_correlation_result / auto_coorelation_0;
        auto_correlationated_data[i] = division;

        if(i > 10){ 
            if(division > MINIMUM_RATIO){
                if(biggest_value < division){
                    biggest_value = division;
                    biggest_value_index = i;
                }
            }
        }
    }
    
    if (biggest_value_index > 0) {
        resultado = ((1 / (biggest_value_index * (DELAY_AMOSTRAGEM / 1000.0))) * 60);
    }
    
    if (resultado > 200 || resultado < 40) {
        return 0; 
    }

    return (int)resultado; 
}

double auto_correlation_function(int32_t *data, int32_t lag)
{
    double soma = 0;
    double resultado = 0;
    for(int i = 0; i < (BUFFER_SIZE - lag); i++){
        soma += ((data[i]) * (data[i + lag]));
    }
    resultado = soma / BUFFER_SIZE;
    return resultado;
}

int64_t sum_of_elements(int32_t *data)
{
    int64_t sum = 0;
    for(int i = 0; i < BUFFER_SIZE; i++){
        sum += data[i];
    }
    return sum;
}

double sum_of_xy_elements(int32_t *data)
{
    double sum_xy = 0;
    double time = 0;
    for(int i = 0; i < BUFFER_SIZE; i++){
        sum_xy += (data[i] * time);
        time += DELAY_AMOSTRAGEM / 1000.0;
    }
    return sum_xy;
}

double sum_of_squared_elements(int32_t *data)
{
    double sum_squared = 0;
    int time = 0;
    for(int i = 0; i < BUFFER_SIZE; i++){
        sum_squared += (data[i] * data[i]);
        time += DELAY_AMOSTRAGEM / 1000.0;
    }
    return sum_squared;
}

double somatoria_x2()
{
    float incremento = (DELAY_AMOSTRAGEM / 1000.0);
    double resultado = 0.0;
    double squared_values = 0;
    float temp = 0;

    for(int i = 0; i < BUFFER_SIZE; i++){
        squared_values = temp * temp;
        temp += incremento;
        resultado += squared_values;
    }
    return resultado;
}

double rms_value(int32_t *data)
{
    double result = 0;
    int32_t somatoria = 0;
    for(int i = 0; i <BUFFER_SIZE; i++){
        somatoria += (data[i] * data[i]);
    }
    result = sqrt(somatoria / BUFFER_SIZE);
    return result;
}