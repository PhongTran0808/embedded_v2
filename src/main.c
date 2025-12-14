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
#include "driver/ledc.h" // SỬ DỤNG PWM CHO TONE
#include <stdio.h>
#include <stdint.h>
#include <stdlib.h> 
#include "esp_log.h" 
#include <math.h> 
#include <string.h> 

static const char *TAG = "MAX30102_APP";

// =========================================================
// CẤU HÌNH VÀ BIẾN GLOBAL
// =========================================================

#define BUZZER_GPIO 5 
#define ACCEL_THRESHOLD_DEMO 1.1f 
#define ACCEL_THRESHOLD_MOTION 1.5f 

// Cấu hình PWM cho Buzzer
#define LEDC_TIMER LEDC_TIMER_0
#define LEDC_MODE LEDC_LOW_SPEED_MODE
#define LEDC_CHANNEL LEDC_CHANNEL_0
#define LEDC_DUTY_RES LEDC_TIMER_10_BIT // 10 bits of resolution
#define LEDC_FREQUENCY 4000 // Tần số 4 kHz (Tạo âm thanh)

int32_t red_data = 0;
int32_t ir_data = 0;
int32_t red_data_buffer[BUFFER_SIZE]; 
int32_t ir_data_buffer[BUFFER_SIZE];
double auto_correlationated_data[BUFFER_SIZE];

#define DELAY_AMOSTRAGEM 40
#define CYCLE_DELAY_MS 500 

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
 * @brief Bắt đầu tạo tone (sóng PWM)
 */
