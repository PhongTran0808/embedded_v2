#ifndef OLED_DRIVER_H
#define OLED_DRIVER_H

#include "esp_err.h"
#include <stdint.h>

// =========================================================
// ĐỊNH NGHĨA LỆNH SSD1306 (Minimal Command Set)
// =========================================================
#define OLED_CONTROL_BYTE_CMD_STREAM 0x00
#define OLED_CMD_DISPLAY_OFF 0xAE
#define OLED_CMD_DISPLAY_ON  0xAF
// Đã làm sạch ký tự lạ ở dòng này để tránh lỗi biên dịch
#define OLED_CMD_SET_MUX_RATIO 0xA8 
#define OLED_CMD_SET_DISPLAY_CLK_DIV 0xD5 
#define OLED_CMD_SET_PAGE_ADDR_MODE 0x02
#define OLED_CMD_SET_COLUMN_LOWER 0x00
#define OLED_CMD_SET_COLUMN_UPPER 0x10
#define OLED_CMD_SET_CHARGE_PUMP 0x8D 

// Địa chỉ I2C
#define OLED_I2C_ADDRESS 0x3C 
#define OLED_CONTROL_BYTE_DATA_STREAM 0x40

// =========================================================
// CẤU TRÚC DỮ LIỆU
// =========================================================
typedef struct {
    uint8_t buffer[1024]; // 128 * 64 / 8 = 1024 bytes
} Oled_t;

// Khai báo mảng ngoài (extern)
extern const uint8_t large_heart_bitmap[30]; 

// =========================================================
// KHAI BÁO HÀM (PROTOTYPES)
// =========================================================

// Các hàm cơ bản
esp_err_t oled_init(Oled_t *oled);
void oled_clear_screen(Oled_t *oled);
void oled_update_display(Oled_t *oled);

// Các hàm vẽ
void oled_draw_text(Oled_t *oled, int page, int col, const char *text);
void oled_draw_heart_animation(Oled_t *oled, int page, int col, int frame);

// >>> CÁC HÀM MỚI BỔ SUNG CHO BIỂU ĐỒ (QUAN TRỌNG) <<<
void oled_draw_pixel(Oled_t *oled, int x, int y);
void oled_draw_line(Oled_t *oled, int x1, int y1, int x2, int y2);

#endif // OLED_DRIVER_H