// Copyright 2023 QMK
// SPDX-License-Identifier: GPL-3.0-or-later

#include QMK_KEYBOARD_H

#define LTG(LAYER) LT(LAYER,TG(LAYER))

#define BASE 0 // default layer
#define SYMB 1 // symbols
#define MDIA 2 // media keys
#define MOUS 3 // mouse keys
#define NAV  4 // navigation keys

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
/* Keymap 0: Basic layer
 *
 * ,-----------------------------------------.                    ,-----------------------------------------.
 * |  Esc |   1  |   2  |   3  |   4  |   5  |                    |   6  |   7  |   8  |   9  |   0  |  \   |
 * |------+------+------+------+------+------|                    |------+------+------+------+------+------|
 * |  Tab |  '"  |   ,  |   .  |   P  |   Y  |                    |   F  |   G  |   C  |   R  |   L  |  /   |
 * |------+------+------+------+------+------|                    |------+------+------+------+------+------|
 * | LCtrl|   A  |   O  |   E  |   U  |   I  |                    |   D  |   H  |   T  |   N  |   S  |  -   |
 * |------+------+------+------+------+------|                    |------+------+------+------+------+------|
 * |LShift|   ;  |   Q  |   J  |   K  |   X  |                    |   B  |   M  |   W  |   V  |   Z  |RShift|
 * |------+------+------+------+------+------'                    `------+------+------+------+------+------|
 * | Menu |   `  |   =  |   [  |   ]  |                                  | Left | Down |  Up  | Right| RGui |
 * `----------------------------------'                                  `----------------------------------'
 *                                      ,-------------.  ,-------------.
 *                                      |  L3  |  L2  |  |  L4  |  L1  |
 *                               ,------|------|------|  |------+------+------.
 *                               | LAlt |  Del |      |  |      |Enter | RAlt |
 *                               |------|------|Backsp|  | Space|------|------|
 *                               | LGui |      |ace   |  |      |      | RCtrl|
 *                               `--------------------'  `--------------------'
 */
[BASE] = LAYOUT_dactyl(  // layer 0 : default
          // left hand
           KC_ESC,     KC_1,     KC_2,     KC_3,     KC_4,     KC_5,
           KC_TAB,  KC_QUOT,  KC_COMM,   KC_DOT,     KC_P,     KC_Y,
          KC_LCTL,     KC_A,     KC_O,     KC_E,     KC_U,     KC_I,
          KC_LSFT,  KC_SCLN,     KC_Q,     KC_J,     KC_K,     KC_X,
           KC_APP,   KC_GRV,   KC_EQL,  KC_LBRC,  KC_RBRC,
                                                          LTG(MOUS),LTG(MDIA),
                                                  KC_LALT,   KC_DEL,
                                                  KC_LGUI,    KC_NO,  KC_BSPC,
          // right hand
                       KC_6,     KC_7,     KC_8,     KC_9,     KC_0,  KC_BSLS,
                       KC_F,     KC_G,     KC_C,     KC_R,     KC_L,  KC_SLSH,
                       KC_D,     KC_H,     KC_T,     KC_N,     KC_S,  KC_MINS,
                       KC_B,     KC_M,     KC_W,     KC_V,     KC_Z,  KC_RSFT,
                              KC_LEFT,  KC_DOWN,    KC_UP,  KC_RGHT,  KC_RGUI,
         LTG(NAV),LTG(SYMB),
                     KC_ENT,  KC_RALT,
           KC_SPC,    KC_NO,  KC_RCTL
),
/* Keymap 1: Symbol Layer
 *
 * ,-----------------------------------------.                    ,-----------------------------------------.
 * |  Esc |  F1  |  F2  |  F3  |  F4  |  F5  |                    |  F6  |  F7  |  F8  |  F9  |  F10 |   \  |
 * |------+------+------+------+------+------|                    |------+------+------+------+------+------|
 * |  Tab |   !  |   @  |   {  |   }  |   |  |                    |NumLck|   7  |   8  |   9  |   *  |   /  |
 * |------+------+------+------+------+------|                    |------+------+------+------+------+------|
 * | LCtrl|   #  |   $  |   (  |   )  |   `  |                    |  Up  |   4  |   5  |   6  |   +  |   -  |
 * |------+------+------+------+------+------|                    |------+------+------+------+------+------|
 * |LShift|   %  |   ^  |   [  |   ]  |   ~  |                    | Down |   1  |   2  |   3  |   ,  |RShift|
 * |------+------+------+------+------+------'                    `------+------+------+------+------+------|
 * |QKBOOT|   €  |   =  |  F11 |  F12 |                                  | Left |   0  |   .  | Right| RGui |
 * `----------------------------------'                                  `----------------------------------'
 *                                      ,-------------.  ,-------------.
 *                                      |      |      |  |      |      |
 *                               ,------|------|------|  |------+------+------.
 *                               |      |      |      |  |      |KP Ent|      |
 *                               |------|------|      |  |      |------|------|
 *                               |      |      |      |  |      |      |      |
 *                               `--------------------'  `--------------------'
 */
