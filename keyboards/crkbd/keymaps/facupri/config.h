/*
This is the c configuration file for the keymap

Copyright 2012 Jun Wako <wakojun@gmail.com>
Copyright 2015 Jack Humbert

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

#pragma once

/* Select hand configuration */
#define MASTER_LEFT
// #define MASTER_RIGHT
// #define EE_HANDS

//#define TAPPING_FORCE_HOLD
#define TAPPING_TERM 200
#define TAPPING_TOGGLE 2
// #define TAPPING_TERM_PER_KEY

#define MOUSEKEY_DELAY                              300
#define MOUSEKEY_INTERVAL                           50
#define MOUSEKEY_MAX_SPEED                          10
#define MOUSEKEY_TIME_TO_MAX                        20
#define MOUSEKEY_WHEEL_MAX_SPEED                    8
#define MOUSEKEY_WHEEL_MAX_TIME_TO_MAX              40

#undef USE_I2C
#undef SSD1306OLED
#define USE_SERIAL_PD2

#define OLED_FONT_H "keyboards/crkbd/keymaps/facupri/glcdfont.c"
