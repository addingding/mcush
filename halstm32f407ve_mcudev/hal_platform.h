#ifndef __HAL_PLATFORM_H__
#define __HAL_PLATFORM_H__

#define HAL_LED_REV
#define HAL_LED_NUM   2
#define HAL_LED_PORTS  { 0, 0 } 
#define HAL_LED_PINS  { 6, 7 }

#define HAL_RNG   1
void hal_rng_init(void);
uint32_t hal_rng_get(void);

#ifndef USE_CMD_SGPIO
#define USE_CMD_SGPIO  0
#endif

#include "mcush_vfs.h"

#ifndef MCUSH_SPIFFS
#define MCUSH_SPIFFS  0
#endif

#define HAL_SPIFFS_CHIPID  0xEF4017  // W25P64
#define sFLASH_SPI                           SPI2
#define sFLASH_SPI_CLK                       RCC_APB1Periph_SPI2
#define sFLASH_SPI_CLK_INIT                  RCC_APB1PeriphClockCmd
#define sFLASH_SPI_SCK_PIN                   GPIO_Pin_13
#define sFLASH_SPI_SCK_GPIO_PORT             GPIOB
#define sFLASH_SPI_SCK_GPIO_CLK              RCC_AHB1Periph_GPIOB
#define sFLASH_SPI_SCK_SOURCE                GPIO_PinSource13
#define sFLASH_SPI_SCK_AF                    GPIO_AF_SPI2
#define sFLASH_SPI_MISO_PIN                  GPIO_Pin_14
#define sFLASH_SPI_MISO_GPIO_PORT            GPIOB
#define sFLASH_SPI_MISO_GPIO_CLK             RCC_AHB1Periph_GPIOB
#define sFLASH_SPI_MISO_SOURCE               GPIO_PinSource14
#define sFLASH_SPI_MISO_AF                   GPIO_AF_SPI2
#define sFLASH_SPI_MOSI_PIN                  GPIO_Pin_15
#define sFLASH_SPI_MOSI_GPIO_PORT            GPIOB
#define sFLASH_SPI_MOSI_GPIO_CLK             RCC_AHB1Periph_GPIOB
#define sFLASH_SPI_MOSI_SOURCE               GPIO_PinSource15
#define sFLASH_SPI_MOSI_AF                   GPIO_AF_SPI2
#define sFLASH_CS_PIN                        GPIO_Pin_12
#define sFLASH_CS_GPIO_PORT                  GPIOB
#define sFLASH_CS_GPIO_CLK                   RCC_AHB1Periph_GPIOB

#define  LCD_ROW_NUM    320
#define  LCD_COL_NUM    240


void hal_lcd_init(void);
void hal_lcd_backlight(int on);
void hal_lcd_clrscr(uint16_t backcolor);
void hal_lcd_pixel(uint16_t x0, uint16_t y0, uint16_t color);
void hal_lcd_rectangle(uint16_t x0, uint16_t y0, uint16_t x1, uint16_t y1, uint16_t color);
void hal_lcd_circle(uint16_t x0, uint16_t y0, uint8_t r, uint16_t color);
void hal_lcd_hline(uint8_t y, uint8_t x0, uint8_t x1, uint16_t color);
void hal_lcd_vline(uint8_t x, uint8_t y0, uint8_t y1, uint16_t color);
uint16_t hal_lcd_get_pixel(uint16_t x0, uint16_t y0);


#endif
