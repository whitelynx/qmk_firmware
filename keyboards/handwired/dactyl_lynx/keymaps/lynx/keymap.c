// Copyright 2023 QMK
// SPDX-License-Identifier: GPL-3.0-or-later

#include QMK_KEYBOARD_H
#include "lynx_display.h"

#ifdef MCU_RP
  #include "rgblight/rgblight.h"
#endif // MCU_RP


const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
/* Keymap 0: Basic layer (default)
 *
 * ,-----------------------------------------.                    ,-----------------------------------------.
 * | Menu |   1  |   2  |   3  |   4  |   5  |                    |   6  |   7  |   8  |   9  |   0  |  \   |
 * |------+------+------+------+------+------|                    |------+------+------+------+------+------|
 * |  Tab |  '"  |   ,  |   .  |   P  |   Y  |                    |   F  |   G  |   C  |   R  |   L  |  /   |
 * |------+------+------+------+------+------|                    |------+------+------+------+------+------|
 * |  Esc |   A  |   O  |   E  |   U  |   I  |                    |   D  |   H  |   T  |   N  |   S  |  -   |
 * |------+------+------+------+------+------|                    |------+------+------+------+------+------|
 * |LShift|   ;  |   Q  |   J  |   K  |   X  |                    |   B  |   M  |   W  |   V  |   Z  |RShift|
 * |------+------+------+------+------+------'                    `------+------+------+------+------+------|
 * | LCtrl|   `  |   =  |   [  |   ]  |                                  | Left | Down |  Up  | Right| RGui |
 * `----------------------------------'                                  `----------------------------------'
 *                               ,--------------------.  ,--------------------.
 *                               | LGui | LAlt |<MOUS>|  |<SYMB>| RAlt | RCtrl|
 *                               |------|------|------|  |------+------+------|
 *                               |LShift|  Del |<WASD>|  |<NAV> |Enter |RShift|
 *                               |------'------|------|  |------|------'------|
 *                               |  Backspace  |<QWRT>|  |      |    Space    |
 *                               `--------------------'  `--------------------'
 */
[BASE] = LAYOUT_dactyl(
          // left hand
           KC_APP,     KC_1,     KC_2,     KC_3,     KC_4,     KC_5,
           KC_TAB,  KC_QUOT,  KC_COMM,   KC_DOT,     KC_P,     KC_Y,
           KC_ESC,     KC_A,     KC_O,     KC_E,     KC_U,     KC_I,
          KC_LSFT,  KC_SCLN,     KC_Q,     KC_J,     KC_K,     KC_X,
          KC_LCTL,   KC_GRV,   KC_EQL,  KC_LBRC,  KC_RBRC,
                                                  KC_LGUI,  KC_LALT, TT(MOUS),
                                                  KC_LSFT,   KC_DEL, TT(WASD),
                                                  KC_BSPC, DF(QWRT),
          // right hand
                       KC_6,     KC_7,     KC_8,     KC_9,     KC_0,  KC_BSLS,
                       KC_F,     KC_G,     KC_C,     KC_R,     KC_L,  KC_SLSH,
                       KC_D,     KC_H,     KC_T,     KC_N,     KC_S,  KC_MINS,
                       KC_B,     KC_M,     KC_W,     KC_V,     KC_Z,  KC_RSFT,
                              KC_LEFT,  KC_DOWN,    KC_UP,  KC_RGHT,  KC_RGUI,
         TT(SYMB),  KC_RALT,  KC_RCTL,
          TT(NAV),   KC_ENT,  KC_RSFT,
                      KC_NO,   KC_SPC
),
/* Keymap 1: Symbol Layer
 *
 * ,-----------------------------------------.                    ,-----------------------------------------.
 * |QKBOOT|  F1  |  F2  |  F3  |  F4  |  F5  |                    |  F6  |  F7  |  F8  |  F9  |  F10 |   \  |
 * |------+------+------+------+------+------|                    |------+------+------+------+------+------|
 * |  Tab |   !  |   @  |   {  |   }  |   |  |                    |NumLck|   7  |   8  |   9  |   *  |   /  |
 * |------+------+------+------+------+------|                    |------+------+------+------+------+------|
 * |  Esc |   #  |   $  |   (  |   )  |   `  |                    |  Up  |   4  |   5  |   6  |   +  |   -  |
 * |------+------+------+------+------+------|                    |------+------+------+------+------+------|
 * |LShift|   %  |   ^  |   [  |   ]  |   ~  |                    | Down |   1  |   2  |   3  |   ,  |RShift|
 * |------+------+------+------+------+------'                    `------+------+------+------+------+------|
 * | LCtrl|   €  |   =  |  F11 |  F12 |                                  | Left |   0  |   .  | Right| RGui |
 * `----------------------------------'                                  `----------------------------------'
 *                               ,--------------------.  ,--------------------.
 *                               |      |      |      |  |      |      |      |
 *                               |------|------|------|  |------+------+------|
 *                               |      |      |      |  |      |KP Ent|      |
 *                               |------'------|------|  |------|------'------|
 *                               |             |      |  |      |             |
 *                               `--------------------'  `--------------------'
 */
