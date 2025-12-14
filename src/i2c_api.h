#ifndef I2C_API_H
#define I2C_API_H

#include "esp_err.h"
#include "driver/i2c.h"
#include "driver/gpio.h" 

#define MAX30102_ADDR 0x57

#define ACK_CHECK_EN 0x1
#define I2C_MASTER_RX_BUF_DISABLE 0
#define I2C_MASTER_TX_BUF_DISABLE 0
#define ACK_VAL 0x0
#define NACK_VAL 0x1

#define SDA_PIN 23 
#define SCL_PIN 22 
// Giữ tốc độ an toàn 100 kHz (vì không có trở 4.7kΩ)
#define I2C_MASTER_FREQ_HZ 100000 

// KHAI BÁO HÀM ĐÃ SỬA TÊN
esp_err_t i2c_bus_driver_install(void); 
esp_err_t i2c_sensor_read(uint8_t *data_rd, size_t size);
esp_err_t i2c_sensor_write(uint8_t *data_wr, size_t size);

#endif