#include "dz60rgb.h"
#include "config.h"

#ifdef RGB_MATRIX_ENABLE

#if defined (dzrgb60_iso)

const is31_led g_is31_leds[DRIVER_LED_TOTAL] = {
/* Refer to IS31 manual for these locations
 *   driver
 *   |  R location
 *   |  |       G location
 *   |  |       |       B location
 *   |  |       |       | */
    {0, K_14,   J_14,   L_14},
    {0, K_13,   J_13,   L_13},
    {0, K_12,   J_12,   L_12},
    {0, K_11,   J_11,   L_11},
    {0, K_10,   J_10,   L_10},
    {0, K_9,    J_9,    L_9},
    {0, K_8,    J_8,    L_8},
    {0, K_7,    J_7,    L_7},
    {0, K_6,    J_6,    L_6},
    {0, K_5,    J_5,    L_5},
    {0, K_4,    J_4,    L_4},
    {0, K_3,    J_3,    L_3},
    {0, K_2,    J_2,    L_2},
    {0, K_1,    J_1,    L_1},

    {0, H_15,   G_15,   I_15},
    {0, H_13,   G_13,   I_13},
    {0, H_12,   G_12,   I_12},
    {0, H_11,   G_11,   I_11},
    {0, H_10,   G_10,   I_10},
    {0, H_9,    G_9,    I_9},
    {0, H_8,    G_8,    I_8},
    {0, H_7,    G_7,    I_7},
    {0, H_6,    G_6,    I_6},
    {0, H_5,    G_5,    I_5},
    {0, H_4,    G_4,    I_4},
    {0, H_3,    G_3,    I_3},
    {0, H_2,    G_2,    I_2},
    {0, H_1,    G_1,    I_1},

    {0, B_14,   A_14,   C_14},
    {0, E_12,   D_12,   F_12},
    {0, E_11,   D_11,   F_11},
    {0, E_10,   D_10,   F_10},
    {0, E_9,    D_9,    F_9},
    {0, E_8,    D_8,    F_8},
    {0, E_7,    D_7,    F_7},
    {0, E_6,    D_6,    F_6},
    {0, E_5,    D_5,    F_5},
    {0, E_4,    D_4,    F_4},
    {0, E_3,    D_3,    F_3},
    {0, E_2,    D_2,    F_2},
    {0, E_1,    D_1,    F_1},

    {0, B_13,   A_13,   C_13},
    {0, B_11,   A_11,   C_11},
    {0, B_10,   A_10,   C_10},
    {0, B_9,    A_9,    C_9},
    {0, B_8,    A_8,    C_8},
    {0, B_7,    A_7,    C_7},
    {0, B_6,    A_6,    C_6},
    {0, B_5,    A_5,    C_5},
    {0, B_4,    A_4,    C_4},
    {0, B_3,    A_3,    C_3},
    {0, B_2,    A_2,    C_2},
    {0, B_1,    A_1,    C_1},

    {0, B_15,   A_15,   C_15},
    {0, E_13,   D_13,   F_13},
    {0, B_12,   A_12,   C_12},
    {0, E_15,   D_15,   F_15},
    {0, B_16,   A_16,   C_16},
    {0, E_16,   D_16,   F_16},
    {0, H_16,   G_16,   I_16},
    {0, K_16,   J_16,   L_16}
};

