#include "freertos/FreeRTOS.h"
#include "freertos/task.h" 
#include "esp_system.h"
#include "nvs_flash.h"
#include "main.h" 
#include "max30102_api.h"
#include "algorithm.h" 
#include "i2c_api.h" 
#include "oled_driver.h" 
#include "mpu6050_api.h" 
#include "driver/gpio.h" 
#include "driver/ledc.h" 
#include <stdio.h>
#include <stdint.h>
#include <stdlib.h> 
#include "esp_log.h" 
#include <math.h> 
#include <string.h> 

// THÊM: Include file ML mới 
// Đảm bảo file model_prediction.h đã được copy vào src/
//#include "model_prediction.h" 
#include "model_prediction.c"

static const char *TAG = "MAX30102_APP";

// =========================================================
// CẤU HÌNH VÀ BIẾN GLOBAL
// =========================================================

#define BUZZER_GPIO 5 
#define ACCEL_THRESHOLD_DEMO 1.1f 
#define ACCEL_THRESHOLD_MOTION 1.5f 

#define LEDC_TIMER LEDC_TIMER_0
#define LEDC_MODE LEDC_LOW_SPEED_MODE
#define LEDC_CHANNEL LEDC_CHANNEL_0
#define LEDC_DUTY_RES LEDC_TIMER_10_BIT 
#define LEDC_FREQUENCY 4000 

#define DELAY_AMOSTRAGEM 40
#define CYCLE_DELAY_MS 50 

// BIẾN PLOT BIỂU ĐỒ
#define HR_PLOT_POINTS 20          // Lưu trữ 20 điểm HR gần nhất (10 giây)
static int hr_history[HR_PLOT_POINTS] = {0};
static int hr_history_index = 0;

// THAM SỐ VẼ BIỂU ĐỒ (Giả định OLED 128x64)
#define CHART_Y_MIN 40             // Bắt đầu vẽ từ tọa độ Y=40 
#define CHART_HEIGHT 23            // Chiều cao biểu đồ 
#define HR_BASE_BPM 50             // HR tối thiểu cho scaling
#define HR_MAX_BPM 150             // HR tối đa cho scaling
#define HR_RANGE (HR_MAX_BPM - HR_BASE_BPM)


// Các biến lưu trữ dữ liệu
int32_t red_data = 0;
int32_t ir_data = 0;
int32_t red_data_buffer[BUFFER_SIZE]; 
int32_t ir_data_buffer[BUFFER_SIZE];
double auto_correlationated_data[BUFFER_SIZE];

Oled_t oled_dev; 

static int heart_frame_counter = 0; 
static float g_hrv_rmssd = 0.0f;
static char g_stress_status[16] = "N/A"; 

// Biến MPU6050
static float g_accel_x = 0.0f;
static float g_accel_y = 0.0f;
static float g_accel_z = 0.0f;
static float g_total_accel = 0.0f; 
static bool is_user_moving = false; 

// =========================================================
// KHAI BÁO HÀM CỤC BỘ VÀ LOGIC CẢNH BÁO
// =========================================================
void fill_buffers_data();
void sensor_data_reader(void *pvParameters);

/**
 * @brief Kích hoạt Buzzer cho một lần bíp (DC - Dùng cho cảnh báo nhẹ)
 */
void trigger_buzzer_dc(int duration_ms) {
    gpio_set_level(BUZZER_GPIO, 1);
    vTaskDelay(pdMS_TO_TICKS(duration_ms));
    gpio_set_level(BUZZER_GPIO, 0);
}

/**
 * @brief Bắt đầu tạo tone (sóng PWM) - Còi báo động
 */
void start_buzzer_tone() {
    ledc_set_duty(LEDC_MODE, LEDC_CHANNEL, 512); 
    ledc_update_duty(LEDC_MODE, LEDC_CHANNEL);
}

/**
 * @brief Dừng tone (Tắt PWM)
 */
void stop_buzzer_tone() {
    ledc_set_duty(LEDC_MODE, LEDC_CHANNEL, 0);
    ledc_update_duty(LEDC_MODE, LEDC_CHANNEL);
}