// SYMBOLS
[SYMB] = LAYOUT_dactyl(
       // left hand
        KC_ESC,      KC_F1,    KC_F2,    KC_F3,    KC_F4,    KC_F5,
        KC_TAB,    KC_EXLM,    KC_AT,  KC_LCBR,  KC_RCBR,  KC_PIPE,
       KC_LCTL,    KC_HASH,   KC_DLR,  KC_LPRN,  KC_RPRN,   KC_GRV,
       KC_LSFT,    KC_PERC,  KC_CIRC,  KC_LBRC,  KC_RBRC,  KC_TILD,
       QK_BOOT, UC(0x20AC),  KC_PEQL,   KC_F11,   KC_F12,
                                                           KC_TRNS,  KC_TRNS,
                                                 KC_TRNS,  KC_TRNS,
                                                 KC_TRNS,  KC_TRNS,  KC_TRNS,
       // right hand
                     KC_F6,    KC_F7,   KC_F8,     KC_F9,   KC_F10,  KC_NUBS,
                    KC_NUM,    KC_P7,   KC_P8,     KC_P9,  KC_PAST,  KC_PSLS,
                     KC_UP,    KC_P4,   KC_P5,     KC_P6,  KC_PPLS,  KC_PMNS,
                   KC_DOWN,    KC_P1,   KC_P2,     KC_P3,  KC_PCMM,  KC_RSFT,
                             KC_LEFT,   KC_P0,   KC_PDOT,  KC_RGHT,  KC_RGUI,
       KC_TRNS,    KC_TRNS,
                   KC_PENT,  KC_TRNS,
       KC_TRNS,    KC_TRNS,  KC_TRNS
),
/* Keymap 2: Media (and mouse) keys
 * ,-----------------------------------------.                    ,-----------------------------------------.
 * |      |      |      |      |      |      |                    |      |PausBr|ScrLck|      |      | Sleep|
 * |------+------+------+------+------+------|                    |------+------+------+------+------+------|
 * |      |      |      | MsUp |      |      |                    |      |      |      |      |      |      |
 * |------+------+------+------+------+------|                    |------+------+------+------+------+------|
 * |      |      |MsLeft|MsDown|MsRght|      |                    |      |      |      |      |      |      |
 * |------+------+------+------+------+------|                    |------+------+------+------+------+------|
 * |      |      |      |      |      |      |                    |      | Mute |   ⏯  |      |      |      |
 * |------+------+------+------+------+------'                    `------+------+------+------+------+------|
 * |      |      |      | Lclk | Rclk |                                  |   ⏮  | VolDn| VolUp|   ⏭  |      |
 * `----------------------------------'                                  `----------------------------------'
 *                                      ,-------------.  ,-------------.
 *                                      |      |      |  |      |      |
 *                               ,------|------|------|  |------+------+------.
 *                               |      |      |      |  |      |      |      |
 *                               |------|------|Brwser|  |      |------|------|
 *                               |      |      |Back  |  |      |      |      |
 *                               `--------------------'  `--------------------'
 *
 */
