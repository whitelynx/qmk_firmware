// Copyright 2023 David H. Bronke (@whitelynx)
// SPDX-License-Identifier: GPL-3.0-or-later

#pragma once

#include_next <mcuconf.h>

#undef STM32_SERIAL_USE_USART1
#define STM32_SERIAL_USE_USART1 TRUE

#undef STM32_SPI_USE_SPI1
#define STM32_SPI_USE_SPI1 TRUE