const rgb_led g_rgb_leds[DRIVER_LED_TOTAL] = {
    {{0|(13<<4)},   {16*13.5,  0}, 1},
    {{0|(12<<4)},   {16*12,  0}, 1},
    {{0|(11<<4)},   {16*11,  0}, 1},
    {{0|(10<<4)},   {16*10,  0}, 1},
    {{0|(9<<4)},    {16*9,  0}, 1},
    {{0|(8<<4)},    {16*8,  0}, 1},
    {{0|(7<<4)},    {16*7,  0}, 1},
	{{0|(6<<4)},    {16*6,  0}, 1},
    {{0|(5<<4)},    {16*5,  0}, 1},
    {{0|(4<<4)},    {16*4,  0}, 1},
    {{0|(3<<4)},    {16*3,  0}, 1},
    {{0|(2<<4)},    {16*2,  0}, 1},
    {{0|(1<<4)},    {16*1,  0}, 1},
    {{0|(0<<4)},    {16*0,  0}, 1},

	{{2|(13<<4)},   {16*13.75, 24}, 1},
    {{1|(12<<4)},   {16*12.5,  16}, 0},
    {{1|(11<<4)},   {16*11.5,  16}, 0},
    {{1|(10<<4)},   {16*10.5,  16}, 0},
    {{1|(9<<4)},    { 16*9.5,  16}, 0},
    {{1|(8<<4)},    { 16*8.5,  16}, 0},
    {{1|(7<<4)},    { 16*7.5,  16}, 0},
	{{1|(6<<4)},    { 16*6.5,  16}, 0},
    {{1|(5<<4)},    { 16*5.5,  16}, 0},
    {{1|(4<<4)},    { 16*4.5,  16}, 0},
    {{1|(3<<4)},    { 16*3.5,  16}, 0},
    {{1|(2<<4)},    { 16*2.5,  16}, 0},
    {{1|(1<<4)},    { 16*1.5,  16}, 0},
    {{1|(0<<4)},    { 16*0.25,  16}, 1},

	{{1|(13<<4)},   {16*12.75,  32}, 1},
    {{2|(11<<4)},   {16*11.75,  32}, 0},
    {{2|(10<<4)},   {16*10.75,  32}, 0},
    {{2|(9<<4)},    {16*9.75,  32}, 0},
    {{2|(8<<4)},    {16*8.75,  32}, 0},
    {{2|(7<<4)},    {16*7.75,  32}, 0},
	{{2|(6<<4)},    { 16*6.75,  32}, 0},
    {{2|(5<<4)},    { 16*5.75,  32}, 0},
    {{2|(4<<4)},    { 16*4.75,  32}, 0},
    {{2|(3<<4)},    { 16*3.75,  32}, 0},
    {{2|(2<<4)},    { 16*2.75,  32}, 0},
    {{2|(1<<4)},    { 16*1.75,  32}, 0},
    {{2|(0<<4)},    { 16*0.375,  32}, 1},

    {{3|(11<<4)},   {16*13.125,  48}, 1},
    {{3|(10<<4)},   {16*11.25,  48}, 0},
    {{3|(9<<4)},    {16*10.25,  48}, 0},
    {{3|(8<<4)},    {16*9.25,  48}, 0},
    {{3|(7<<4)},    {16*8.25,  48}, 0},
	{{3|(6<<4)},    {16*7.25,  48}, 0},
    {{3|(5<<4)},    {16*6.25,  48}, 0},
    {{3|(4<<4)},    {16*5.25,  48}, 0},
    {{3|(3<<4)},    {16*4.25,  48}, 0},
    {{3|(2<<4)},    {16*3.25,  48}, 0},
    {{3|(1<<4)},    {16*1.25,  48}, 0},
    {{3|(0<<4)},    {16*0.625,  48}, 1},

	{{4|(13<<4)},   {16*13.875,  64}, 1},
    {{4|(11<<4)},   {16*12.625,  64}, 1},
    {{4|(10<<4)},   {16*11.375,  64}, 1},
    {{4|(9<<4)},    {16*10.125,  64}, 1},
    {{4|(5<<4)},    { 16*6.375,  64}, 0},
    {{4|(2<<4)},    { 16*2.625,  64}, 1},
    {{4|(1<<4)},    { 16*1.375,  64}, 1},
    {{4|(0<<4)},    { 16*0.125,  64}, 1}

};



#elif defined (dzrgb60_hhkb)

const is31_led g_is31_leds[DRIVER_LED_TOTAL] = {
/* Refer to IS31 manual for these locations
 *   driver
 *   |  R location
 *   |  |       G location
 *   |  |       |       B location
 *   |  |       |       | */
	{0, H_15,   G_15,   I_15},
    {0, K_14,   J_14,   L_14},
    {0, K_13,   J_13,   L_13},
    {0, K_12,   J_12,   L_12},
    {0, K_11,   J_11,   L_11},
    {0, K_10,   J_10,   L_10},
    {0, K_9,    J_9,    L_9},
    {0, K_8,    J_8,    L_8},
    {0, K_7,    J_7,    L_7},
    {0, K_6,    J_6,    L_6},
    {0, K_5,    J_5,    L_5},
    {0, K_4,    J_4,    L_4},
    {0, K_3,    J_3,    L_3},
    {0, K_2,    J_2,    L_2},
    {0, K_1,    J_1,    L_1},

    {0, H_14,   G_14,   I_14},
    {0, H_13,   G_13,   I_13},
    {0, H_12,   G_12,   I_12},
    {0, H_11,   G_11,   I_11},
    {0, H_10,   G_10,   I_10},
    {0, H_9,    G_9,    I_9},
    {0, H_8,    G_8,    I_8},
    {0, H_7,    G_7,    I_7},
    {0, H_6,    G_6,    I_6},
    {0, H_5,    G_5,    I_5},
    {0, H_4,    G_4,    I_4},
    {0, H_3,    G_3,    I_3},
    {0, H_2,    G_2,    I_2},
    {0, H_1,    G_1,    I_1},

    {0, E_14,   D_14,   F_14},
    {0, E_12,   D_12,   F_12},
    {0, E_11,   D_11,   F_11},
    {0, E_10,   D_10,   F_10},
    {0, E_9,    D_9,    F_9},
    {0, E_8,    D_8,    F_8},
    {0, E_7,    D_7,    F_7},
    {0, E_6,    D_6,    F_6},
    {0, E_5,    D_5,    F_5},
    {0, E_4,    D_4,    F_4},
    {0, E_3,    D_3,    F_3},
    {0, E_2,    D_2,    F_2},
    {0, E_1,    D_1,    F_1},

    {0, B_14,   A_14,   C_14},
    {0, B_13,   A_13,   C_13},
    {0, B_11,   A_11,   C_11},
    {0, B_10,   A_10,   C_10},
    {0, B_9,    A_9,    C_9},
    {0, B_8,    A_8,    C_8},
    {0, B_7,    A_7,    C_7},
    {0, B_6,    A_6,    C_6},
    {0, B_5,    A_5,    C_5},
    {0, B_4,    A_4,    C_4},
    {0, B_3,    A_3,    C_3},
    {0, B_2,    A_2,    C_2},
    {0, B_1,    A_1,    C_1},

    {0, B_15,   A_15,   C_15},
    {0, E_13,   D_13,   F_13},
    {0, B_12,   A_12,   C_12},
    {0, B_16,   A_16,   C_16},
    {0, E_16,   D_16,   F_16},
    {0, H_16,   G_16,   I_16},
    {0, K_16,   J_16,   L_16}
};

