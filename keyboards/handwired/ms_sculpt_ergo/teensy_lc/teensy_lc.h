#pragma once
#include "ms_sculpt_ergo.h"

/*
 * Microsoft Sculpt US+UK keymap definition macro
 * For Teensy LC
 * 8 row, 18 column matrix
 * No physical columns merged
*/
#define LAYOUT( \
         K0B,      K0D, K0E, K0F,      K0H, K0I, K0J, K0K, K0L, K0M, K0N,                     \
         K1B,      K1D, K1E, K1F,      K1H, K1I, K1J, K1K, K1L, K1M, K1N,      K1P,           \
         K2B,      K2D, K2E, K2F,      K2H,      K2J, K2K, K2L, K2M, K2N,      K2P,           \
         K3B,      K3D, K3E, K3F,      K3H, K3I, K3J, K3K, K3L, K3M, K3N,      K3P,           \
                   K4D, K4E, K4F, K4G,      K4I, K4J, K4K, K4L, K4M, K4N,           K4Q,      \
         K5B, K5C, K5D, K5E, K5F,      K5H,      K5J, K5K, K5L, K5M, K5N, K5O,                \
    K6A, K6B,      K6D, K6E,                K6I, K6J, K6K, K6L,                          K6R, \
         K7B,      K7D, K7E, K7F,      K7H, K7I, K7J, K7K, K7L, K7M, K7N,      K7P            \
) { \
    { KC_NO,    KC_##K0B, KC_NO,    KC_##K0D, KC_##K0E, KC_##K0F, KC_NO,    KC_##K0H, KC_##K0I, KC_##K0J, KC_##K0K, KC_##K0L, KC_##K0M, KC_##K0N, KC_NO,    KC_NO,    KC_NO,    KC_NO    }, \
    { KC_NO,    KC_##K1B, KC_NO,    KC_##K1D, KC_##K1E, KC_##K1F, KC_NO,    KC_##K1H, KC_##K1I, KC_##K1J, KC_##K1K, KC_##K1L, KC_##K1M, KC_##K1N, KC_NO,    KC_##K1P, KC_NO,    KC_NO    }, \
    { KC_NO,    KC_##K2B, KC_NO,    KC_##K2D, KC_##K2E, KC_##K2F, KC_NO,    KC_##K2H, KC_NO,    KC_##K2J, KC_##K2K, KC_##K2L, KC_##K2M, KC_##K2N, KC_NO,    KC_##K2P, KC_NO,    KC_NO    }, \
    { KC_NO,    KC_##K3B, KC_NO,    KC_##K3D, KC_##K3E, KC_##K3F, KC_NO,    KC_##K3H, KC_##K3I, KC_##K3J, KC_##K3K, KC_##K3L, KC_##K3M, KC_##K3N, KC_NO,    KC_##K3P, KC_NO,    KC_NO    }, \
    { KC_NO,    KC_NO,    KC_NO,    KC_##K4D, KC_##K4E, KC_##K4F, KC_##K4G, KC_NO,    KC_##K4I, KC_##K4J, KC_##K4K, KC_##K4L, KC_##K4M, KC_##K4N, KC_NO,    KC_NO,    KC_##K4Q, KC_NO    }, \
    { KC_NO,    KC_##K5B, KC_##K5C, KC_##K5D, KC_##K5E, KC_##K5F, KC_NO,    KC_##K5H, KC_NO,    KC_##K5J, KC_##K5K, KC_##K5L, KC_##K5M, KC_##K5N, KC_##K5O, KC_NO,    KC_NO,    KC_NO    }, \
    { KC_##K6A, KC_##K6B, KC_NO,    KC_##K6D, KC_##K6E, KC_NO,    KC_NO,    KC_NO,    KC_##K6I, KC_##K6J, KC_##K6K, KC_##K6L, KC_NO,    KC_NO,    KC_NO,    KC_NO,    KC_NO,    KC_##K6R }, \
    { KC_NO,    KC_##K7B, KC_NO,    KC_##K7D, KC_##K7E, KC_##K7F, KC_NO,    KC_##K7H, KC_##K7I, KC_##K7J, KC_##K7K, KC_##K7L, KC_##K7M, KC_##K7N, KC_NO,    KC_##K7P, KC_NO,    KC_NO    }  \
}
