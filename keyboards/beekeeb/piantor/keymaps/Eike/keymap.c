// Copyright 2022 beekeeb
// SPDX-License-Identifier: GPL-2.0-or-later

#include QMK_KEYBOARD_H
#include"keymap_german.h" 

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
     /*
      * ┌───┬───┬───┬───┬───┬───┐       ┌───┬───┬───┬───┬───┬───┐
      * │Tab│ Q │ W │ E │ R │ T │       │ Y │ U │ I │ O │ P │Bsp│
      * ├───┼───┼───┼───┼───┼───┤       ├───┼───┼───┼───┼───┼───┤
      * │Ctl│ A │ S │ D │ F │ G │       │ H │ J │ K │ L │ ; │ ' │
      * ├───┼───┼───┼───┼───┼───┤       ├───┼───┼───┼───┼───┼───┤
      * │Sft│ Z │ X │ C │ V │ B │       │ N │ M │ , │ . │ / │Sft│
      * └───┴───┴───┴───┴───┴───┘       └───┴───┴───┴───┴───┴───┘
      *               ┌───┐                   ┌───┐
      *               │GUI├───┐           ┌───┤Alt│
      *               └───┤Bsp├───┐   ┌───┤Ent├───┘
      *                   └───┤   │   │   ├───┘
      *                       └───┘   └───┘
      */
    [0] = LAYOUT_split_3x6_3(
KC_TAB,DE_J,DE_D,DE_U,DE_A,DE_X,DE_P,DE_H,DE_L,DE_M,DE_W,DE_SS,
KC_ESC,DE_C,DE_T,DE_I,MT(MOD_LGUI, DE_E),DE_O,DE_B,MT(MOD_RGUI, DE_N),DE_R,DE_S,DE_G,DE_Q,
KC_LCTL,DE_F,DE_V,DE_UDIA,DE_ADIA,DE_ODIA,DE_Y,DE_Z,DE_COMM,DE_DOT,DE_K,KC_RALT,
KC_ENT,KC_LSFT,KC_BSPC,KC_DEL,KC_SPC,TO(1)),
    [1] = LAYOUT_split_3x6_3(
DE_DEG,DE_EURO,DE_UNDS,DE_LBRC,DE_RBRC,DE_CIRC,DE_EXLM,DE_LABK,DE_RABK,DE_EQL,DE_AMPR,XXXXXXX,
XXXXXXX,DE_BSLS,DE_SLSH,DE_LCBR,DE_RCBR,DE_ASTR,DE_QUES,DE_LPRN,DE_RPRN,DE_MINS,DE_COLN,DE_AT,
XXXXXXX,DE_HASH,DE_DLR,DE_PIPE,DE_TILD,DE_GRV,DE_PLUS,DE_PERC,DE_DQUO,DE_QUOT,DE_SCLN,XXXXXXX,
TO(0),XXXXXXX,KC_BSPC,KC_DEL,KC_SPC,TO(2)),
    [2] = LAYOUT_split_3x6_3(
XXXXXXX,XXXXXXX,KC_AUDIO_VOL_DOWN,KC_AUDIO_MUTE,KC_AUDIO_VOL_UP,XXXXXXX,KC_HOME,KC_PGDN,KC_PGUP,KC_END,XXXXXXX,XXXXXXX,
XXXXXXX,LGUI(KC_TAB),KC_MEDIA_PREV_TRACK,KC_MEDIA_PLAY_PAUSE,KC_MEDIA_NEXT_TRACK,XXXXXXX,KC_LEFT,KC_DOWN,KC_UP,KC_RIGHT,XXXXXXX,XXXXXXX,
XXXXXXX,XXXXXXX,XXXXXXX,XXXXXXX,XXXXXXX,XXXXXXX,XXXXXXX,XXXXXXX,XXXXXXX,XXXXXXX,XXXXXXX,XXXXXXX,
TO(0),XXXXXXX,KC_BSPC,KC_DEL,KC_SPC,TO(3)),
    [3] = LAYOUT_split_3x6_3(
XXXXXXX,XXXXXXX,XXXXXXX,DE_SLSH,DE_ASTR,XXXXXXX,XXXXXXX,DE_PLUS,DE_MINS,DE_EQL,XXXXXXX,XXXXXXX,
XXXXXXX,DE_1,DE_2,DE_3,DE_4,DE_5,DE_6,DE_7,DE_8,DE_9,DE_0,XXXXXXX,
XXXXXXX,XXXXXXX,XXXXXXX,XXXXXXX,XXXXXXX,XXXXXXX,XXXXXXX,XXXXXXX,XXXXXXX,XXXXXXX,XXXXXXX,XXXXXXX,
TO(0),XXXXXXX,KC_BSPC,KC_DEL,KC_SPC,TO(3)),
};