const rgb_led g_rgb_leds[DRIVER_LED_TOTAL] = {
	{{2|(12<<4)},   {16*14,  0}, 1},
    {{0|(13<<4)},   {16*13,  0}, 1},
    {{0|(12<<4)},   {16*12,  0}, 1},
    {{0|(11<<4)},   {16*11,  0}, 1},
    {{0|(10<<4)},   {16*10,  0}, 1},
    {{0|(9<<4)},    {16*9,  0}, 1},
    {{0|(8<<4)},    {16*8,  0}, 1},
    {{0|(7<<4)},    {16*7,  0}, 1},
	{{0|(6<<4)},    {16*6,  0}, 1},
    {{0|(5<<4)},    {16*5,  0}, 1},
    {{0|(4<<4)},    {16*4,  0}, 1},
    {{0|(3<<4)},    {16*3,  0}, 1},
    {{0|(2<<4)},    {16*2,  0}, 1},
    {{0|(1<<4)},    {16*1,  0}, 1},
    {{0|(0<<4)},    {16*0,  0}, 1},

	{{1|(13<<4)},   {16*13.75, 16}, 1},
    {{1|(12<<4)},   {16*12.5,  16}, 0},
    {{1|(11<<4)},   {16*11.5,  16}, 0},
    {{1|(10<<4)},   {16*10.5,  16}, 0},
    {{1|(9<<4)},    { 16*9.5,  16}, 0},
    {{1|(8<<4)},    { 16*8.5,  16}, 0},
    {{1|(7<<4)},    { 16*7.5,  16}, 0},
	{{1|(6<<4)},    { 16*6.5,  16}, 0},
    {{1|(5<<4)},    { 16*5.5,  16}, 0},
    {{1|(4<<4)},    { 16*4.5,  16}, 0},
    {{1|(3<<4)},    { 16*3.5,  16}, 0},
    {{1|(2<<4)},    { 16*2.5,  16}, 0},
    {{1|(1<<4)},    { 16*1.5,  16}, 0},
    {{1|(0<<4)},    { 16*0.25,  16}, 1},

	{{2|(13<<4)},   {16*12.75,  32}, 1},
    {{2|(11<<4)},   {16*11.75,  32}, 0},
    {{2|(10<<4)},   {16*10.75,  32}, 0},
    {{2|(9<<4)},    {16*9.75,  32}, 0},
    {{2|(8<<4)},    {16*8.75,  32}, 0},
    {{2|(7<<4)},    {16*7.75,  32}, 0},
	{{2|(6<<4)},    { 16*6.75,  32}, 0},
    {{2|(5<<4)},    { 16*5.75,  32}, 0},
    {{2|(4<<4)},    { 16*4.75,  32}, 0},
    {{2|(3<<4)},    { 16*3.75,  32}, 0},
    {{2|(2<<4)},    { 16*2.75,  32}, 0},
    {{2|(1<<4)},    { 16*1.75,  32}, 0},
    {{2|(0<<4)},    { 16*0.375,  32}, 1},

    {{3|(13<<4)},   {16*14,     48}, 1},
    {{3|(11<<4)},   {16*12.625, 48}, 0},
    {{3|(10<<4)},   {16*11.25,  48}, 0},
    {{3|(9<<4)},    {16*10.25,  48}, 0},
    {{3|(8<<4)},    {16*9.25,  48}, 0},
    {{3|(7<<4)},    {16*8.25,  48}, 0},
	{{3|(6<<4)},    {16*7.25,  48}, 0},
    {{3|(5<<4)},    {16*6.25,  48}, 0},
    {{3|(4<<4)},    {16*5.25,  48}, 0},
    {{3|(3<<4)},    {16*4.25,  48}, 0},
    {{3|(2<<4)},    {16*3.25,  48}, 0},
    {{3|(1<<4)},    {16*1.25,  48}, 0},
    {{3|(0<<4)},    {16*0.625,  48}, 1},

	{{4|(13<<4)},   {16*13.625,  64}, 1},
    {{4|(11<<4)},   {16*12.375,  64}, 1},
    {{4|(10<<4)},   {16*11.125,  64}, 1},
    {{4|(5<<4)},    { 16*7,      64}, 0},
    {{4|(2<<4)},    { 16*2.875,  64}, 1},
    {{4|(1<<4)},    { 16*1.625,  64}, 1},
    {{4|(0<<4)},    { 16*0.375,  64}, 1}

};
#elif defined (dzrgb60_hhkb_iso)
const is31_led g_is31_leds[DRIVER_LED_TOTAL] = {
/* Refer to IS31 manual for these locations
 *   driver
 *   |  R location
 *   |  |       G location
 *   |  |       |       B location
 *   |  |       |       | */
	{0, H_15,   G_15,   I_15},
    {0, K_14,   J_14,   L_14},
    {0, K_13,   J_13,   L_13},
    {0, K_12,   J_12,   L_12},
    {0, K_11,   J_11,   L_11},
    {0, K_10,   J_10,   L_10},
    {0, K_9,    J_9,    L_9},
    {0, K_8,    J_8,    L_8},
    {0, K_7,    J_7,    L_7},
    {0, K_6,    J_6,    L_6},
    {0, K_5,    J_5,    L_5},
    {0, K_4,    J_4,    L_4},
    {0, K_3,    J_3,    L_3},
    {0, K_2,    J_2,    L_2},
    {0, K_1,    J_1,    L_1},

    {0, K_15,   J_15,   L_15},
    {0, H_13,   G_13,   I_13},
    {0, H_12,   G_12,   I_12},
    {0, H_11,   G_11,   I_11},
    {0, H_10,   G_10,   I_10},
    {0, H_9,    G_9,    I_9},
    {0, H_8,    G_8,    I_8},
    {0, H_7,    G_7,    I_7},
    {0, H_6,    G_6,    I_6},
    {0, H_5,    G_5,    I_5},
    {0, H_4,    G_4,    I_4},
    {0, H_3,    G_3,    I_3},
    {0, H_2,    G_2,    I_2},
    {0, H_1,    G_1,    I_1},

    {0, E_15,   D_15,   F_15},
    {0, E_12,   D_12,   F_12},
    {0, E_11,   D_11,   F_11},
    {0, E_10,   D_10,   F_10},
    {0, E_9,    D_9,    F_9},
    {0, E_8,    D_8,    F_8},
    {0, E_7,    D_7,    F_7},
    {0, E_6,    D_6,    F_6},
    {0, E_5,    D_5,    F_5},
    {0, E_4,    D_4,    F_4},
    {0, E_3,    D_3,    F_3},
    {0, E_2,    D_2,    F_2},
    {0, E_1,    D_1,    F_1},

    {0, B_14,   A_14,   C_14},
    {0, B_13,   A_13,   C_13},
    {0, B_11,   A_11,   C_11},
    {0, B_10,   A_10,   C_10},
    {0, B_9,    A_9,    C_9},
    {0, B_8,    A_8,    C_8},
    {0, B_7,    A_7,    C_7},
    {0, B_6,    A_6,    C_6},
    {0, B_5,    A_5,    C_5},
    {0, B_4,    A_4,    C_4},
    {0, B_3,    A_3,    C_3},
    {0, B_2,    A_2,    C_2},
    {0, B_1,    A_1,    C_1},

    {0, B_15,   A_15,   C_15},
    {0, E_13,   D_13,   F_13},
    {0, B_12,   A_12,   C_12},
    {0, B_16,   A_16,   C_16},
    {0, E_16,   D_16,   F_16},
    {0, H_16,   G_16,   I_16},
    {0, K_16,   J_16,   L_16}
};