// SYMBOLS
[SYMB] = LAYOUT_dactyl(
       // left hand
       QK_BOOT,      KC_F1,    KC_F2,    KC_F3,    KC_F4,    KC_F5,
        KC_TAB,    KC_EXLM,    KC_AT,  KC_LCBR,  KC_RCBR,  KC_PIPE,
        KC_ESC,    KC_HASH,   KC_DLR,  KC_LPRN,  KC_RPRN,   KC_GRV,
       KC_LSFT,    KC_PERC,  KC_CIRC,  KC_LBRC,  KC_RBRC,  KC_TILD,
       KC_LCTL, UC(0x20AC),  KC_PEQL,   KC_F11,   KC_F12,
                                                 KC_TRNS,  KC_TRNS,  KC_TRNS,
                                                 KC_TRNS,  KC_TRNS,  KC_TRNS,
                                                 KC_TRNS,  KC_TRNS,
       // right hand
                     KC_F6,    KC_F7,   KC_F8,     KC_F9,   KC_F10,  KC_NUBS,
                    KC_NUM,    KC_P7,   KC_P8,     KC_P9,  KC_PAST,  KC_PSLS,
                     KC_UP,    KC_P4,   KC_P5,     KC_P6,  KC_PPLS,  KC_PMNS,
                   KC_DOWN,    KC_P1,   KC_P2,     KC_P3,  KC_PCMM,  KC_RSFT,
                             KC_LEFT,   KC_P0,   KC_PDOT,  KC_RGHT,  KC_RGUI,
       KC_TRNS,    KC_TRNS,  KC_TRNS,
       KC_TRNS,    KC_PENT,  KC_TRNS,
                   KC_TRNS,  KC_TRNS
),
/* Keymap 2: WASD gaming
 * ,-----------------------------------------.                    ,-----------------------------------------.
 * |  Esc |   1  |   2  |   3  |   4  |   5  |                    |      |      |      |      |      |      |
 * |------+------+------+------+------+------|                    |------+------+------+------+------+------|
 * |  Tab |  Tab |   Q  |   W  |   E  |   R  |                    |      |      |      |      |      |      |
 * |------+------+------+------+------+------|                    |------+------+------+------+------+------|
 * | LCtrl| LCtrl|   A  |   S  |   D  |   F  |                    |      |      |      |      |      |      |
 * |------+------+------+------+------+------|                    |------+------+------+------+------+------|
 * |LShift|LShift|   Z  |   X  |   C  |   V  |                    |      |      |      |      |      |      |
 * |------+------+------+------+------+------'                    `------+------+------+------+------+------|
 * |   6  |   7  |   8  |   9  |   0  |                                  |      |      |      |      |      |
 * `----------------------------------'                                  `----------------------------------'
 *                               ,--------------------.  ,--------------------.
 *                               | NOOP | LAlt | NOOP |  |      |      |      |
 *                               |------|------|------|  |------+------+------|
 *                               |LShift| Enter|      |  |      |      |      |
 *                               |------'------|------|  |------|------'------|
 *                               |    Space    | NOOP |  |      |             |
 *                               `--------------------'  `--------------------'
 *
 */