// Hàm hiển thị thông tin lên OLED
void display_task_values(int heart_rate, double spo2, double correlation) {
    char buffer[32];
    
    oled_clear_screen(&oled_dev); 
    
    int current_frame = heart_frame_counter % 2; 

    if (correlation >= 0.7 && heart_rate >= 40 && spo2 > 80.0) {
        
        // Dòng 1: HR & Tim đập
        oled_draw_heart_animation(&oled_dev, 0, 13, current_frame); 
        sprintf(buffer, "HR: %d bpm", heart_rate);
        oled_draw_text(&oled_dev, 0, 0, buffer); 

        // Dòng 2: SpO2
        sprintf(buffer, "SpO2: %.1f %%", spo2);
        oled_draw_text(&oled_dev, 1, 0, buffer); 
        
        // Dòng 3: HRV
        if (g_hrv_rmssd > 0.0f) {
            sprintf(buffer, "HRV: %.1f ms", g_hrv_rmssd);
        } else {
            sprintf(buffer, "HRV: N/A");
        }
        oled_draw_text(&oled_dev, 2, 0, buffer);
        
        // Dòng 4: Trạng thái cơ thể/Nguy cơ
        sprintf(buffer, "Status: %s", g_stress_status);
        oled_draw_text(&oled_dev, 3, 0, buffer); 
        
        // Dòng 5: Gia tốc (Accel Total/Motion Status)
        sprintf(buffer, "AccT: %.1f (%s)", g_total_accel, is_user_moving ? "M" : "S");
        oled_draw_text(&oled_dev, 4, 0, buffer); 

        // =========================================================
        // === VẼ BIỂU ĐỒ NHỊP TIM (HR CHART) ===
        // =========================================================
        int x_pos_prev = 0;
        int y_pos_prev = 0;
        int x_step = 128 / HR_PLOT_POINTS; 

        for (int i = 0; i < HR_PLOT_POINTS; i++) {
            // Đọc dữ liệu lịch sử theo thứ tự cũ nhất -> mới nhất
            int current_index = (hr_history_index + i) % HR_PLOT_POINTS;
            int hr_val = hr_history[current_index];
            
            if (hr_val > 0) {
                // 1. Chuẩn hóa giá trị HR về [0, 1]
                float normalized_hr = 0.0f;
                if (hr_val > HR_BASE_BPM) {
                     normalized_hr = (float)(hr_val - HR_BASE_BPM);
                }
                
                // Giới hạn trong phạm vi HR_RANGE
                if (normalized_hr > HR_RANGE) normalized_hr = HR_RANGE; 

                // 2. Map tới tọa độ Y: Đảo ngược trục Y (64-pixel)
                int y_offset = (int)((normalized_hr / HR_RANGE) * CHART_HEIGHT);
                int y_pos_current = CHART_Y_MIN + CHART_HEIGHT - y_offset;

                // 3. Tọa độ X
                int x_pos_current = i * x_step;
                
                // Vị trí của điểm cũ (index - 1)
                int prev_index = (hr_history_index + i - 1 + HR_PLOT_POINTS) % HR_PLOT_POINTS;

                if (i > 0 && hr_history[prev_index] > 0) {
                    // Tính lại y_pos_prev từ giá trị cũ
                    int hr_val_prev = hr_history[prev_index];
                    float normalized_hr_prev = (float) ( (hr_val_prev > HR_BASE_BPM) ? (hr_val_prev - HR_BASE_BPM) : 0);
                    if (normalized_hr_prev > HR_RANGE) normalized_hr_prev = HR_RANGE; 

                    int y_offset_prev = (int)((normalized_hr_prev / HR_RANGE) * CHART_HEIGHT);
                    y_pos_prev = CHART_Y_MIN + CHART_HEIGHT - y_offset_prev;

                    x_pos_prev = (i - 1) * x_step;

                    // Vẽ đường nối từ điểm trước đó đến điểm hiện tại
                    oled_draw_line(&oled_dev, x_pos_prev, y_pos_prev, x_pos_current, y_pos_current);
                }
            }
        }
        // =========================================================

    } else {
        // Cảnh báo tín hiệu kém
        oled_draw_text(&oled_dev, 0, 0, "Input Your Finger"); 
        
        if (correlation > 0.0) {
            sprintf(buffer, "Low Qual: %.1f", correlation);
            oled_draw_text(&oled_dev, 1, 0, buffer); 
        } else {
            oled_draw_text(&oled_dev, 1, 0, "Waiting for signal");
        }
    }
    
    oled_update_display(&oled_dev); 
}

/**
 * @brief Khởi tạo driver LEDC (PWM) cho Buzzer
 */