const rgb_led g_rgb_leds[DRIVER_LED_TOTAL] = {
	{{2|(12<<4)},   {16*14,  0}, 1},
    {{0|(13<<4)},   {16*13,  0}, 1},
    {{0|(12<<4)},   {16*12,  0}, 1},
    {{0|(11<<4)},   {16*11,  0}, 1},
    {{0|(10<<4)},   {16*10,  0}, 1},
    {{0|(9<<4)},    {16*9,  0}, 1},
    {{0|(8<<4)},    {16*8,  0}, 1},
    {{0|(7<<4)},    {16*7,  0}, 1},
	{{0|(6<<4)},    {16*6,  0}, 1},
    {{0|(5<<4)},    {16*5,  0}, 1},
    {{0|(4<<4)},    {16*4,  0}, 1},
    {{0|(3<<4)},    {16*3,  0}, 1},
    {{0|(2<<4)},    {16*2,  0}, 1},
    {{0|(1<<4)},    {16*1,  0}, 1},
    {{0|(0<<4)},    {16*0,  0}, 1},

	{{2|(13<<4)},   {16*13.75, 24}, 1},
    {{1|(12<<4)},   {16*12.5,  16}, 0},
    {{1|(11<<4)},   {16*11.5,  16}, 0},
    {{1|(10<<4)},   {16*10.5,  16}, 0},
    {{1|(9<<4)},    { 16*9.5,  16}, 0},
    {{1|(8<<4)},    { 16*8.5,  16}, 0},
    {{1|(7<<4)},    { 16*7.5,  16}, 0},
	{{1|(6<<4)},    { 16*6.5,  16}, 0},
    {{1|(5<<4)},    { 16*5.5,  16}, 0},
    {{1|(4<<4)},    { 16*4.5,  16}, 0},
    {{1|(3<<4)},    { 16*3.5,  16}, 0},
    {{1|(2<<4)},    { 16*2.5,  16}, 0},
    {{1|(1<<4)},    { 16*1.5,  16}, 0},
    {{1|(0<<4)},    { 16*0.25,  16}, 1},

	{{1|(13<<4)},   {16*12.75,  32}, 1},
    {{2|(11<<4)},   {16*11.75,  32}, 0},
    {{2|(10<<4)},   {16*10.75,  32}, 0},
    {{2|(9<<4)},    {16*9.75,  32}, 0},
    {{2|(8<<4)},    {16*8.75,  32}, 0},
    {{2|(7<<4)},    {16*7.75,  32}, 0},
	{{2|(6<<4)},    { 16*6.75,  32}, 0},
    {{2|(5<<4)},    { 16*5.75,  32}, 0},
    {{2|(4<<4)},    { 16*4.75,  32}, 0},
    {{2|(3<<4)},    { 16*3.75,  32}, 0},
    {{2|(2<<4)},    { 16*2.75,  32}, 0},
    {{2|(1<<4)},    { 16*1.75,  32}, 0},
    {{2|(0<<4)},    { 16*0.375,  32}, 1},

    {{3|(13<<4)},   {16*14,     48}, 1},
    {{3|(11<<4)},   {16*12.625, 48}, 0},
    {{3|(10<<4)},   {16*11.25,  48}, 0},
    {{3|(9<<4)},    {16*10.25,  48}, 0},
    {{3|(8<<4)},    {16*9.25,  48}, 0},
    {{3|(7<<4)},    {16*8.25,  48}, 0},
	{{3|(6<<4)},    {16*7.25,  48}, 0},
    {{3|(5<<4)},    {16*6.25,  48}, 0},
    {{3|(4<<4)},    {16*5.25,  48}, 0},
    {{3|(3<<4)},    {16*4.25,  48}, 0},
    {{3|(2<<4)},    {16*3.25,  48}, 0},
    {{3|(1<<4)},    {16*1.25,  48}, 0},
    {{3|(0<<4)},    {16*0.625,  48}, 1},

	{{4|(13<<4)},   {16*13.625,  64}, 1},
    {{4|(11<<4)},   {16*12.375,  64}, 1},
    {{4|(10<<4)},   {16*11.125,  64}, 1},
    {{4|(5<<4)},    { 16*7,      64}, 0},
    {{4|(2<<4)},    { 16*2.875,  64}, 1},
    {{4|(1<<4)},    { 16*1.625,  64}, 1},
    {{4|(0<<4)},    { 16*0.375,  64}, 1}

};
#elif defined (dzrgb60_ansi)
const is31_led g_is31_leds[DRIVER_LED_TOTAL] = {
/* Refer to IS31 manual for these locations
 *   driver
 *   |  R location
 *   |  |       G location
 *   |  |       |       B location
 *   |  |       |       | */
    {0, K_14,   J_14,   L_14},
    {0, K_13,   J_13,   L_13},
    {0, K_12,   J_12,   L_12},
    {0, K_11,   J_11,   L_11},
    {0, K_10,   J_10,   L_10},
    {0, K_9,    J_9,    L_9},
    {0, K_8,    J_8,    L_8},
    {0, K_7,    J_7,    L_7},
    {0, K_6,    J_6,    L_6},
    {0, K_5,    J_5,    L_5},
    {0, K_4,    J_4,    L_4},
    {0, K_3,    J_3,    L_3},
    {0, K_2,    J_2,    L_2},
    {0, K_1,    J_1,    L_1},

    {0, H_14,   G_14,   I_14},
    {0, H_13,   G_13,   I_13},
    {0, H_12,   G_12,   I_12},
    {0, H_11,   G_11,   I_11},
    {0, H_10,   G_10,   I_10},
    {0, H_9,    G_9,    I_9},
    {0, H_8,    G_8,    I_8},
    {0, H_7,    G_7,    I_7},
    {0, H_6,    G_6,    I_6},
    {0, H_5,    G_5,    I_5},
    {0, H_4,    G_4,    I_4},
    {0, H_3,    G_3,    I_3},
    {0, H_2,    G_2,    I_2},
    {0, H_1,    G_1,    I_1},

    {0, E_14,   D_14,   F_14},
    {0, E_12,   D_12,   F_12},
    {0, E_11,   D_11,   F_11},
    {0, E_10,   D_10,   F_10},
    {0, E_9,    D_9,    F_9},
    {0, E_8,    D_8,    F_8},
    {0, E_7,    D_7,    F_7},
    {0, E_6,    D_6,    F_6},
    {0, E_5,    D_5,    F_5},
    {0, E_4,    D_4,    F_4},
    {0, E_3,    D_3,    F_3},
    {0, E_2,    D_2,    F_2},
    {0, E_1,    D_1,    F_1},

    {0, B_13,   A_13,   C_13},
    {0, B_11,   A_11,   C_11},
    {0, B_10,   A_10,   C_10},
    {0, B_9,    A_9,    C_9},
    {0, B_8,    A_8,    C_8},
    {0, B_7,    A_7,    C_7},
    {0, B_6,    A_6,    C_6},
    {0, B_5,    A_5,    C_5},
    {0, B_4,    A_4,    C_4},
    {0, B_3,    A_3,    C_3},
    {0, B_2,    A_2,    C_2},
    {0, B_1,    A_1,    C_1},

    {0, B_15,   A_15,   C_15},
    {0, E_13,   D_13,   F_13},
    {0, B_12,   A_12,   C_12},
    {0, E_15,   D_15,   F_15},
    {0, B_16,   A_16,   C_16},
    {0, E_16,   D_16,   F_16},
    {0, H_16,   G_16,   I_16},
    {0, K_16,   J_16,   L_16}
};

