// Copyright 2023 zzeneg (@zzeneg)
// SPDX-License-Identifier: GPL-2.0-or-later

#include "lynx_display.h"
#include "qp.h"
#include "rgblight/rgblight.h"

#include "generated/oled-0-base.qgf.c"
#include "generated/oled-0-shift.qgf.c"
#include "generated/oled-1-numpad.qgf.c"
#include "generated/oled-2-media.qgf.c"
#include "generated/oled-3-mouse.qgf.c"
#include "generated/oled-4-nav.qgf.c"
#include "generated/oled-5-qwerty.qgf.c"

/* screens */
static painter_device_t display;

bool display_init_kb(void) {
    dprint("display_init_kb - start\n");

    rgblight_enable_noeeprom();

    display = qp_st7789_make_spi_device(240, 240, LCD_CS_PIN, LCD_DC_PIN, LCD_RST_PIN, 16, 3);
    qp_set_viewport_offsets(display, 0, 0);

    if (!qp_init(display, QP_ROTATION_180) || !qp_power(display, true)) return false;

    dprint("display_init_kb - initialised\n");

    display_process_layer(BASE);

    return true;
}

__attribute__((weak)) void display_process_layer(uint8_t current_layer) {
    dprint("display_process_layer\n");
    painter_image_handle_t img = NULL;

    switch(current_layer) {
        case BASE:
            if(MODS_SHIFT) {
                img = qp_load_image_mem(gfx_oled_0_shift);
            } else {
                img = qp_load_image_mem(gfx_oled_0_base);
            }
            rgblight_setrgb(0xFF, 0x00, 0x00);
            break;
        case SYMB:
            img = qp_load_image_mem(gfx_oled_1_numpad);
            rgblight_setrgb(0x00, 0xFF, 0x00);
            break;
        case MDIA:
            img = qp_load_image_mem(gfx_oled_2_media);
            rgblight_setrgb(0x00, 0x00, 0xFF);
            break;
        case MOUS:
            img = qp_load_image_mem(gfx_oled_3_mouse);
            rgblight_setrgb(0x00, 0x7A, 0x7A);
            break;
        case NAV:
            img = qp_load_image_mem(gfx_oled_4_nav);
            rgblight_setrgb(0x7A, 0x7A, 0x00);
            break;
        case QWRT:
            img = qp_load_image_mem(gfx_oled_5_qwerty);
            //TODO: Shifted QWERTY screen
            rgblight_setrgb(0x7A, 0x7A, 0x7A);
            break;
        default: // unrecognized layer!
            rgblight_setrgb(0xFF, 0x00, 0xFF);
            break;
    }

    qp_clear(display);
    if (img != NULL) {
        qp_drawimage(display, 0, 0, img);
    }
}

__attribute__((weak)) void display_shutdown_kb(bool jump_to_bootloader) {
    if (jump_to_bootloader) {
        // red for bootloader
        rgblight_setrgb(0xFF, 0x00, 0x00);
    } else {
        // off for soft reset
        rgblight_setrgb(0x00, 0x00, 0x00);
    }
}
