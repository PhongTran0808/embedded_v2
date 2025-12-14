#include "oled_driver.h"
#include "i2c_api.h" 
#include <string.h>
#include <stdio.h>
#include "esp_log.h"
#include "font8x8_basic.h" 
#include "freertos/FreeRTOS.h"
#include "freertos/task.h" 
#include "driver/i2c.h"

static const char *OLED_TAG = "OLED_DRV";
#define ACK_CHECK_EN 0x1 

// =========================================================
// DỮ LIỆU FONT TRÁI TIM (8x8 pixels)
// =========================================================

// Khung 1: Tim nhỏ hơn
const uint8_t HEART_FRAME_1[8] = {
    0b00000000,
    0b00000000,
    0b00111100,
    0b01111110,
    0b01111110,
    0b00111100,
    0b00000000,
    0b00000000
};

// Khung 2: Tim lớn hơn
const uint8_t HEART_FRAME_2[8] = {
    0b00000000,
    0b01100110,
    0b11111111,
    0b11111111,
    0b01111110,
    0b00111100,
    0b00010000,
    0b00000000
};

// =========================================================
// HÀM I2C CẤP THẤP & KHỞI TẠO
// =========================================================

static esp_err_t oled_send_command(uint8_t command) {
    uint8_t tx_buf[2] = {OLED_CONTROL_BYTE_CMD_STREAM, command};
    
    i2c_cmd_handle_t cmd = i2c_cmd_link_create();
    i2c_master_start(cmd);
    i2c_master_write_byte(cmd, (OLED_I2C_ADDRESS << 1) | I2C_MASTER_WRITE, ACK_CHECK_EN);
    i2c_master_write(cmd, tx_buf, 2, ACK_CHECK_EN);
    i2c_master_stop(cmd);
    
    esp_err_t ret = i2c_master_cmd_begin(I2C_NUM_0, cmd, pdMS_TO_TICKS(200));
    i2c_cmd_link_delete(cmd);
    return ret;
}

esp_err_t oled_init(Oled_t *oled) {
    esp_err_t ret;

    if ((ret = oled_send_command(OLED_CMD_DISPLAY_OFF)) != ESP_OK) return ret;
    
    // 1. Cấu hình MUX và OFFSET
    if ((ret = oled_send_command(OLED_CMD_SET_MUX_RATIO)) != ESP_OK) return ret;
    if ((ret = oled_send_command(0x3F)) != ESP_OK) return ret; 
    if ((ret = oled_send_command(0xD3)) != ESP_OK) return ret; 
    if ((ret = oled_send_command(0x00)) != ESP_OK) return ret; 
    
    // 2. Cấu hình Địa chỉ (Page Addressing Mode)
    if ((ret = oled_send_command(0x20)) != ESP_OK) return ret; 
    if ((ret = oled_send_command(OLED_CMD_SET_PAGE_ADDR_MODE)) != ESP_OK) return ret; 
    
    // 3. Cấu hình Clock và Tín hiệu
    if ((ret = oled_send_command(OLED_CMD_SET_DISPLAY_CLK_DIV)) != ESP_OK) return ret;
    if ((ret = oled_send_command(0x80)) != ESP_OK) return ret;
    if ((ret = oled_send_command(OLED_CMD_SET_CHARGE_PUMP)) != ESP_OK) return ret; 
    if ((ret = oled_send_command(0x14)) != ESP_OK) return ret; 
    
    // 4. Các lệnh hiển thị cuối (A1/C8 là cấu hình mặc định cho hướng đúng)
    if ((ret = oled_send_command(0xA1)) != ESP_OK) return ret; 
    if ((ret = oled_send_command(0xC8)) != ESP_OK) return ret; 
    if ((ret = oled_send_command(0xDA)) != ESP_OK) return ret; 
    if ((ret = oled_send_command(0x12)) != ESP_OK) return ret; 
    
    if ((ret = oled_send_command(0xAF)) != ESP_OK) return ret; 
    
    ESP_LOGI(OLED_TAG, "OLED initialized successfully.");
    oled_clear_screen(oled);
    oled_update_display(oled);
    return ESP_OK;
}

