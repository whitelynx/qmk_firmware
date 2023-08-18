// Copyright 2023 QMK
// SPDX-License-Identifier: GPL-2.0-or-later

#include QMK_KEYBOARD_H

enum custom_keycodes {
    KC_P00 = SAFE_RANGE
};

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
    /*
     * ┌───┬───┬───┬───┐
     * │NL │ / │ * │ - │
     * ├───┼───┼───┼───┤
     * │ 7 │ 8 │ 9 │ + │
     * ├───┼───┼───┼───┤
     * │ 4 │ 5 │ 6 │ = │
     * ├───┼───┼───┼───┤
     * │ 1 │ 2 │ 3 │Tab│
     * ├───┼───┼───┼───┤
     * │TT1│ 0 │ . │Ent│
     * └───┴───┴───┴───┘
     */
    [0] = LAYOUT_ortho_5x4(
        KC_NUM,  KC_PSLS, KC_PAST, KC_PMNS,
        KC_P7,   KC_P8,   KC_P9,   KC_PPLS,
        KC_P4,   KC_P5,   KC_P6,   KC_EQL,
        KC_P1,   KC_P2,   KC_P3,   KC_TAB,
        TT(1),   KC_P0,   KC_PDOT, KC_PENT
    ),

    /*
     * ┌───┬───┬───┬───┐
     * │Esc│Und│Del│Bks│
     * ├───┼───┼───┼───┤
     * │Hom│ ↑ │PgU│Cal│
     * ├───┼───┼───┼───┤
     * │ ← │   │ → │RSh│
     * ├───┼───┼───┼───┤
     * │End│ ↓ │PgD│STb│
     * ├───┼───┼───┼───┤
     * │TT0│Cpy│Pst│Ent│
     * └───┴───┴───┴───┘
     */
    [1] = LAYOUT_ortho_5x4(
        KC_ESC,  KC_UNDO, KC_DEL,  KC_BSPC,
        KC_HOME, KC_UP,   KC_PGUP, KC_CALC,
        KC_LEFT, XXXXXXX, KC_RGHT, KC_RSFT,
        KC_END,  KC_DOWN, KC_PGDN, LSFT(KC_TAB),
        TT(0),   KC_COPY, KC_PSTE, KC_PENT
    )
};

bool process_record_user(uint16_t keycode, keyrecord_t *record) {
    if (record->event.pressed) {
        switch(keycode) {
        }
    }
    return true;
}