// MEDIA
[MDIA] = LAYOUT_dactyl(
       // left hand
       KC_TRNS,  KC_TRNS,  KC_TRNS,  KC_TRNS,  KC_TRNS,  KC_TRNS,
       KC_TRNS,  KC_TRNS,  KC_TRNS,  KC_MS_U,  KC_TRNS,  KC_TRNS,
       KC_TRNS,  KC_TRNS,  KC_MS_L,  KC_MS_D,  KC_MS_R,  KC_TRNS,
       KC_TRNS,  KC_TRNS,  KC_TRNS,  KC_TRNS,  KC_TRNS,  KC_TRNS,
       KC_TRNS,  KC_TRNS,  KC_TRNS,  KC_BTN1,  KC_BTN2,
                                                         KC_TRNS,  KC_TRNS,
                                               KC_TRNS,  KC_TRNS,
                                               KC_TRNS,  KC_TRNS,  KC_WBAK,
       // right hand
                 KC_TRNS,  KC_PAUS,  KC_SCRL,  KC_TRNS,  KC_TRNS,  KC_SLEP,
                 KC_TRNS,  KC_TRNS,  KC_TRNS,  KC_TRNS,  KC_TRNS,  KC_TRNS,
                 KC_TRNS,  KC_TRNS,  KC_TRNS,  KC_TRNS,  KC_TRNS,  KC_MPLY,
                 KC_TRNS,  KC_MUTE,  KC_MPLY,  KC_TRNS,  KC_TRNS,  KC_TRNS,
                           KC_MPRV,  KC_VOLD,  KC_VOLU,  KC_MNXT,  KC_TRNS,
       KC_TRNS,  KC_TRNS,
                 KC_TRNS,  KC_TRNS,
       KC_TRNS,  KC_TRNS,  KC_TRNS
),
/* Keymap 3: Mouse keys
 * ,-----------------------------------------.                    ,-----------------------------------------.
 * |      |      |      |      |      |      |                    |      |      |      |      |      |      |
 * |------+------+------+------+------+------|                    |------+------+------+------+------+------|
 * |      |      |      |      | WhlL | WhlR |                    |      |      |      |      |      |      |
 * |------+------+------+------+------+------|                    |------+------+------+------+------+------|
 * | 5clk | 4clk | 3clk | Rclk | Lclk | WhlU |                    |      |MsLeft|MsDown| MsUp |MsRght|      |
 * |------+------+------+------+------+------|                    |------+------+------+------+------+------|
 * |      |      |      |      |      | WhlD |                    |      |      |      |      |      |      |
 * |------+------+------+------+------+------'                    `------+------+------+------+------+------|
 * |      |      |      |      |      |                                  | Left | Down |  Up  | Right|      |
 * `----------------------------------'                                  `----------------------------------'
 *                                      ,-------------.  ,-------------.
 *                                      |      |      |  |      |      |
 *                               ,------|------|------|  |------+------+------.
 *                               |      |      |      |  |      |      |      |
 *                               |------|------|      |  |      |------|------|
 *                               |      |      |      |  |      |      |      |
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
                                                         KC_TRNS,  KC_TRNS,
                                               KC_TRNS,  KC_TRNS,
                                               KC_TRNS,  KC_TRNS,  KC_TRNS,
       // right hand
                 KC_TRNS,  KC_TRNS,  KC_TRNS,  KC_TRNS,  KC_TRNS,  KC_TRNS,
                 KC_TRNS,  KC_TRNS,  KC_TRNS,  KC_TRNS,  KC_TRNS,  KC_TRNS,
                 KC_TRNS,  KC_MS_L,  KC_MS_D,  KC_MS_U,  KC_MS_R,  KC_TRNS,
                 KC_TRNS,  KC_TRNS,  KC_TRNS,  KC_TRNS,  KC_TRNS,  KC_TRNS,
                           KC_LEFT,  KC_DOWN,    KC_UP,  KC_RGHT,  KC_TRNS,
       KC_TRNS,  KC_TRNS,
                 KC_TRNS,  KC_TRNS,
       KC_TRNS,  KC_TRNS,  KC_TRNS
),
/* Keymap 4: Navigation keys
 * ,-----------------------------------------.                    ,-----------------------------------------.
 * |  Esc |  F13 |  F14 |  F15 |  F16 |  F17 |                    |  F18 |  F19 |  F20 |  F21 |  F22 | Sleep|
 * |------+------+------+------+------+------|                    |------+------+------+------+------+------|
 * |      |      |      | BriUp|      |      |                    |      |      |      |      |      |      |
 * |------+------+------+------+------+------|                    |------+------+------+------+------+------|
 * |      |      |BLDown| BriDn| BLUp |      |                    |      |      |      |      |      |      |
 * |------+------+------+------+------+------|                    |------+------+------+------+------+------|
 * |      |      |      |      |      |      |                    |      |      |      |      |      |      |
 * |------+------+------+------+------+------'                    `------+------+------+------+------+------|
 * |Reboot|      |      |  F23 |  F24 |                                  | Home | PgDn | PgUp |  End |      |
 * `----------------------------------'                                  `----------------------------------'
 *                                      ,-------------.  ,-------------.
 *                                      |      |      |  |      |      |
 *                               ,------|------|------|  |------+------+------.
 *                               |      |      |      |  |      |      |      |
 *                               |------|------|      |  |      |------|------|
 *                               |      |      |      |  |      |      |      |
 *                               `--------------------'  `--------------------'
 *
 */
