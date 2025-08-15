#include QMK_KEYBOARD_H

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
    [0] = LAYOUT_split_3x5_2(
        // Row 1
        KC_Q,          KC_W,        KC_E,            KC_R,           KC_T,
        KC_Y,          KC_U,        KC_I,            KC_O,           KC_P,
        // Row 2
        LSFT_T(KC_A), LT(3, KC_S),  LT(2, KC_D),     KC_F,           KC_G,
        KC_H,         KC_J,         KC_K,            LT(4, KC_L),    LSFT_T(KC_SCLN),
        // Row 3
        KC_Z,         LCTL_T(KC_X), LALT_T(KC_C),    KC_V,           KC_B,
        KC_N,         KC_M,         LALT_T(KC_COMM), LCTL_T(KC_DOT), KC_SLSH,
        // Thumbs
        LGUI_T(KC_TAB), LT(1, KC_SPC), KC_BSPC, RALT_T(KC_ENT)),


    [1] = LAYOUT_split_3x5_2(
        // Row 1
        KC_TRNS,    KC_PPLS,       KC_PERC, KC_EXLM, RALT(KC_8),
        RALT(KC_9), LSFT(KC_MINS), KC_AMPR, KC_TRNS, KC_TRNS,
        // Row 2
        KC_TRNS,    KC_ESC,        KC_NUBS, KC_CIRC, KC_ASTR,
        KC_LPRN,    KC_GRV,        KC_DLR,  KC_DEL,  KC_TRNS,
        // Row 3
        KC_TRNS,    KC_TRNS,       KC_PEQL, KC_TRNS, RALT(KC_7),
        RALT(KC_0), RALT(KC_MINS), KC_TRNS, KC_TRNS, KC_TRNS,
        // Thumbs
        KC_TRNS, KC_NO, KC_TRNS, KC_TRNS),


    [2] = LAYOUT_split_3x5_2(
        // Row 1
        KC_TRNS, KC_PPLS, KC_TRNS, RALT(KC_RBRC), KC_BSLS,
        KC_PSCR, KC_SCRL, KC_PGUP, KC_PAUS,       KC_MINS,
        // Row 2
        KC_TRNS, KC_TRNS, KC_NO,   RALT(KC_NUBS), KC_AT,
        KC_LEFT, KC_DOWN, KC_UP,   KC_RGHT,       KC_LBRC,
        // Row 3
        KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS,       KC_EQL,
        KC_CAPS, KC_HOME, KC_PGDN, KC_END,        KC_QUOT,
        // Thumbs
        KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS),


    [3] = LAYOUT_split_3x5_2(
        // Row 1
        KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS,
        KC_PSLS, KC_7,    KC_8,    KC_9,    KC_PPLS,
        // Row 2
        KC_TRNS, KC_NO,   KC_TRNS, KC_TRNS, KC_TRNS,
        KC_0,    KC_4,    KC_5,    KC_6,    KC_PMNS,
        // Row 3
        KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS,
        KC_PAST, KC_1,    KC_2,    KC_3,    KC_PEQL,
        // Thumbs
        KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS),


    [4] = LAYOUT_split_3x5_2(
        // Row 1
        KC_F13,  KC_F1,   KC_F2,   KC_F3,   KC_F4,
        KC_VOLU, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS,
        // Row 2
        KC_F14,  KC_F5,   KC_F6,   KC_F7,   KC_F8,
        KC_VOLD, KC_TRNS, KC_TRNS, KC_NO,   KC_TRNS,
        // Row 3
        KC_F15,  KC_F9,   KC_F10,  KC_F11,  KC_F12,
        KC_TRNS, KC_TRNS, OS_RALT, KC_TRNS, KC_TRNS,
        // Thumbs
        KC_TRNS, KC_TRNS, KC_ESC,  KC_TRNS)};