static void init_ledc_driver() {
    ledc_timer_config_t ledc_timer = {
        .speed_mode = LEDC_MODE,
        .duty_resolution = LEDC_DUTY_RES,
        .timer_num = LEDC_TIMER,
        .freq_hz = LEDC_FREQUENCY,
        .clk_cfg = LEDC_AUTO_CLK,
    };
    ESP_ERROR_CHECK(ledc_timer_config(&ledc_timer));

    ledc_channel_config_t ledc_channel = {
        .speed_mode = LEDC_MODE,
        .channel = LEDC_CHANNEL,
        .timer_sel = LEDC_TIMER,
        .intr_type = LEDC_INTR_DISABLE,
        .gpio_num = BUZZER_GPIO,
        .duty = 0, // Bắt đầu ở trạng thái tắt
        .hpoint = 0,
    };
    ESP_ERROR_CHECK(ledc_channel_config(&ledc_channel));

    ESP_LOGI(TAG, "LEDC (PWM) driver initialized on GPIO %d at %d Hz.", BUZZER_GPIO, LEDC_FREQUENCY);
}

void app_main(void)
{
    // 1. Khởi tạo NVS
    esp_err_t ret = nvs_flash_init();
    if (ret == ESP_ERR_NVS_NO_FREE_PAGES || ret == ESP_ERR_NVS_NEW_VERSION_FOUND) {
        ESP_ERROR_CHECK(nvs_flash_erase());
        ret = nvs_flash_init();
    }
    ESP_ERROR_CHECK(ret);
    
    // 2. Khởi tạo Buzzer
    init_ledc_driver(); 
    
    // 3. Khởi tạo I2C
    i2c_bus_driver_install(); 

    // 4. Khởi tạo MAX30102
    ESP_LOGI(TAG, "Initializing MAX30102...");
    max30102_init(&max30102_configuration); 
    
    // 5. Khởi tạo MPU6050
    ESP_LOGI(TAG, "Initializing MPU6050...");
    mpu6050_init(); 

    // 6. Khởi tạo OLED
    ESP_LOGI(TAG, "Initializing OLED...");
    if(oled_init(&oled_dev) != ESP_OK) {
        ESP_LOGE(TAG, "OLED initialization FAILED! Check address/Bus integrity.");
    }
    
    oled_draw_text(&oled_dev, 0, 0, "System Ready"); 
    oled_update_display(&oled_dev); 
    
    vTaskDelay(pdMS_TO_TICKS(500)); 

    // 7. Bắt đầu Task xử lý dữ liệu
    ESP_LOGI(TAG, "Starting sensor reader task on Core 1");
    xTaskCreatePinnedToCore(sensor_data_reader, "Data", 10240, NULL, 2, NULL, 1);
}


