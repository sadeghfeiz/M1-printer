/**
 * Marlin 3D Printer Firmware
 * Copyright (c) 2019 MarlinFirmware [https://github.com/MarlinFirmware/Marlin]
 *
 * Based on Sprinter and grbl.
 * Copyright (c) 2011 Camiel Gubbels / Erik van der Zalm
 *
 * This program is free software: you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation, either version 3 of the License, or
 * (at your option) any later version.
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with this program.  If not, see <http://www.gnu.org/licenses/>.
 *
 */
#pragma once

// R25 = 100 kOhm, beta25 = 4092 K, 4.7 kOhm pull-up, bed thermistor
const short temptable_1[][2] PROGMEM = {
  { OV(  23), 280 },
  { OV(  25), 276 },
  { OV(  27), 272 },
  { OV(  28), 269 },
  { OV(  31), 264 },
  { OV(  33), 260 },
  { OV(  35), 256 },
  { OV(  38), 252 },
  { OV(  41), 248 },
  { OV(  44), 243 },
  { OV(  48), 239 },
  { OV(  52), 234 },
  { OV(  56), 230 },
  { OV(  61), 226 },
  { OV(  66), 222 },
  { OV(  71), 218 },
  { OV(  78), 213 },
  { OV(  84), 209 },
  { OV(  92), 204 },
  { OV( 100), 200 },
  { OV( 109), 196 },
  { OV( 120), 192 },
  { OV( 131), 187 },
  { OV( 143), 183 },
  { OV( 156), 178 },
  { OV( 171), 173 },
  { OV( 187), 168 },
  { OV( 205), 164 },
  { OV( 224), 159 },
  { OV( 245), 154 },
  { OV( 268), 149 },
  { OV( 293), 144 },
  { OV( 320), 139 },
  { OV( 348), 134 },
  { OV( 379), 129 },
  { OV( 411), 124 },
  { OV( 445), 119 },
  { OV( 480), 114 },
  { OV( 516), 109 },
  { OV( 553), 104 },
  { OV( 591), 99 },
  { OV( 628),  94 },
  { OV( 665),  89 },
  { OV( 703),  85 },
  { OV( 734),  80 },
  { OV( 770),  74 },
  { OV( 799),  70 },
  { OV( 830),  65 },
  { OV( 857),  60 },
  { OV( 881),  55 },
  { OV( 903),  50 },
  { OV( 922),  46 },
  { OV( 939),  41 },
  { OV( 954),  35 },
  { OV( 966),  31 },
  { OV( 977),  25 },
  { OV( 985),  19 },
  { OV( 993),  15 },
  { OV( 999),  10 },
  { OV(1004),   5 },
  { OV(1008),   0 },
  { OV(1012),  -5 },
  { OV(1016), -10 },
  { OV(1020), -15 }
};