const rgb_led g_rgb_leds[DRIVER_LED_TOTAL] = {
    {{0|(13<<4)},   {16*13.5,  0}, 1},
    {{0|(12<<4)},   {16*12,  0}, 1},
    {{0|(11<<4)},   {16*11,  0}, 1},
    {{0|(10<<4)},   {16*10,  0}, 1},
    {{0|(9<<4)},    {16*9,  0}, 1},
    {{0|(8<<4)},    {16*8,  0}, 1},
    {{0|(7<<4)},    {16*7,  0}, 1},
	{{0|(6<<4)},    {16*6,  0}, 1},
    {{0|(5<<4)},    {16*5,  0}, 1},
    {{0|(4<<4)},    {16*4,  0}, 1},
    {{0|(3<<4)},    {16*3,  0}, 1},
    {{0|(2<<4)},    {16*2,  0}, 1},
    {{0|(1<<4)},    {16*1,  0}, 1},
    {{0|(0<<4)},    {16*0,  0}, 1},

	{{1|(13<<4)},   {16*13.75, 16}, 1},
    {{1|(12<<4)},   {16*12.5,  16}, 0},
    {{1|(11<<4)},   {16*11.5,  16}, 0},
    {{1|(10<<4)},   {16*10.5,  16}, 0},
    {{1|(9<<4)},    { 16*9.5,  16}, 0},
    {{1|(8<<4)},    { 16*8.5,  16}, 0},
    {{1|(7<<4)},    { 16*7.5,  16}, 0},
	{{1|(6<<4)},    { 16*6.5,  16}, 0},
    {{1|(5<<4)},    { 16*5.5,  16}, 0},
    {{1|(4<<4)},    { 16*4.5,  16}, 0},
    {{1|(3<<4)},    { 16*3.5,  16}, 0},
    {{1|(2<<4)},    { 16*2.5,  16}, 0},
    {{1|(1<<4)},    { 16*1.5,  16}, 0},
    {{1|(0<<4)},    { 16*0.25,  16}, 1},

	{{2|(13<<4)},   {16*13.375,  24}, 1},
    {{2|(11<<4)},   {16*11.75,  32}, 0},
    {{2|(10<<4)},   {16*10.75,  32}, 0},
    {{2|(9<<4)},    {16*9.75,  32}, 0},
    {{2|(8<<4)},    {16*8.75,  32}, 0},
    {{2|(7<<4)},    {16*7.75,  32}, 0},
	{{2|(6<<4)},    { 16*6.75,  32}, 0},
    {{2|(5<<4)},    { 16*5.75,  32}, 0},
    {{2|(4<<4)},    { 16*4.75,  32}, 0},
    {{2|(3<<4)},    { 16*3.75,  32}, 0},
    {{2|(2<<4)},    { 16*2.75,  32}, 0},
    {{2|(1<<4)},    { 16*1.75,  32}, 0},
    {{2|(0<<4)},    { 16*0.375,  32}, 1},

    {{3|(11<<4)},   {16*13.125,  48}, 1},
    {{3|(10<<4)},   {16*11.25,  48}, 0},
    {{3|(9<<4)},    {16*10.25,  48}, 0},
    {{3|(8<<4)},    {16*9.25,  48}, 0},
    {{3|(7<<4)},    {16*8.25,  48}, 0},
	{{3|(6<<4)},    {16*7.25,  48}, 0},
    {{3|(5<<4)},    {16*6.25,  48}, 0},
    {{3|(4<<4)},    {16*5.25,  48}, 0},
    {{3|(3<<4)},    {16*4.25,  48}, 0},
    {{3|(2<<4)},    {16*3.25,  48}, 0},
    {{3|(1<<4)},    {16*1.25,  48}, 0},
    {{3|(0<<4)},    {16*0.625,  48}, 1},

	{{4|(13<<4)},   {16*13.875,  64}, 1},
    {{4|(11<<4)},   {16*12.625,  64}, 1},
    {{4|(10<<4)},   {16*11.375,  64}, 1},
    {{4|(9<<4)},    {16*10.125,  64}, 1},
    {{4|(5<<4)},    { 16*6.375,  64}, 0},
    {{4|(2<<4)},    { 16*2.625,  64}, 1},
    {{4|(1<<4)},    { 16*1.375,  64}, 1},
    {{4|(0<<4)},    { 16*0.125,  64}, 1}
};
#else

