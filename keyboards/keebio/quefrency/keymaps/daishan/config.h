/*
This is the c configuration file for the keymap

Copyright 2012 Jun Wako <wakojun@gmail.com>
Copyright 2015 Jack Humbert
Copyright 2018 Danny Nguyen <danny@keeb.io>

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

/* Use I2C or Serial, not both */

//#define USE_SERIAL
 #define USE_I2C


/* When using I2C without this the slave half is unresponsive after leaving
 * the computer for a while, probably triggered by a USB suspend.
 *
 * NO_USB_STARTUP_CHECK appears to resolve the issue.
 *
 * (Without this and with serial both halves are unresponsive, but I didn't
 * test if this option helps in that case as well.)
 */
#define NO_USB_STARTUP_CHECK