// WASD
[WASD] = LAYOUT_dactyl(
       // left hand
        KC_ESC,     KC_1,     KC_2,     KC_3,     KC_4,     KC_5,
        KC_TAB,   KC_TAB,     KC_Q,     KC_W,     KC_E,     KC_R,
       KC_LCTL,  KC_LCTL,     KC_A,     KC_S,     KC_D,     KC_F,
       KC_LSFT,  KC_LSFT,     KC_Z,     KC_X,     KC_C,     KC_V,
          KC_6,     KC_7,     KC_8,     KC_9,     KC_0,
                                                 KC_NO,  KC_LALT,    KC_NO,
                                               KC_LSFT,   KC_ENT,  KC_TRNS,
                                                          KC_SPC,    KC_NO,
       // right hand
                 KC_TRNS,  KC_TRNS,  KC_TRNS,  KC_TRNS,  KC_TRNS,  KC_TRNS,
                 KC_TRNS,  KC_TRNS,  KC_TRNS,  KC_TRNS,  KC_TRNS,  KC_TRNS,
                 KC_TRNS,  KC_TRNS,  KC_TRNS,  KC_TRNS,  KC_TRNS,  KC_TRNS,
                 KC_TRNS,  KC_TRNS,  KC_TRNS,  KC_TRNS,  KC_TRNS,  KC_TRNS,
                           KC_TRNS,  KC_TRNS,  KC_TRNS,  KC_TRNS,  KC_TRNS,
       KC_TRNS,  KC_TRNS,  KC_TRNS,
       KC_TRNS,  KC_TRNS,  KC_TRNS,
                 KC_TRNS,  KC_TRNS
),
/* Keymap 3: Mouse keys
 * ,-----------------------------------------.                    ,-----------------------------------------.
 * |      |      |      |      |      |      |                    |      |PausBr|ScrLck|      |      | Sleep|
 * |------+------+------+------+------+------|                    |------+------+------+------+------+------|
 * |      |      |      |      | WhlL | WhlR |                    |      |      |      |      |      |      |
 * |------+------+------+------+------+------|                    |------+------+------+------+------+------|
 * | 5clk | 4clk | 3clk | Rclk | Lclk | WhlU |                    |      |MsLeft|MsDown| MsUp |MsRght|      |
 * |------+------+------+------+------+------|                    |------+------+------+------+------+------|
 * |      |      |      |      |      | WhlD |                    |      | Mute |   ⏯  |      |      |      |
 * |------+------+------+------+------+------'                    `------+------+------+------+------+------|
 * |      |      |      |      |      |                                  |   ⏮  | VolDn| VolUp|   ⏭  |      |
 * `----------------------------------'                                  `----------------------------------'
 *                               ,--------------------.  ,--------------------.
 *                               |      |      |      |  |      |      |      |
 *                               |------|------|------|  |------+------+------|
 *                               |      |      |      |  |      |      |      |
 *                               |------'------|------|  |------|------'------|
 *                               | Browser Back|      |  |      |             |
 *                               `--------------------'  `--------------------'
 *
 */
// MOUSE
[MOUS] = LAYOUT_dactyl(
       // left hand
       KC_TRNS,  KC_TRNS,  KC_TRNS,  KC_TRNS,  KC_TRNS,  KC_TRNS,
       KC_TRNS,  KC_TRNS,  KC_TRNS,  KC_TRNS,  KC_WH_L,  KC_WH_R,
       KC_BTN5,  KC_BTN4,  KC_BTN3,  KC_BTN2,  KC_BTN1,  KC_WH_U,
       KC_TRNS,  KC_TRNS,  KC_TRNS,  KC_TRNS,  KC_TRNS,  KC_WH_D,
       KC_TRNS,  KC_TRNS,  KC_TRNS,  KC_TRNS,  KC_TRNS,
                                               KC_TRNS,  KC_TRNS,  KC_TRNS,
                                               KC_TRNS,  KC_TRNS,  KC_TRNS,
                                               KC_WBAK,  KC_TRNS,
       // right hand
                 KC_TRNS,  KC_PAUS,  KC_SCRL,  KC_TRNS,  KC_TRNS,  KC_SLEP,
                 KC_TRNS,  KC_TRNS,  KC_TRNS,  KC_TRNS,  KC_TRNS,  KC_TRNS,
                 KC_TRNS,  KC_MS_L,  KC_MS_D,  KC_MS_U,  KC_MS_R,  KC_TRNS,
                 KC_TRNS,  KC_MUTE,  KC_MPLY,  KC_TRNS,  KC_TRNS,  KC_TRNS,
                           KC_MPRV,  KC_VOLD,  KC_VOLU,  KC_MNXT,  KC_TRNS,
       KC_TRNS,  KC_TRNS,  KC_TRNS,
       KC_TRNS,  KC_TRNS,  KC_TRNS,
                 KC_TRNS,  KC_TRNS
),
/* Keymap 4: Navigation keys
 * ,-----------------------------------------.                    ,-----------------------------------------.
 * |Reboot|  F13 |  F14 |  F15 |  F16 |  F17 |                    |  F18 |  F19 |  F20 |  F21 |  F22 | Sleep|
 * |------+------+------+------+------+------|                    |------+------+------+------+------+------|
 * |      |      |      | BriUp|      |      |                    |      |      |      |      |      |      |
 * |------+------+------+------+------+------|                    |------+------+------+------+------+------|
 * |  Esc |      |BLDown| BriDn| BLUp |      |                    |      |      |      |      |      |      |
 * |------+------+------+------+------+------|                    |------+------+------+------+------+------|
 * |      |      |      |      |      |      |                    |      |      |      |      |      |      |
 * |------+------+------+------+------+------'                    `------+------+------+------+------+------|
 * |      |      |      |  F23 |  F24 |                                  | Home | PgDn | PgUp |  End |      |
 * `----------------------------------'                                  `----------------------------------'
 *                               ,--------------------.  ,--------------------.
 *                               |      |      |      |  |      |      |      |
 *                               |------|------|------|  |------+------+------|
 *                               |      |      |      |  |      |      |      |
 *                               |------'------|------|  |------|------'------|
 *                               |             |      |  |      |             |
 *                               `--------------------'  `--------------------'
 *
 */
