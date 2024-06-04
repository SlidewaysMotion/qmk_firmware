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

#define IS31FL3733_I2C_ADDRESS_1 IS31FL3733_I2C_ADDRESS_GND_GND  //0b1010000
#define IS31FL3733_I2C_ADDRESS_2 IS31FL3733_I2C_ADDRESS_GND_SDA  //0b1010010  
#define IS31FL3733_PWM_FREQUENCY IS31FL3733_PWM_FREQUENCY_26K7_HZ

#define ISSI_SWPULLUP PUR_05KR
#define ISSI_CSPULLUP PUR_05KR