void oled_clear_screen(Oled_t *oled) {
    memset(oled->buffer, 0x00, 1024);
}

void oled_update_display(Oled_t *oled) {
    for (int page = 0; page < 8; page++) {
        // Đặt con trỏ trang và cột
        i2c_cmd_handle_t cmd_set = i2c_cmd_link_create();
        i2c_master_start(cmd_set);
        i2c_master_write_byte(cmd_set, (OLED_I2C_ADDRESS << 1) | I2C_MASTER_WRITE, ACK_CHECK_EN);
        i2c_master_write_byte(cmd_set, OLED_CONTROL_BYTE_CMD_STREAM, ACK_CHECK_EN);
        i2c_master_write_byte(cmd_set, 0xB0 + page, ACK_CHECK_EN);     
        i2c_master_write_byte(cmd_set, OLED_CMD_SET_COLUMN_LOWER, ACK_CHECK_EN); 
        i2c_master_write_byte(cmd_set, OLED_CMD_SET_COLUMN_UPPER, ACK_CHECK_EN); 
        i2c_master_stop(cmd_set);
        i2c_master_cmd_begin(I2C_NUM_0, cmd_set, pdMS_TO_TICKS(100));
        i2c_cmd_link_delete(cmd_set);


        // Gửi dữ liệu
        uint8_t tx_buf[129];
        tx_buf[0] = 0x40; // Data Stream
        memcpy(&tx_buf[1], &oled->buffer[page * 128], 128);
        
        i2c_cmd_handle_t cmd_data = i2c_cmd_link_create();
        i2c_master_start(cmd_data);
        i2c_master_write_byte(cmd_data, (OLED_I2C_ADDRESS << 1) | I2C_MASTER_WRITE, ACK_CHECK_EN);
        i2c_master_write(cmd_data, tx_buf, 129, ACK_CHECK_EN);
        i2c_master_stop(cmd_data);
        i2c_master_cmd_begin(I2C_NUM_0, cmd_data, pdMS_TO_TICKS(100));
        i2c_cmd_link_delete(cmd_data);
    }
}

void oled_draw_text(Oled_t *oled, int page, int col, const char *text) {
    if (page < 0 || page >= 8 || !text) return;
    
    int start_segment = col * 8; 

    for (int i = 0; i < strlen(text); i++) {
        uint8_t char_code = (uint8_t)text[i];
        if (start_segment + i * 8 >= 128) break;

        const uint8_t *font_data = font8x8_basic_tr[char_code];

        // Sao chép dữ liệu Font trực tiếp (không xoay bit)
        memcpy(&oled->buffer[page * 128 + start_segment + i * 8], font_data, 8);
    }
}

void oled_draw_heart_animation(Oled_t *oled, int page, int col, int frame) {
    if (page < 0 || page >= 8 || col < 0) return;

    const uint8_t *heart_data;
    
    if (frame % 2 == 0) {
        heart_data = HEART_FRAME_1;
    } else {
        heart_data = HEART_FRAME_2;
    }

    int start_segment = col * 8; 
    
    // Mảng tạm thời để lưu dữ liệu đã lật (Mirror)
    uint8_t temp_heart[8];
    
    // 1. LẬT NGANG DỮ LIỆU (Mirroring the bytes)
    for (int i = 0; i < 8; i++) {
        // Đảo ngược thứ tự các byte trong mảng
        temp_heart[i] = heart_data[7 - i]; 
    }

    // 2. VẼ VÀ PHÓNG TO (16x8 pixel)
    for (int byte_index = 0; byte_index < 8; byte_index++) {
        uint8_t current_byte = temp_heart[byte_index];
        
        // Đảo ngược bit (INVERT) để hiển thị Trắng trên nền Đen
        uint8_t inverted_byte = ~current_byte; 
        
        // Vẽ lần 1 (cột 13)
        oled->buffer[page * 128 + start_segment + byte_index] = inverted_byte;

        // Vẽ lần 2 (cột 14, để phóng to ngang 2 lần)
        if (start_segment + 8 + byte_index < 128) {
             oled->buffer[page * 128 + start_segment + 8 + byte_index] = inverted_byte;
        }
    }
}