// NAVIGATION
[NAV] = LAYOUT_dactyl(
       // left hand
        QK_RBT,  KC_F13,   KC_F14,   KC_F15,   KC_F16,   KC_F17,
       KC_TRNS,  KC_TRNS,  KC_TRNS,  KC_BRIU,  KC_TRNS,  KC_TRNS,
        KC_ESC,  KC_TRNS,  BL_DOWN,  KC_BRID,    BL_UP,  KC_TRNS,
       KC_TRNS,  KC_TRNS,  KC_TRNS,  KC_TRNS,  KC_TRNS,  KC_TRNS,
       KC_TRNS,  KC_TRNS,  KC_TRNS,   KC_F23,   KC_F24,
                                               KC_TRNS,  KC_TRNS,  KC_TRNS,
                                               KC_TRNS,  KC_TRNS,  KC_TRNS,
                                               KC_TRNS,  KC_TRNS,
       // right hand
                  KC_F18,   KC_F19,   KC_F20,   KC_F21,   KC_F22,  KC_SLEP,
                 KC_TRNS,  KC_TRNS,  KC_TRNS,  KC_TRNS,  KC_TRNS,  KC_TRNS,
                 KC_TRNS,  KC_TRNS,  KC_TRNS,  KC_TRNS,  KC_TRNS,  KC_TRNS,
                 KC_TRNS,  KC_TRNS,  KC_TRNS,  KC_TRNS,  KC_TRNS,  KC_TRNS,
                           KC_HOME,  KC_PGDN,  KC_PGUP,   KC_END,  KC_TRNS,
       KC_TRNS,  KC_TRNS,  KC_TRNS,
       KC_TRNS,  KC_TRNS,  KC_TRNS,
                 KC_TRNS,  KC_TRNS
),
/* Keymap 5: QWERTY layer
 *
 * ,-----------------------------------------.                    ,-----------------------------------------.
 * | Menu |   1  |   2  |   3  |   4  |   5  |                    |   6  |   7  |   8  |   9  |   0  |  -   |
 * |------+------+------+------+------+------|                    |------+------+------+------+------+------|
 * |  Tab |   Q  |   W  |   E  |   R  |   T  |                    |   Y  |   U  |   I  |   O  |   P  |  \   |
 * |------+------+------+------+------+------|                    |------+------+------+------+------+------|
 * |  Esc |   A  |   S  |   D  |   F  |   G  |                    |   H  |   J  |   K  |   L  |   ;  |  '   |
 * |------+------+------+------+------+------|                    |------+------+------+------+------+------|
 * |LShift|   Z  |   X  |   C  |   V  |   B  |                    |   N  |   M  |   ,  |   .  |   /  |RShift|
 * |------+------+------+------+------+------'                    `------+------+------+------+------+------|
 * | LCtrl|   `  |   =  |   [  |   ]  |                                  | Left | Down |  Up  | Right| RGui |
 * `----------------------------------'                                  `----------------------------------'
 *                               ,--------------------.  ,--------------------.
 *                               | LGui | LAlt |<MOUS>|  |<SYMB>| RAlt | RCtrl|
 *                               |------|------|------|  |------+------+------|
 *                               |LShift|  Del |<WASD>|  |<NAV> |Enter |RShift|
 *                               |------'------|------|  |------|------'------|
 *                               |  Backspace  |<BASE>|  |      |    Space    |
 *                               `--------------------'  `--------------------'
 */