void sensor_data_reader(void *pvParameters)
{
    vTaskDelay(pdMS_TO_TICKS(100)); 
    
    init_time_array();
    
    uint64_t ir_mean;
    uint64_t red_mean;
    float temperature;
    double r0_autocorrelation;

    for(;;){
        // A. Thu thập dữ liệu MAX30102
        fill_buffers_data();

        // B. Thu thập dữ liệu MPU-6050
        mpu6050_read_accel(&g_accel_x, &g_accel_y, &g_accel_z); 
        g_total_accel = sqrtf(g_accel_x*g_accel_x + g_accel_y*g_accel_y + g_accel_z*g_accel_z);
        
        is_user_moving = (g_total_accel > ACCEL_THRESHOLD_MOTION); 

        // C. PHÁT HIỆN GIA TỐC (DEMO - Bỏ qua vì đã có ML xử lý Moving)
        // Chỉ log thông tin
        if (g_total_accel > ACCEL_THRESHOLD_DEMO) {
            ESP_LOGD(TAG, "Significant Motion Detected: %.2f g", g_total_accel);
        }
        
        // D. Xử lý dữ liệu Sinh lý (HR/SpO2/HRV)
        temperature = get_max30102_temp();
        remove_dc_part(ir_data_buffer, red_data_buffer, &ir_mean, &red_mean); 
        remove_trend_line(ir_data_buffer);
        remove_trend_line(red_data_buffer);
        
        double pearson_correlation = correlation_datay_datax(red_data_buffer, ir_data_buffer);
        int heart_rate = calculate_heart_rate(ir_data_buffer, &r0_autocorrelation, auto_correlationated_data);
        
        bool is_hr_valid = (heart_rate >= 40 && heart_rate <= 200);

        if(pearson_correlation >= 0.7 && is_hr_valid){ 
            double spo2 = spo2_measurement(ir_data_buffer, red_data_buffer, ir_mean, red_mean);
            
            g_hrv_rmssd = calculate_hrv_rmssd(ir_data_buffer, BUFFER_SIZE);
            
            // LƯU HR VÀO LỊCH SỬ CHO BIỂU ĐỒ
            if (heart_rate >= HR_BASE_BPM && heart_rate <= HR_MAX_BPM) {
                hr_history[hr_history_index] = heart_rate;
            } else {
                hr_history[hr_history_index] = (heart_rate < HR_BASE_BPM) ? HR_BASE_BPM : HR_MAX_BPM; 
            }
            hr_history_index = (hr_history_index + 1) % HR_PLOT_POINTS;
            
            // =========================================================================
            // E. PHÂN TÍCH VÀ CẢNH BÁO BẰNG MACHINE LEARNING (5 LỚP)
            // =========================================================================
            
            // 1. Chuẩn bị đầu vào (Không dùng const để tránh lỗi warning)
            double input_features[4] = {
                (double)heart_rate,      // HR (bpm)
                spo2,                    // SpO2 (%)
                (double)g_hrv_rmssd,     // HRV (ms)
                (double)g_total_accel    // Accel (g)
            };
            
            // 2. Chuẩn bị đầu ra cho 5 lớp
            double output_scores[5]; 

            // 3. Gọi hàm dự đoán
            score(input_features, output_scores); 
            
            // 4. Tìm lớp có xác suất cao nhất
            int prediction = 0;
            double max_score = output_scores[0];
            for (int i = 1; i < 5; i++) { 
                if (output_scores[i] > max_score) {
                    max_score = output_scores[i];
                    prediction = i;
                }
            }
            
            // 5. Logic Xử lý Cảnh báo dựa trên 5 Lớp
            bool acute_danger = false;  // Nguy hiểm cấp tính (Hú còi to)
            bool warning = false;       // Cảnh báo nhẹ (Bíp ngắn)
            
            switch (prediction) {
                case 0: // Normal
                    strcpy(g_stress_status, "Normal");
                    break;
                    
                case 1: // Stress/Risk
                    strcpy(g_stress_status, "Stress/Risk");
                    warning = true; 
                    break;
                    
                case 2: // Moving
                    strcpy(g_stress_status, "Moving");
                    // Không cảnh báo khi đang vận động
                    break;
                    
                case 3: // Low SpO2 (Suy hô hấp)
                    strcpy(g_stress_status, "Low SpO2!");
                    acute_danger = true; 
                    break;
                    
                case 4: // Arrhythmia (Rối loạn nhịp)
                    strcpy(g_stress_status, "Arrhythmia!");
                    acute_danger = true; 
                    break;
                    
                default:
                    strcpy(g_stress_status, "Unknown");
            }
            
            // 6. Thực hiện hành động Cảnh báo
            if (acute_danger) {
                // Nguy hiểm: Hú còi 1.5 giây
                start_buzzer_tone();
                vTaskDelay(pdMS_TO_TICKS(1500)); 
                stop_buzzer_tone();
            } else if (warning) {
                // Cảnh báo nhẹ: Bíp 100ms
                trigger_buzzer_dc(100); 
            }
            
            // In log chi tiết để debug
            printf("\n| ML PREDICTION: Class %d (%s) | Inputs: HR=%d, SpO2=%.1f, HRV=%.1f, Acc=%.2f |\n", 
                   prediction, g_stress_status, heart_rate, spo2, g_hrv_rmssd, g_total_accel);
            
            heart_frame_counter++; 
            display_task_values(heart_rate, spo2, pearson_correlation); 

        } else {
            // Tín hiệu kém
            printf("\n| WARNING: Low signal quality (Corr: %.2f). Temp:%.2f.\n", pearson_correlation, temperature);
            
            strcpy(g_stress_status, "N/A");
            g_hrv_rmssd = 0.0f;
            
            display_task_values(0, 0.0, pearson_correlation); 
        }
        
        vTaskDelay(pdMS_TO_TICKS(CYCLE_DELAY_MS));
    }
}


void fill_buffers_data()
{
    for(int i = 0; i < BUFFER_SIZE; i++){
        read_max30102_fifo(&red_data, &ir_data);
        ir_data_buffer[i] = ir_data;
        red_data_buffer[i] = red_data;
        
        ir_data = 0;
        red_data = 0;
        vTaskDelay(pdMS_TO_TICKS(DELAY_AMOSTRAGEM));
    }
}