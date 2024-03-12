// Copyright 2023 David H. Bronke (@whitelynx)
// SPDX-License-Identifier: GPL-3.0-or-later

#pragma once

// 68kohm
//#define SPLIT_HAND_PIN GP29 // now in info.json


/* split connection */
#define SERIAL_USART_FULL_DUPLEX // Enable full duplex operation mode.
//#define SERIAL_PIO_USE_PIO0
#define SERIAL_USART_TX_PIN GP0  // USART TX pin
#define SERIAL_USART_RX_PIN GP1  // USART RX pin

//#define SERIAL_USART_DRIVER SIOD0


/* bootloader */
#define RP2040_BOOTLOADER_DOUBLE_TAP_RESET              // Activates the double-tap behavior
#define RP2040_BOOTLOADER_DOUBLE_TAP_RESET_TIMEOUT 200U // Timeout window in ms in which the double tap can occur.
#define RP2040_BOOTLOADER_DOUBLE_TAP_RESET_LED GP25     // Specify a optional status led by GPIO number which blinks when entering the bootloader


/* peripherals */
#define RGBLIGHT_DISABLE_KEYCODES
#define WS2812_PIO_USE_PIO1
#define WS2812_BYTE_ORDER WS2812_BYTE_ORDER_RGB

#undef RGBLIGHT_EFFECT_BREATHE_CENTER
#undef RGBLIGHT_EFFECT_BREATHE_MAX
#undef RGBLIGHT_EFFECT_CHRISTMAS_INTERVAL
#undef RGBLIGHT_EFFECT_CHRISTMAS_STEP
#undef RGBLIGHT_EFFECT_KNIGHT_LED_NUM
#undef RGBLIGHT_EFFECT_KNIGHT_LENGTH
#undef RGBLIGHT_EFFECT_KNIGHT_OFFSET
#undef RGBLIGHT_RAINBOW_SWIRL_RANGE
#undef RGBLIGHT_EFFECT_SNAKE_LENGTH
#undef RGBLIGHT_EFFECT_TWINKLE_LIFE
#undef RGBLIGHT_EFFECT_TWINKLE_PROBABILITY


///* SPI */
//#define SPI_DRIVER SPID0
//#define SPI_SCK_PIN GP18
//#define SPI_MOSI_PIN GP19
//#define SPI_MISO_PIN NO_PIN
//
///* LCD */
//#define LCD_CS_PIN NO_PIN
//#define LCD_DC_PIN GP17
//#define LCD_RST_PIN GP16


/* Behavior */
#define TAPPING_TOGGLE 1