[QWRT] = LAYOUT_dactyl(
       // left hand
        KC_APP,     KC_1,     KC_2,     KC_3,     KC_4,    KC_5,
        KC_TAB,     KC_Q,     KC_W,     KC_E,     KC_R,    KC_T,
        KC_ESC,     KC_A,     KC_S,     KC_D,     KC_F,    KC_G,
       KC_LSFT,     KC_Z,     KC_X,     KC_C,     KC_V,    KC_B,
       KC_LCTL,   KC_GRV,   KC_EQL,  KC_LBRC,  KC_RBRC,
                                               KC_LGUI,  KC_LALT, TT(MOUS),
                                               KC_LSFT,   KC_DEL, TT(WASD),
                                               KC_BSPC, DF(BASE),
        // right hand
                    KC_6,     KC_7,     KC_8,     KC_9,     KC_0,  KC_MINS,
                    KC_Y,     KC_U,     KC_I,     KC_O,     KC_P,  KC_BSLS,
                    KC_H,     KC_J,     KC_K,     KC_L,  KC_SCLN,  KC_QUOT,
                    KC_N,     KC_M,  KC_COMM,   KC_DOT,  KC_SLSH,  KC_RSFT,
                           KC_LEFT,  KC_DOWN,    KC_UP,  KC_RGHT,  KC_RGUI,
      TT(SYMB),  KC_RALT,  KC_RCTL,
       TT(NAV),   KC_ENT,  KC_RSFT,
                   KC_NO,   KC_SPC
),
};


//static bool display_enabled;

uint8_t current_layer = BASE;

#ifdef MCU_RP
__attribute__((weak)) void set_rgb_by_layer(uint8_t current_layer) {
    //dprintf("set_rgb_by_layer: current_layer = %u\n", current_layer);

    switch(current_layer) {
        case BASE:
            rgblight_setrgb_at(0xFF, 0x00, 0x00, 0);
            break;
        case SYMB:
            rgblight_setrgb_at(0x00, 0xFF, 0x00, 0);
            break;
        case WASD:
            rgblight_setrgb_at(0x00, 0x00, 0xFF, 0);
            break;
        case MOUS:
            rgblight_setrgb_at(0x00, 0x7A, 0x7A, 0);
            break;
        case NAV:
            rgblight_setrgb_at(0x7A, 0x7A, 0x00, 0);
            break;
        case QWRT:
            //TODO: Shifted QWERTY screen
            rgblight_setrgb_at(0x7A, 0x7A, 0x7A, 0);
            break;
        default: // unrecognized layer!
            rgblight_setrgb_at(0xFF, 0x00, 0xFF, 0);
            break;
    }
}
#endif // MCU_RP

void keyboard_post_init_user(void) {
    /*
    display_enabled = false;

    if (is_keyboard_left()) {
        display_enabled = display_init_kb();
    }
    */

    // Customise these values to desired behaviour
    debug_enable = true;
    //debug_matrix = true;
    debug_keyboard = true;
    //debug_mouse = true;

#ifdef MCU_RP
    rgblight_enable_noeeprom();
    set_rgb_by_layer(BASE);
#elif MCU_STM32 && FALSE
    display_init_kb();
#endif // MCU_RP
}

bool shutdown_user(bool jump_to_bootloader) {
#ifdef MCU_RP
    if (jump_to_bootloader) {
        // red for bootloader
        rgblight_setrgb_at(0xFF, 0x00, 0x00, 0);
    } else {
        // off for soft reset
        rgblight_setrgb_at(0x00, 0x00, 0x00, 0);
    }
#elif MCU_STM32 && FALSE
    display_shutdown_kb(jump_to_bootloader);
#endif // MCU_RP

    // false to not process kb level
    return false;
}

layer_state_t default_layer_state_set_user(layer_state_t state) {
    current_layer = get_highest_layer(state);
    dprintf("default_layer_state_set_user: current_layer = %u\n", current_layer);
#ifdef MCU_RP
    set_rgb_by_layer(current_layer);
#endif // MCU_RP

    return state;
}

layer_state_t layer_state_set_user(layer_state_t state) {
    current_layer = get_highest_layer(state);
    dprintf("layer_state_set_user: current_layer = %u\n", current_layer);
#ifdef MCU_RP
    set_rgb_by_layer(current_layer);
#elif MCU_STM32 && FALSE
    display_process_layer(current_layer);
#endif // MCU_RP

    return state;
}