const is31_led g_is31_leds[DRIVER_LED_TOTAL] = {
/* Refer to IS31 manual for these locations
 *   driver
 *   |  R location
 *   |  |       G location
 *   |  |       |       B location
 *   |  |       |       | */
    {0, K_14,   J_14,   L_14},
    {0, K_13,   J_13,   L_13},
    {0, K_12,   J_12,   L_12},
    {0, K_11,   J_11,   L_11},
    {0, K_10,   J_10,   L_10},
    {0, K_9,    J_9,    L_9},
    {0, K_8,    J_8,    L_8},
    {0, K_7,    J_7,    L_7},
    {0, K_6,    J_6,    L_6},
    {0, K_5,    J_5,    L_5},
    {0, K_4,    J_4,    L_4},
    {0, K_3,    J_3,    L_3},
    {0, K_2,    J_2,    L_2},
    {0, K_1,    J_1,    L_1},

    {0, H_14,   G_14,   I_14},
    {0, H_13,   G_13,   I_13},
    {0, H_12,   G_12,   I_12},
    {0, H_11,   G_11,   I_11},
    {0, H_10,   G_10,   I_10},
    {0, H_9,    G_9,    I_9},
    {0, H_8,    G_8,    I_8},
    {0, H_7,    G_7,    I_7},
    {0, H_6,    G_6,    I_6},
    {0, H_5,    G_5,    I_5},
    {0, H_4,    G_4,    I_4},
    {0, H_3,    G_3,    I_3},
    {0, H_2,    G_2,    I_2},
    {0, H_1,    G_1,    I_1},

    {0, E_14,   D_14,   F_14},
    {0, E_12,   D_12,   F_12},
    {0, E_11,   D_11,   F_11},
    {0, E_10,   D_10,   F_10},
    {0, E_9,    D_9,    F_9},
    {0, E_8,    D_8,    F_8},
    {0, E_7,    D_7,    F_7},
    {0, E_6,    D_6,    F_6},
    {0, E_5,    D_5,    F_5},
    {0, E_4,    D_4,    F_4},
    {0, E_3,    D_3,    F_3},
    {0, E_2,    D_2,    F_2},
    {0, E_1,    D_1,    F_1},

    {0, B_14,   A_14,   C_14},
    {0, B_13,   A_13,   C_13},
    {0, B_11,   A_11,   C_11},
    {0, B_10,   A_10,   C_10},
    {0, B_9,    A_9,    C_9},
    {0, B_8,    A_8,    C_8},
    {0, B_7,    A_7,    C_7},
    {0, B_6,    A_6,    C_6},
    {0, B_5,    A_5,    C_5},
    {0, B_4,    A_4,    C_4},
    {0, B_3,    A_3,    C_3},
    {0, B_2,    A_2,    C_2},
    {0, B_1,    A_1,    C_1},

    {0, B_15,   A_15,   C_15},
    {0, E_13,   D_13,   F_13},
    {0, B_12,   A_12,   C_12},
    {0, E_15,   D_15,   F_15},
    {0, H_15,   G_15,   I_15},
    {0, B_16,   A_16,   C_16},
    {0, E_16,   D_16,   F_16},
    {0, H_16,   G_16,   I_16},
    {0, K_16,   J_16,   L_16}
};

