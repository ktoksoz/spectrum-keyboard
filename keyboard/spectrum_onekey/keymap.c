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
#include <stdint.h>
#include <stdbool.h>
#include "keycode.h"
#include "action.h"
#include "action_macro.h"
#include "report.h"
#include "host.h"
#include "print.h"
#include "debug.h"
#include "keymap.h"


const uint8_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
    {
        {KC_V,      KC_G,       KC_B,       KC_T,       KC_5,       KC_H,  KC_Y,    KC_G   },
        {KC_C,      KC_F,       KC_N,       KC_R,       KC_4,       KC_J,  KC_U,    KC_7   },
        {KC_X,      KC_D,       KC_M,       KC_E,       KC_3,       KC_K,  KC_I,    KC_8   },
        {KC_Z,      KC_S,       KC_LCTL,    KC_W,       KC_2,       KC_L,  KC_O,    KC_9   },
        {KC_LSFT,   KC_A,       KC_SPACE,   KC_Q,       KC_1,       KC_ENTER,   KC_P,    KC_0}
    },
};

/*
 * Fn action definition
 */
const action_t PROGMEM fn_actions[] = {
};
