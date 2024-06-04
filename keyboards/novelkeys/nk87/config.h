/*
Copyright 2020 Yiancar

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

// Set up IS31FL3733 I2C LED Drivers for RGB Matrix
#define DRIVER_COUNT 2
#define DRIVER_ADDR_1 0b1010000      //IS31FL3733_I2C_ADDRESS_GND_GND
#define DRIVER_ADDR_2 0b1010010      //IS31FL3733_I2C_ADDRESS_GND_SDA
#define DRIVER_1_LED_TOTAL 64
#define DRIVER_2_LED_TOTAL 64
#define DRIVER_LED_TOTAL 128
#define ISSI_SWPULLUP PUR_05KR
#define ISSI_CSPULLUP PUR_05KR

// Define RGB matrix size
//#define MATRIX_ROWS 6
//#define MATRIX_COLS 18
//#define RGB_MATRIX_LED_COUNT 87