// NAVIGATION
[NAV] = LAYOUT_dactyl(
       // left hand
        KC_ESC,  KC_F13,   KC_F14,   KC_F15,   KC_F16,   KC_F17,
       KC_TRNS,  KC_TRNS,  KC_TRNS,  KC_BRIU,  KC_TRNS,  KC_TRNS,
       KC_TRNS,  KC_TRNS,  BL_DOWN,  KC_BRID,    BL_UP,  KC_TRNS,
       KC_TRNS,  KC_TRNS,  KC_TRNS,  KC_TRNS,  KC_TRNS,  KC_TRNS,
        QK_RBT,  KC_TRNS,  KC_TRNS,   KC_F23,   KC_F24,
                                                         KC_TRNS,  KC_TRNS,
                                               KC_TRNS,  KC_TRNS,
                                               KC_TRNS,  KC_TRNS,  KC_TRNS,
       // right hand
                  KC_F18,   KC_F19,   KC_F20,   KC_F21,   KC_F22,  KC_SLEP,
                 KC_TRNS,  KC_TRNS,  KC_TRNS,  KC_TRNS,  KC_TRNS,  KC_TRNS,
                 KC_TRNS,  KC_TRNS,  KC_TRNS,  KC_TRNS,  KC_TRNS,  KC_TRNS,
                 KC_TRNS,  KC_TRNS,  KC_TRNS,  KC_TRNS,  KC_TRNS,  KC_TRNS,
                           KC_HOME,  KC_PGDN,  KC_PGUP,   KC_END,  KC_TRNS,
       KC_TRNS,  KC_TRNS,
                 KC_TRNS,  KC_TRNS,
       KC_TRNS,  KC_TRNS,  KC_TRNS
),
};

void keyboard_post_init_user(void) {
  // Customise these values to desired behaviour
  debug_enable = true;
  debug_matrix = true;
  debug_keyboard = true;
  //debug_mouse = true;
}
