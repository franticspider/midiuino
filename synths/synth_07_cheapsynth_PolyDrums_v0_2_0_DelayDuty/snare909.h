#ifndef snare909_H_
#define snare909_H_
 
#include "Arduino.h"
#include <avr/pgmspace.h>
 
#define snare909_NUM_CELLS 2048
#define snare909_SAMPLERATE 16384
 
const int8_t __attribute__((progmem)) snare909_DATA [] = {0, -1, 0, -1, 0, -1, 0,
-1, 0, -1, 0, -1, 0, 0, -1, 0, -1, 0, -1, 0, -1, 0, -1, 0, -1, 0, -1, 0, -1, 0,
-1, 0, 0, -2, -2, 0, -2, -1, -3, -2, 4, -3, -7, -2, 1, -7, 6, -3, -2, -6, -8, 8,
-6, 0, -3, -1, -7, 0, -4, -11, -2, 3, -7, -9, 19, -1, 33, 43, 22, 60, 57, 49,
58, 55, 68, 65, 62, 60, 60, 69, 64, 61, 57, 58, 43, 50, 39, 37, 27, 17, 21, 15,
11, -2, -6, -12, -6, -23, -7, -22, -30, -22, -25, -27, -26, -31, -31, -21, -18,
-8, -18, -4, 3, 1, 8, 12, 12, 19, 14, 42, 28, 21, 43, 45, 49, 46, 46, 43, 55,
44, 47, 44, 30, 46, 34, 38, 42, 24, 34, 27, 45, 23, 28, 38, 35, 36, 23, 30, 28,
40, 23, 32, 35, 29, 31, 31, 30, 28, 30, 30, 12, 13, 18, 8, 7, -2, 5, 6, -1, -7,
-5, -9, -10, -11, -13, -17, -22, -25, -24, -24, -33, -28, -24, -30, -20, -28,
-41, -28, -29, -26, -27, -37, -26, -29, -32, -20, -31, -26, -15, -20, -9, -14,
-15, -12, -6, -7, -3, 8, 6, 15, 16, 12, 21, 30, 25, 35, 35, 29, 46, 44, 38, 49,
34, 48, 44, 44, 55, 38, 50, 41, 52, 43, 43, 53, 44, 56, 46, 39, 41, 44, 42, 42,
44, 41, 43, 35, 38, 39, 26, 30, 36, 31, 27, 26, 21, 20, 15, 9, 8, -2, 0, 10,
-10, -13, -3, -17, -14, -14, -18, -7, -30, -24, -32, -26, -28, -37, -23, -35,
-25, -40, -31, -34, -46, -30, -42, -38, -26, -37, -33, -32, -27, -32, -23, -23,
-20, -13, -11, -10, -18, 0, -13, -3, -8, 3, -6, 4, 19, -1, 12, 14, 19, 10, 13,
9, 20, 19, 21, 23, 21, 34, 21, 24, 34, 20, 31, 28, 31, 36, 24, 33, 23, 31, 27,
30, 35, 37, 26, 17, 21, 19, 27, 21, 24, 17, 23, 19, 24, 19, 4, 23, 7, 15, 17,
14, 24, 8, 15, 10, 5, 6, 11, 12, -5, 9, 9, 10, 9, 1, 5, 0, -2, -2, 1, 1, -7, 0,
3, -2, -2, -8, -8, -19, -4, -18, -6, -4, -11, -5, -15, -1, -28, -12, -19, -10,
-15, -23, -19, -23, -9, -25, -22, -21, -22, -18, -23, -18, -16, -31, -28, -23,
-20, -27, -15, -26, -23, -22, -23, -16, -22, -29, -20, -11, -29, -12, -17, -14,
-15, -12, -16, -22, -21, -8, -11, -16, -8, -13, -12, -8, -15, -14, -9, -14, -2,
-13, 3, -9, -12, 9, 3, 0, 7, -3, 0, 9, 2, 9, 7, 5, 4, 18, 12, 3, 14, 17, 16, 19,
14, 6, 21, 24, 23, 18, 24, 18, 11, 25, 25, 20, 24, 22, 5, 27, 20, 13, 25, 28,
17, 19, 11, 14, 24, 10, 23, 10, 23, 19, 16, 9, 14, 9, 14, 17, 6, 13, 8, 11, -1,
17, 9, 0, 6, 4, -1, 3, -12, -10, -4, -12, -9, -14, -5, -24, -11, -14, -21, -16,
-13, -18, -30, -17, -29, -25, -21, -21, -29, -30, -15, -34, -30, -21, -29, -25,
-26, -28, -36, -27, -30, -28, -25, -21, -11, -31, -18, -21, -12, -12, -12, -13,
-17, -15, -17, 0, -21, -9, 3, -3, -1, -7, 2, -3, 3, 3, -9, 13, 8, 5, -3, 9, 13,
3, 18, 6, 13, 13, 15, 12, 7, 10, 14, 12, 11, 3, 12, 15, 17, 6, 7, 26, -1, 16,
19, 8, 16, 12, 15, 1, 10, 20, 7, 7, 8, 17, 1, 3, 12, 8, 7, 10, 9, -4, 1, -3, 5,
1, 0, 1, 4, 3, -6, 1, -2, -2, -10, -7, -1, -3, -4, -19, 0, -10, -13, -4, -15,
-8, -4, -13, -24, -10, -8, -13, -10, -11, -24, -14, -18, -6, -9, -24, -20, -10,
-12, -18, -11, -14, -13, -18, -17, -28, -8, -27, -20, -14, -15, -11, -18, -9,
-16, -15, -17, -16, -6, -13, -17, 3, -25, -1, -11, -4, -6, -8, -5, -14, 0, -11,
5, -3, 0, 0, -1, -12, 0, -2, -5, 6, 5, 4, 4, -11, 2, 3, -4, 12, 1, 5, -2, 3, -3,
0, 2, 6, 7, -7, 2, 1, 6, 5, -2, 0, 2, 1, 9, 1, 9, -5, -6, 7, -2, 5, -3, 16, -1,
1, 2, 4, 10, -3, 17, -2, 6, 7, 2, 9, -2, 1, -6, 10, -5, -1, 3, -8, 11, -6, 7,
-1, -7, 2, -3, -6, 1, -3, -11, -3, -3, -7, -12, -4, -7, -10, -9, -18, -6, -11,
-20, -3, -12, -6, -10, -24, -9, -16, -18, -9, -18, -20, -11, -9, -15, -24, -10,
-20, -27, -13, -14, -13, -19, -18, -23, -21, -17, -14, -22, -15, -21, -19, -14,
-19, -11, -15, -15, -17, -17, -18, -12, -12, -12, -8, -10, -17, -9, -14, -3, -5,
-10, -9, -10, -8, -10, 7, -5, -3, 0, -2, 3, -3, 6, -6, -7, -1, 3, 5, 1, 4, -12,
8, 5, -1, 11, 6, -4, 3, 6, -1, 10, 1, 7, 2, 7, 6, -6, 2, 3, 3, 1, 6, 0, -3, 5,
5, 7, 1, -3, -2, -2, 6, 2, -3, 0, 3, 4, -4, 2, -5, -1, -2, -4, 0, -8, -8, -5, 2,
-9, -6, -1, -2, -9, -6, -12, 1, -10, -14, -9, -13, -10, -10, -9, -10, -7, -17,
-3, -13, -7, -12, -15, -16, -10, -9, -16, -7, -11, -11, -13, -14, -9, -11, -16,
-17, -12, -10, -16, -10, -11, -14, -4, -14, -17, -7, -12, -6, -16, -2, -7, -9,
-10, -9, -5, -18, 1, -8, 0, 1, -9, -16, -4, -3, -6, 4, -9, -2, -10, 0, 1, -10,
3, -1, -3, -2, -4, 0, 3, -3, 0, -1, 0, 2, -4, 2, -3, -8, 0, -5, 5, -7, -4, 3,
-9, 6, -10, 5, 1, -4, 2, -8, 2, -6, 2, -1, 2, -2, -6, 1, -6, -5, -3, 7, -8, -5,
2, -7, -1, -8, 3, 0, 0, 1, -6, -3, -5, -3, -3, -9, -6, 1, -7, -5, -3, -3, -6,
-11, -5, -1, -8, -15, -1, -8, -8, 0, -13, -9, 0, -14, -10, -9, -9, -11, -3, -11,
-14, -7, -5, -4, -12, -18, -16, -2, -19, -7, -13, -5, -12, -10, -6, -23, -4,
-10, -11, -8, -10, -14, -12, -5, -14, -13, -3, -8, -16, -10, -8, -15, -6, -13,
-10, -11, -8, -6, -12, -9, -8, -10, -10, -8, -4, -13, -5, -6, -11, 2, -14, -2,
-6, -7, -1, -11, 1, -4, -9, 3, -3, 2, -8, -1, -2, -7, -1, 0, 4, -3, 3, -7, 2,
-3, -1, 1, -3, -2, -1, 7, -4, 1, -2, -2, -4, -3, 8, -9, 1, -1, -3, 4, -6, 3, 3,
0, -1, -5, -7, -2, 1, -4, 3, 0, -9, 0, -4, 4, -5, -4, 1, -3, -4, -5, -3, -7, -8,
-7, 2, -9, -8, -2, -7, -3, -10, -6, -4, -12, -6, -10, -7, -10, -10, -5, -11, -3,
-7, -13, -10, -8, -6, -15, -7, -7, -11, -9, -11, -8, -10, -11, -8, -6, -12, -8,
-10, -8, -6, -10, -7, -8, -7, -8, -11, -3, -4, -5, -6, -12, -8, -6, -6, -3, -6,
-6, -6, -2, 1, -12, -5, -4, -6, -1, -1, -7, -5, -4, -3, 1, -6, 2, -6, 0, -5, -9,
4, -7, -2, 2, -3, 1, -3, -4, -4, -1, -2, -4, 3, -5, -2, -3, -4, -1, -4, 1, -1,
-10, 1, 0, -9, 2, -3, -6, -2, 6, -5, -6, -2, -3, -3, -4, -4, -6, -1, -5, -6, -1,
-2, -9, -1, -2, -5, -3, 0, -5, -7, -5, -8, -1, -7, -6, -4, -2, -6, -7, -7, -8,
-5, 0, -4, -12, -4, -10, -3, -4, -11, -3, -6, -6, -6, -9, -7, -9, -7, -5, -7,
-2, -10, -10, -3, -10, -5, -7, -10, -6, -12, -6, -9, -4, -7, -8, -5, -12, -6,
-5, -4, -9, -4, -7, -5, -5, -8, -7, -7, -9, -7, -5, -11, -3, -6, -3, -5, -8, -4,
-3, -6, -8, -6, -5, -4, -5, -6, -2, -6, -6, -2, -5, -3, -4, -5, -7, -3, -2, -2,
-2, -9, 1, -3, -8, 0, -3, 0, -5, -3, -2, -1, 0, -3, -3, -4, 1, -2, -8, 3, -1,
-5, 1, 0, -3, -4, -4, -1, 0, -3, 2, -6, -1, -3, -6, 2, -4, -3, -3, -1, -1, -5,
-3, 0, 0, -6, -1, -4, -5, -3, 0, -1, -4, -8, -4, 0, -9, 0, -4, -5, -4, -1, -5,
-6, -4, -6, -3, -6, -6, -9, -4, -4, -7, -4, -3, -10, -6, -6, -5, -5, -8, -5, -9,
-5, -6, -5, -6, -9, -8, -4, -5, -10, -3, -7, -6, -6, -4, -6, -9, -4, -6, -2, -7,
-2, -3, -7, -4, -7, -3, -5, -3, -4, -7, -4, -3, -3, -2, -1, -5, -4, -3, -4, -3,
-3, -2, -3, -1, -3, -7, 0, -3, 2, -1, -5, -3, -1, -3, -5, 1, -8, 2, -5, 0, -1,
-6, -1, -2, 2, -5, -1, -1, -2, -2, -1, -6, 0, -5, -2, 0, -5, -2, -4, 1, -5, -4,
-2, 0, -5, -3, 0, -5, -1, -2, -3, -3, -4, -2, -3, -3, -5, -4, -2, -6, -3, -6,
-4, -3, -6, -3, -2, -5, -5, -5, -4, -5, -3, -3, -8, -2, -6, -3, -4, -9, -1, -8,
-4, -4, -7, -2, -6, -3, -5, -4, -3, -5, -3, -8, -4, -8, -5, -3, -8, -1, -7, -2,
-4, -6, -5, -3, -4, -3, -4, -4, -1, -5, -2, -5, -2, -3, -4, -3, -5, -2, -4, -1,
-4, -4, -1, -3, -1, -4, -4, -3, -2, -3, -1, -3, -5, -2, -1, -3, -2, 0, -4, -2,
-3, -4, -2, -3, -2, -2, -1, -3, -4, -2, -3, -2, -3, 0, -5, -2, -1, -3, -1, -2,
-1, -5, -2, -1, -2, -2, -2, -1, -2, -2, -3, -2, -4, -2, -1, -3, -2, -2, -2, -2,
-1, -4, -4, -1, -3, -2, -1, -6, -1, -4, -4, -2, -5, -1, -4, -1, -4, -4, -2, -3,
-4, -2, -4, -4, -3, -4, -1, -5, -5, -3, -3, -4, -4, -5, -3, -3, -6, -4, -4, -3,
-4, -4, -3, -4, -3, -5, -5, -4, -6, -2, -6, -3, -4, -4, -3, -5, -2, -5, -5, -3,
-3, -4, -4, -4, -2, -3, -4, -4, -4, -2, -3, -3, -3, -3, -3, -2, -2, -4, -1, -2,
-3, -1, -3, -1, -2, -3, -3, -1, -4, -3, -1, -2, -2, -1, -2, -2, -2, -3, -1, -2,
-1, -1, -3, -2, -1, -2, -2, -2, -1, -1, -1, -2, -2, -1, -2, -1, -2, -2, -1, -2,
-2, -2, -1, -2, -2, -1, -2, -2, -1, -2, -2, -2, -2, -1, -2, -3, -2, -2, -2, -2,
-2, -2, -2, -2, -3, -3, -2, -2, -3, -2, -3, -3, -3, -3, -2, -3, -2, -3, -3, -3,
-3, -2, -3, -3, -3, -3, -3, -3, -3, -3, -3, -3, -3, -3, -3, -3, -2, -3, -3, -3,
-3, -3, -3, -3, -3, -3, -2, -3, -3, -2, -3, -2, -2, -2, -2, -2, -3, -2, -2, -3,
-2, -2, -2, -2, -2, -2, -2, -2, -2, -2, -2, -2, -2, -2, -2, -2, -2, -2, -2, -2,
-1, -2, -2, -2, -2, -1, -2, -1, -1, -2, -2, -1, -2, -1, -2, -2, -2, -2, -1, -2,
-2, -2, -2, -1, -1, -2, -1, -2, -1, -2, -2, -1, -1, -1, -2, -1, -2, -1, -2, -1,
-1, -2, -1, -1, -1, -1, -1, -1, -2, -1, -2, -2, -2, -2, -2, -2, -2, -2, -2, -2,
-2, -2, -2, -2, -2, -2, -2, -2, -2, -2, -2, -2, -2, -2, -2, -2, -2, -2, -2, -2,
-2, -2, -2, -2, -2, -2, -2, -2, -2, -2, -2, -2, -2, -2, -2, -2, -2, -2, -2, -2,
-2, -2, -2, -2, -2, -2, -2, -2, -2, -2, -2, -2, -2, -2, -2, -2, -2, -2, -2, -2,
-2, -2, -2, -2, -2, -2, -2, -2, -2, -1, -1, -1, -1, -1, };
 
 #endif /* snare909_H_ */
