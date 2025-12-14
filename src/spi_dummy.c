// src/spi_dummy.c
// Dùng để thỏa mãn lỗi "undefined reference to spi_init"
#include <stdio.h>
#include <stdint.h>
#include <stddef.h> 

void spi_init(void * dev, int8_t dc, int8_t cs, int8_t clk, int8_t mosi, int8_t reset) {}
void spi_display_image(void * dev, int page, int seg, const uint8_t * images, int width) {}