void start_buzzer_tone() {
    // Duty Cycle 50% (512/1024)
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

/**
 * @brief Kiểm tra nguy cơ tim mạch cấp tính.
 */
bool check_acute_risk(int hr, double spo2, float hrv, bool is_moving) {
    
    // Loại trừ cảnh báo giả khi vận động (High HR only)
    if (is_moving && hr > 120) {
        ESP_LOGW(TAG, "Risk check skipped: High HR due to motion.");
        return false;
    }
    
    // Nguy cơ tim mạch cấp tính (Extreme Rate, Low SpO2, Low HRV)
    if (hr > 130 || hr < 40) {
        ESP_LOGE(TAG, "ACUTE RISK: Extreme Heart Rate (%d BPM)", hr);
        return true; 
    }
    if (spo2 < 90.0) {
        ESP_LOGE(TAG, "ACUTE RISK: Low SpO2 (%.1f %%)", spo2);
        return true; 
    }
    if (hrv > 0.0f && hrv < 20.0f) {
        ESP_LOGE(TAG, "ACUTE RISK: Low HRV (%.1f ms)", hrv);
        return true;
    }
    return false;
}


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

    } else {
        // Cảnh báo tín hiệu
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
    // Cấu hình Timer
    ledc_timer_config_t ledc_timer = {
        .speed_mode = LEDC_MODE,
        .duty_resolution = LEDC_DUTY_RES,
        .timer_num = LEDC_TIMER,
        .freq_hz = LEDC_FREQUENCY,
        .clk_cfg = LEDC_AUTO_CLK,
    };
    ESP_ERROR_CHECK(ledc_timer_config(&ledc_timer));

    // Cấu hình Channel (GPIO)
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
    
    // 2. Khởi tạo PWM cho Buzzer (Thay thế gpio_set_direction)
    init_ledc_driver(); 
    
    // 3. Khởi tạo I2C Bus Driver
    i2c_bus_driver_install(); 

    // 4. Khởi tạo Sensors
    ESP_LOGI(TAG, "Initializing MAX30102...");
    max30102_init(&max30102_configuration); 
    
    ESP_LOGI(TAG, "Initializing MPU6050...");
    mpu6050_init(); 

    ESP_LOGI(TAG, "Initializing OLED...");
    if(oled_init(&oled_dev) != ESP_OK) {
        ESP_LOGE(TAG, "OLED initialization FAILED! Check address/Bus integrity.");
    }
    
    oled_draw_text(&oled_dev, 0, 0, "System Ready"); 
    oled_update_display(&oled_dev); 
    
    vTaskDelay(pdMS_TO_TICKS(500)); 

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
        
        // CẬP NHẬT TRẠNG THÁI VẬN ĐỘNG
        is_user_moving = (g_total_accel > ACCEL_THRESHOLD_MOTION); 

        // C. PHÁT HIỆN GIA TỐC DEMO VÀ ALARM (Ngưỡng 1.1g cho Demo)
        if (g_total_accel > ACCEL_THRESHOLD_DEMO) {
            ESP_LOGW(TAG, "!!!!! MOTION DETECTED (DEMO) !!!!! (Total Accel: %.2f g)", g_total_accel);
            
            // Kích hoạt TONE PWM trong 5 giây cho DEMO
            start_buzzer_tone();
            vTaskDelay(pdMS_TO_TICKS(5000)); // Tone 5 giây
            stop_buzzer_tone();
            
            ESP_LOGW(TAG, "Alarm sequence completed.");

        } else {
            ESP_LOGI(TAG, "MPU: Accel (Total:%.2f g, Moving: %s)", g_total_accel, is_user_moving ? "YES" : "NO");
        }
        
        // D. Xử lý dữ liệu Sinh lý (HR/SpO2/HRV)
        temperature = get_max30102_temp();
        // HÀM NÀY LƯU MEAN VÀO ir_mean, red_mean
        remove_dc_part(ir_data_buffer, red_data_buffer, &ir_mean, &red_mean); 
        remove_trend_line(ir_data_buffer);
        remove_trend_line(red_data_buffer);
        
        double pearson_correlation = correlation_datay_datax(red_data_buffer, ir_data_buffer);
        int heart_rate = calculate_heart_rate(ir_data_buffer, &r0_autocorrelation, auto_correlationated_data);
        
        bool is_hr_valid = (heart_rate >= 40 && heart_rate <= 200);

        if(pearson_correlation >= 0.7 && is_hr_valid){ 
            // SỬA LỖI: TRUYỀN GIÁ TRỊ (ir_mean, red_mean) thay vì địa chỉ
            double spo2 = spo2_measurement(ir_data_buffer, red_data_buffer, ir_mean, red_mean);
            
            // TÍNH HRV VÀ DỰ ĐOÁN STRESS
            g_hrv_rmssd = calculate_hrv_rmssd(ir_data_buffer, BUFFER_SIZE);
            predict_stress(heart_rate, spo2, g_hrv_rmssd, g_stress_status); 

            // E. KIỂM TRA NGUY CƠ TIM MẠCH CẤP TÍNH (SỬ DỤNG LOGIC MPU TÍNH TOÁN)
            bool acute_danger = check_acute_risk(heart_rate, spo2, g_hrv_rmssd, is_user_moving);

            if (acute_danger) {
                strcpy(g_stress_status, "ACUTE DANGER!"); 
                
                // Kích hoạt TONE PWM nghiêm trọng (1.5 giây)
                start_buzzer_tone();
                vTaskDelay(pdMS_TO_TICKS(1500)); 
                stop_buzzer_tone();
            }
            
            // Cảnh báo Stress nhẹ (Sử dụng DC "tick" - chỉ dùng khi không nguy hiểm cấp tính)
            if (!acute_danger && strcmp(g_stress_status, "Stress") == 0) {
                 trigger_buzzer_dc(50); // Chỉ bíp DC 50ms
            }

            printf("\n| MEASUREMENT (HR:%d, Status:%s, Accel Total:%.1f g)\n", heart_rate, g_stress_status, g_total_accel);
            
            heart_frame_counter++; 
            display_task_values(heart_rate, spo2, pearson_correlation); 

        } else {
             printf("\n| WARNING: Low signal quality (Corr: %.2f). Temp:%.2f.\n", pearson_correlation, temperature);
             
             // Reset trạng thái nếu tín hiệu kém
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