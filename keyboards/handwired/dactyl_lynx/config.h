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
#define WS2812_PIO_USE_PIO1
