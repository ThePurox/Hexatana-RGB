// Copyright 2023 QMK
// SPDX-License-Identifier: GPL-2.0-or-later

#include QMK_KEYBOARD_H
#include "keymap_german.h"

#define SYM LT(2, KC_ENT)
#define TAB_NUM LT(1, KC_TAB)
#define SPC_SPE LT(3, KC_SPC)
#define ALT_BSPC MT(MOD_LALT, KC_BSPC)
#define GUI_ESC MT(MOD_LGUI, KC_ESC)
#define OSS OSM(MOD_RSFT)

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
    /* [0] = LAYOUT( */
    /*     KC_Q, KC_W, KC_E, KC_R, KC_T, KC_Z, KC_U, KC_I, KC_O, KC_P, */
    /*     KC_A, KC_S, KC_D, KC_F, KC_G, KC_H, KC_J, KC_K, KC_L, KC_ENT, */
    /*     KC_Y, KC_X, KC_C, KC_V, KC_B, KC_N, KC_M, KC_DOT, KC_2, KC_3, */
    /*     KC_4, KC_5, KC_SPC, KC_ENT, KC_8, KC_9 */
    /*              ) */

  [0] = LAYOUT(
     KC_Q,    KC_W,    KC_E,    KC_R,    KC_T,                         KC_Y,    KC_U,    KC_I,    KC_O,   KC_P,
     KC_A,    KC_S,    KC_D,    KC_F,    KC_G,                         KC_H,    KC_J,    KC_K,    KC_L,     OSS,
     KC_Z,    KC_X,    KC_C,    KC_V,    KC_B,                         KC_N,    KC_M, KC_COMM,  KC_DOT, KC_SLSH,
                              KC_LCTL, GUI_ESC, SPC_SPE,      SYM,   TAB_NUM, ALT_BSPC

  ),

  [1] = LAYOUT(
      KC_F1,   KC_F2,   KC_F3,   KC_F4, XXXXXXX,                      DE_PLUS,    KC_1,    KC_2,    KC_3, DE_MINS,
      KC_F5,   KC_F6,   KC_F7,   KC_F8, XXXXXXX,                         KC_0,    KC_4,    KC_5,    KC_6,  DE_DOT,
      KC_F9,  KC_F10,  KC_F11,  KC_F12, XXXXXXX,                      DE_ASTR,    KC_7,    KC_8,    KC_9, DE_SLSH,
                               KC_LCTL, KC_LGUI,  KC_SPC,    _______,   MO(3), KC_LALT
  ),

  [2] = LAYOUT(
      XXXXXXX, XXXXXXX, DE_LBRC, DE_RBRC, DE_ACUT,                      DE_EXLM, DE_QUOT, DE_DQUO, DE_CIRC, DE_PERC,
      DE_BSLS, XXXXXXX, DE_LPRN, DE_RPRN, DE_TILD,                       DE_EQL, DE_PLUS, DE_MINS, DE_ASTR, DE_SLSH,
      XXXXXXX, XXXXXXX, DE_LCBR, DE_RCBR, XXXXXXX,                      DE_QUES, DE_LABK, DE_RABK, DE_PIPE, DE_TILD,
                                          KC_LCTL, KC_LGUI,  KC_SPC,      MO(3), _______, KC_LALT
  ),

  [3] = LAYOUT(
      DE_AT,   XXXXXXX, DE_EURO, XXXXXXX, XXXXXXX,                      XXXXXXX, DE_UDIA, XXXXXXX, DE_ODIA, XXXXXXX,
      DE_ADIA,   DE_SS, RGB_HUI, RGB_SAI, RGB_VAI,                      KC_LEFT, KC_DOWN,   KC_UP,KC_RIGHT, XXXXXXX,
      RGB_MOD, RGB_TOG, RGB_HUD, RGB_SAD, RGB_VAD,                      KC_HOME, KC_PGDN, KC_PGUP,  KC_END, XXXXXXX,
                                          KC_LCTL, KC_LGUI,  KC_SPC,     KC_ENT, _______, KC_LALT
  )
};

const uint16_t PROGMEM bspc_comb[]  = {KC_U, KC_I, COMBO_END};
const uint16_t PROGMEM cbspc_comb[] = {KC_U, KC_O, COMBO_END};
const uint16_t PROGMEM del_comb[]   = {KC_I, KC_O, COMBO_END};
combo_t                key_combos[] = {COMBO(bspc_comb, KC_BSPC), COMBO(cbspc_comb, LCTL(KC_BSPC)), COMBO(del_comb, KC_DEL)};
uint16_t               COMBO_LEN    = sizeof(key_combos) / sizeof(*key_combos);
