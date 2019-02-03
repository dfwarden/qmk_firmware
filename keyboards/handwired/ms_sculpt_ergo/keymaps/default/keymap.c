/*
Copyright 2012,2013 Jun Wako <wakojun@gmail.com>

This program is free software: you can redistribute it and/or modify
it under the terms of the GNU General Public License as published by
the Free Software Foundation, either version 2 of the License, or
(at your option) any later version.

This program is distributed in the hope that it will be useful,
but WITHOUT ANY WARRANTY; without even the implied warranty of
MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
GNU General Public License for more details.

You should have received a copy of the GNU General Public License
along with this program.  If not, see <http://www.gnu.org/licenses/>.
*/

#include "ms_sculpt_ergo.h"

#define BASE 0 // default layer
#define FN 1 // symbols

const uint16_t keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
    /* 0: qwerty, US+UK */
    [BASE] = LAYOUT(
        PAUS, DEL, 0, 9, 8, BSPC, 7, TAB, Q, 2, 1, \
        PGUP, F12, LBRC, MINS, RBRC, INS, Y, F5, F3, W, 4, F6, \
        HOME, CALC, P, O, I, U, R, E, CAPS, 3, T, \
        SLCK, ENT, SCLN, L, K, BSLS, J, F, D, NUBS, A, LGUI, \
        FN1, SLSH, QUOT, RALT, LEFT, H, G, F4, S, ESC, LALT, \
        END, RSFT, PGDN, NUHS, DOT, COMM, M, V, C, X, Z, LSFT, \
        RCTL, RGHT, UP, DOWN, SPC, N, B, SPC, LCTL, \
        PSCR, F11, EQL, F9, F8, F10, F7, 5, F2, F1, GRV, 6),
    /* 1: FN1 (Replaces arrows with pagination, home and end and activates
               multimedia keys on top row).
     */
    [FN] = LAYOUT(
        TRNS, TRNS, TRNS, TRNS, TRNS, TRNS, TRNS, TRNS, TRNS, TRNS, TRNS, \
        TRNS, TRNS, TRNS, TRNS, TRNS, TRNS, TRNS, TRNS, VOLD, TRNS, TRNS, TRNS, \
        TRNS, TRNS, TRNS, TRNS, TRNS, TRNS, TRNS, TRNS, TRNS, TRNS, TRNS, \
        TRNS, TRNS, TRNS, TRNS, TRNS, TRNS, TRNS, TRNS, TRNS, TRNS, TRNS, TRNS, \
        TRNS, TRNS, TRNS, TRNS, HOME, TRNS, TRNS, VOLU, TRNS, TRNS, TRNS, \
        TRNS, TRNS, TRNS, TRNS, TRNS, TRNS, TRNS, TRNS, TRNS, TRNS, TRNS, TRNS, \
        TRNS, END, PGUP, PGDN, TRNS, TRNS, TRNS, TRNS, TRNS, \
        TRNS, TRNS, TRNS, TRNS, TRNS, TRNS, TRNS, TRNS, MUTE, MPLY, TRNS, TRNS ),
};
const uint16_t PROGMEM fn_actions[] = {
    ACTION_DEFAULT_LAYER_SET(0),    // Default layer. Not used.
    ACTION_LAYER_TAP_KEY(1, KC_APP),  // FN1
};
