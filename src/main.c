#include "freertos/FreeRTOS.h"
#include "freertos/task.h" 
#include "esp_wifi.h"       
#include "esp_system.h"
#include "esp_event.h"
#include "nvs_flash.h"
#include "driver/gpio.h"
#include "driver/i2c.h"
#include "main.h"
#include "max30102_api.h"
#include "algorithm.h"
#include "i2c_api.h" 
//#include "ssd1306.h" // <<< ĐÃ LOẠI BỎ OLED >>>
#include <stdio.h>
#include <stdint.h>
#include <stdlib.h> 
#include "esp_log.h" 

static const char *TAG = "MAX30102_APP";

TaskHandle_t processor_handle = NULL;
TaskHandle_t sensor_reader_handle = NULL;

int32_t red_data = 0;
int32_t ir_data = 0;
int32_t red_data_buffer[BUFFER_SIZE]; 
int32_t ir_data_buffer[BUFFER_SIZE];
double auto_correlationated_data[BUFFER_SIZE];

#define DELAY_AMOSTRAGEM 40
#define DEBUG false 
#define CYCLE_DELAY_MS 500 // Độ trễ giữa các lần đo

// <<< ĐÃ LOẠI BỎ KHAI BÁO SSD1306_t dev; >>>

void fill_buffers_data();

void app_main(void)
{
    esp_err_t ret = nvs_flash_init();
    if (ret == ESP_ERR_NVS_NO_FREE_PAGES || ret == ESP_ERR_NVS_NEW_VERSION_FOUND) {
        ESP_ERROR_CHECK(nvs_flash_erase());
        ret = nvs_flash_init();
    }
    ESP_ERROR_CHECK(ret);

    // 1. Khởi tạo I2C BUS cho MAX30102
    // Chúng ta sử dụng lại hàm i2c_init đã bị xóa trước đó để đảm bảo Bus được khởi tạo.
    // Nếu bạn đang dùng hàm i2c_init gốc trong i2c_api.c, hãy dùng nó.
    // Dưới đây là giả định bạn đã đổi tên hàm thành max30102_i2c_bus_init
    // và chúng ta sẽ đổi nó thành i2c_init() cho đơn giản.
    i2c_init(); // Khởi tạo I2C Bus

    ESP_LOGI(TAG, "Starting MAX30102 sensor task on Core 1");
    xTaskCreatePinnedToCore(sensor_data_reader, "Data", 10240, NULL, 2, &sensor_reader_handle, 1);
}


void sensor_data_reader(void *pvParameters)
{
    vTaskDelay(pdMS_TO_TICKS(100)); 
    
    // Khởi tạo cảm biến
    max30102_init(&max30102_configuration); 
    init_time_array();
    
    uint64_t ir_mean;
    uint64_t red_mean;
    float temperature;
    double r0_autocorrelation;

    for(;;){
        ESP_LOGI(TAG, "Collecting data buffer...");
        fill_buffers_data();

        // Xử lý dữ liệu
        temperature = get_max30102_temp();
        remove_dc_part(ir_data_buffer, red_data_buffer, &ir_mean, &red_mean);
        remove_trend_line(ir_data_buffer);
        remove_trend_line(red_data_buffer);
        double pearson_correlation = correlation_datay_datax(red_data_buffer, ir_data_buffer);
        int heart_rate = calculate_heart_rate(ir_data_buffer, &r0_autocorrelation, auto_correlationated_data);
        
        // <<< LOGIC LỌC TỐI ƯU HÓA >>>
        bool is_hr_valid = (heart_rate >= 40 && heart_rate <= 200);

        // --- Hiển thị Serial Monitor ---
        if(pearson_correlation >= 0.7 && is_hr_valid){ 
            double spo2 = spo2_measurement(ir_data_buffer, red_data_buffer, ir_mean, red_mean);
            
            printf("\n=======================================\n");
            printf("| SUCCESSFUL MEASUREMENT\n");
            printf("| HEART_RATE: %d bpm\n", heart_rate); 
            printf("| SPO2: %.2f%%\n", spo2);
            printf("| Temperature: %.2f C\n", temperature); 
            printf("=======================================\n\n");
            
        } else {
             // Serial Monitor cảnh báo
             printf("\n=======================================\n");
             printf("| WARNING: Low signal quality (Corr: %.2f).\n", pearson_correlation);
             printf("| HR/SpO2 unreliable.\n");
             printf("| Temperature: %.2f C\n", temperature);
             if (!is_hr_valid) {
                 printf("| (HR filtered: %d bpm)\n", heart_rate);
             }
             printf("=======================================\n\n");
        }
        
        // <<< ĐÃ LOẠI BỎ CẬP NHẬT OLED >>>
        
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