const rgb_led g_rgb_leds[DRIVER_LED_TOTAL] = {
    {{0|(13<<4)},   {17.23*13,  0}, 1},
    {{0|(12<<4)},   {17.23*12,  0}, 1},
    {{0|(11<<4)},   {17.23*11,  0}, 1},
    {{0|(10<<4)},   {17.23*10,  0}, 1},
    {{0|(9<<4)},    {17.23*9,  0}, 1},
    {{0|(8<<4)},    {17.23*8,  0}, 1},
    {{0|(7<<4)},    {17.23*7,  0}, 1},
	{{0|(6<<4)},    { 17.23*6,  0}, 1},
    {{0|(5<<4)},    { 17.23*5,  0}, 1},
    {{0|(4<<4)},    { 17.23*4,  0}, 1},
    {{0|(3<<4)},    { 17.23*3,  0}, 1},
    {{0|(2<<4)},    { 17.23*2,  0}, 1},
    {{0|(1<<4)},    { 17.23*1,  0}, 1},
    {{0|(0<<4)},    { 17.23*0,  0}, 1},

	{{1|(13<<4)},   {17.23*13,  16}, 1},
    {{1|(12<<4)},   {17.23*12,  16}, 0},
    {{1|(11<<4)},   {17.23*11,  16}, 0},
    {{1|(10<<4)},   {17.23*10,  16}, 0},
    {{1|(9<<4)},    {17.23*9,  16}, 0},
    {{1|(8<<4)},    {17.23*8,  16}, 0},
    {{1|(7<<4)},    {17.23*7,  16}, 0},
	{{1|(6<<4)},    { 17.23*6,  16}, 0},
    {{1|(5<<4)},    { 17.23*5,  16}, 0},
    {{1|(4<<4)},    { 17.23*4,  16}, 0},
    {{1|(3<<4)},    { 17.23*3,  16}, 0},
    {{1|(2<<4)},    { 17.23*2,  16}, 0},
    {{1|(1<<4)},    { 17.23*1,  16}, 0},
    {{1|(0<<4)},    { 17.23*0,  16}, 1},

	{{2|(13<<4)},   {17.23*13,  32}, 1},
    {{2|(11<<4)},   {17.23*11,  32}, 0},
    {{2|(10<<4)},   {17.23*10,  32}, 0},
    {{2|(9<<4)},    {17.23*9,  32}, 0},
    {{2|(8<<4)},    {17.23*8,  32}, 0},
    {{2|(7<<4)},    {17.23*7,  32}, 0},
	{{2|(6<<4)},    { 17.23*6,  32}, 0},
    {{2|(5<<4)},    { 17.23*5,  32}, 0},
    {{2|(4<<4)},    { 17.23*4,  32}, 0},
    {{2|(3<<4)},    { 17.23*3,  32}, 0},
    {{2|(2<<4)},    { 17.23*2,  32}, 0},
    {{2|(1<<4)},    { 17.23*1,  32}, 0},
    {{2|(0<<4)},    { 17.23*0,  32}, 1},

	{{3|(13<<4)},   {17.23*13,  48}, 1},
    {{3|(11<<4)},   {17.23*11,  48}, 0},
    {{3|(10<<4)},   {17.23*10,  48}, 0},
    {{3|(9<<4)},    {17.23*9,  48}, 0},
    {{3|(8<<4)},    {17.23*8,  48}, 0},
    {{3|(7<<4)},    {17.23*7,  48}, 0},
	{{3|(6<<4)},    { 17.23*6,  48}, 0},
    {{3|(5<<4)},    { 17.23*5,  48}, 0},
    {{3|(4<<4)},    { 17.23*4,  48}, 0},
    {{3|(3<<4)},    { 17.23*3,  48}, 0},
    {{3|(2<<4)},    { 17.23*2,  48}, 0},
    {{3|(1<<4)},    { 17.23*1,  48}, 0},
    {{3|(0<<4)},    { 17.23*0,  48}, 1},

	{{4|(13<<4)},   {17.23*13,  64}, 1},
    {{4|(11<<4)},   {17.23*11,  64}, 1},
    {{4|(10<<4)},   {17.23*10,  64}, 1},
    {{4|(9<<4)},    {17.23*9,  64}, 1},
    {{4|(8<<4)},    {17.23*8,  64}, 1},
    {{4|(5<<4)},    { 17.23*5,  64}, 0},
    {{4|(2<<4)},    { 17.23*2,  64}, 1},
    {{4|(1<<4)},    { 17.23*1,  64}, 1},
    {{4|(0<<4)},    { 17.23*0,  64}, 1}

};
#endif

#endif // RGB_MATRIX_ENABLE

void matrix_init_kb(void) {
    matrix_init_user();
}


void matrix_scan_kb(void) {
    matrix_scan_user();
}


bool process_record_kb(uint16_t keycode, keyrecord_t *record) {
    return process_record_user(keycode, record);
}


void suspend_power_down_kb(void)
{
	#ifdef RGB_MATRIX_ENABLE
    rgb_matrix_set_suspend_state(true);
    #endif // RGB_MATRIX_ENABLE
}

void suspend_wakeup_init_kb(void)
{
	#ifdef RGB_MATRIX_ENABLE
    rgb_matrix_set_suspend_state(false);
    #endif // RGB_MATRIX_ENABLE
}
