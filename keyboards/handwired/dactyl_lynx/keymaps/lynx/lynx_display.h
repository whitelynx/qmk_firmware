// Copyright 2023 zzeneg (@zzeneg)
// SPDX-License-Identifier: GPL-2.0-or-later

#define MODS_SHIFT ((get_mods() | get_oneshot_mods()) & MOD_MASK_SHIFT)
#define MODS_CTRL ((get_mods() | get_oneshot_mods()) & MOD_MASK_CTRL)
#define MODS_ALT ((get_mods() | get_oneshot_mods()) & MOD_MASK_ALT)
#define MODS_GUI ((get_mods() | get_oneshot_mods()) & MOD_MASK_GUI)

typedef enum {
    BASE = 0, // default layer
    SYMB,     // symbols
    MDIA,     // media keys
    MOUS,     // mouse keys
    NAV,      // navigation keys
    QWRT,     // QWERTY mode
} layer_number;

bool display_init_kb(void);
void display_process_layer(uint8_t current_layer);
void display_shutdown_kb(bool jump_to_bootloader);
