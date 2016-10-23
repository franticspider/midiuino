#ifndef kick909_H_
#define kick909_H_
 
#include "Arduino.h"
#include <avr/pgmspace.h>
 
//#define kick909_NUM_CELLS 2048 (This was clicky...)
#define kick909_NUM_CELLS 1536
#define kick909_SAMPLERATE 32768 //16384
 
const char __attribute__((progmem)) kick909_DATA [] = {-1, 0, -1, 0, -1, 0, 0,
0, 0, 0, 0, 0, -1, 0, -1, 0, -1, 0, -1, 0, -1, 0, 0, -1, 0, -1, 0, 0, -1, 0, -1,
0, -1, 0, -1, 0, 0, -1, 0, -1, 0, 0, -1, -1, -2, -2, -3, -3, -2, -2, -2, -1, -1,
-1, -1, 0, 0, 1, 2, 3, 3, 4, 5, 5, 6, 6, 7, 7, 8, 8, 9, 9, 8, 9, 9, 10, 14, 17,
20, 24, 29, 50, 57, 49, 53, 54, 53, 53, 54, 53, 53, 53, 52, 51, 50, 48, 46, 45,
44, 42, 40, 38, 35, 33, 30, 26, 23, 19, 15, 12, 8, 5, 1, -2, -6, -9, -11, -13,
-16, -17, -18, -20, -22, -23, -24, -24, -25, -26, -27, -27, -27, -27, -28, -28,
-28, -28, -27, -27, -27, -26, -25, -24, -24, -23, -21, -20, -19, -17, -15, -13,
-12, -10, -8, -5, -3, -1, 1, 3, 6, 8, 10, 12, 14, 17, 19, 21, 24, 25, 28, 30,
32, 33, 35, 36, 37, 37, 38, 38, 39, 40, 40, 41, 41, 41, 41, 41, 41, 41, 41, 41,
40, 40, 39, 38, 38, 37, 37, 36, 36, 35, 34, 33, 32, 32, 30, 29, 28, 26, 24, 22,
20, 18, 17, 15, 13, 11, 9, 8, 6, 5, 3, 1, -1, -2, -4, -5, -7, -8, -9, -11, -13,
-14, -16, -17, -18, -19, -20, -21, -22, -24, -25, -25, -26, -27, -27, -28, -29,
-29, -30, -30, -30, -30, -31, -31, -31, -31, -31, -32, -31, -32, -32, -32, -32,
-32, -32, -32, -32, -32, -32, -32, -32, -31, -31, -31, -30, -30, -30, -29, -28,
-28, -27, -27, -26, -26, -25, -25, -24, -23, -22, -21, -20, -20, -19, -18, -17,
-16, -15, -14, -13, -11, -10, -9, -8, -7, -6, -5, -4, -3, -2, 0, 1, 2, 3, 4, 6,
6, 8, 9, 10, 11, 12, 12, 13, 15, 16, 17, 18, 19, 20, 21, 22, 23, 24, 26, 27, 27,
28, 29, 30, 30, 31, 32, 33, 33, 34, 34, 34, 34, 35, 35, 35, 36, 36, 36, 36, 36,
36, 37, 37, 37, 37, 37, 37, 37, 37, 37, 37, 37, 37, 37, 37, 37, 36, 36, 36, 36,
36, 35, 35, 35, 34, 34, 34, 33, 33, 32, 32, 32, 32, 31, 31, 30, 30, 29, 29, 28,
28, 27, 27, 26, 25, 25, 24, 23, 23, 21, 21, 20, 19, 18, 17, 16, 15, 14, 12, 11,
10, 9, 8, 7, 7, 6, 5, 4, 3, 2, 1, 0, -2, -3, -4, -4, -5, -6, -7, -8, -8, -9,
-10, -11, -12, -12, -13, -14, -15, -16, -16, -17, -18, -19, -20, -20, -21, -22,
-23, -23, -24, -25, -25, -26, -26, -27, -27, -28, -29, -29, -29, -30, -30, -31,
-31, -32, -32, -32, -32, -33, -33, -33, -33, -33, -33, -34, -34, -34, -34, -34,
-34, -34, -34, -34, -34, -34, -34, -34, -35, -35, -35, -35, -35, -35, -35, -35,
-35, -35, -35, -35, -34, -34, -34, -34, -33, -33, -33, -33, -33, -32, -32, -32,
-32, -31, -31, -31, -31, -31, -30, -30, -30, -29, -29, -29, -28, -28, -28, -27,
-27, -26, -26, -25, -25, -24, -24, -23, -23, -22, -21, -21, -20, -19, -19, -18,
-17, -17, -16, -15, -14, -14, -13, -12, -12, -11, -10, -9, -9, -8, -7, -6, -5,
-5, -4, -3, -2, -1, -1, 0, 1, 2, 3, 3, 4, 5, 6, 7, 7, 8, 9, 10, 11, 12, 12, 13,
14, 15, 16, 16, 17, 18, 19, 20, 20, 21, 22, 23, 24, 24, 25, 26, 26, 27, 28, 28,
29, 29, 30, 30, 31, 31, 31, 32, 32, 32, 32, 33, 33, 32, 33, 33, 34, 34, 34, 34,
34, 34, 34, 34, 34, 34, 34, 35, 35, 35, 35, 35, 35, 35, 35, 35, 35, 35, 35, 35,
35, 35, 35, 35, 35, 35, 35, 35, 35, 34, 34, 34, 34, 33, 33, 32, 33, 33, 32, 32,
32, 31, 31, 31, 31, 30, 30, 30, 29, 29, 29, 28, 28, 28, 27, 27, 26, 26, 26, 25,
25, 24, 24, 23, 22, 22, 21, 20, 20, 19, 18, 17, 17, 16, 15, 14, 13, 12, 11, 11,
10, 9, 8, 7, 6, 5, 4, 4, 3, 2, 1, 0, -1, -1, -2, -3, -4, -5, -5, -6, -7, -8, -9,
-9, -10, -11, -12, -12, -13, -14, -14, -15, -16, -17, -17, -18, -19, -19, -20,
-21, -21, -22, -23, -23, -24, -24, -25, -26, -26, -27, -27, -28, -28, -29, -30,
-30, -30, -31, -31, -32, -32, -32, -33, -33, -33, -34, -34, -34, -34, -34, -35,
-35, -35, -35, -35, -35, -35, -35, -36, -36, -36, -36, -36, -36, -36, -36, -36,
-36, -36, -36, -36, -36, -36, -36, -36, -36, -36, -36, -36, -36, -36, -36, -36,
-35, -35, -35, -35, -35, -34, -34, -34, -34, -34, -33, -33, -33, -33, -32, -32,
-32, -32, -31, -31, -31, -31, -30, -30, -30, -29, -29, -29, -28, -28, -27, -27,
-26, -26, -26, -25, -24, -24, -23, -23, -22, -21, -21, -20, -19, -19, -18, -17,
-17, -16, -15, -15, -14, -13, -12, -12, -11, -10, -9, -9, -8, -7, -6, -6, -5,
-4, -3, -3, -2, -1, 0, 0, 1, 2, 3, 4, 4, 5, 6, 7, 7, 8, 9, 10, 11, 11, 12, 13,
14, 15, 15, 16, 17, 18, 19, 19, 20, 21, 22, 22, 23, 24, 25, 25, 26, 26, 27, 28,
28, 29, 29, 29, 30, 30, 30, 31, 31, 31, 31, 32, 32, 32, 32, 32, 32, 33, 33, 32,
33, 33, 34, 33, 33, 32, 34, 34, 34, 34, 34, 34, 34, 34, 34, 34, 34, 34, 34, 34,
34, 34, 34, 34, 34, 34, 34, 34, 34, 34, 33, 33, 32, 33, 33, 32, 32, 32, 32, 31,
31, 31, 31, 30, 30, 30, 29, 29, 29, 29, 28, 28, 28, 27, 27, 26, 26, 26, 25, 25,
24, 24, 23, 23, 22, 22, 21, 20, 20, 19, 18, 18, 17, 16, 15, 14, 13, 12, 12, 11,
10, 9, 8, 7, 6, 5, 4, 3, 2, 1, 1, 0, -1, -2, -3, -3, -4, -5, -6, -7, -7, -8, -9,
-10, -10, -11, -12, -12, -13, -14, -14, -15, -15, -16, -17, -17, -18, -18, -19,
-19, -20, -20, -21, -21, -22, -22, -23, -23, -24, -24, -25, -25, -25, -26, -26,
-27, -27, -27, -27, -28, -28, -28, -28, -29, -29, -29, -29, -29, -29, -29, -29,
-29, -29, -29, -30, -30, -30, -30, -30, -29, -29, -29, -29, -29, -29, -29, -29,
-29, -29, -29, -29, -29, -29, -29, -29, -29, -28, -28, -28, -28, -28, -28, -28,
-28, -27, -27, -27, -27, -27, -26, -26, -26, -26, -26, -25, -25, -25, -25, -25,
-24, -24, -24, -24, -23, -23, -23, -23, -23, -22, -22, -22, -21, -21, -21, -21,
-20, -20, -20, -19, -19, -19, -18, -18, -18, -17, -17, -17, -16, -16, -15, -15,
-15, -14, -14, -13, -13, -13, -12, -12, -12, -11, -11, -10, -10, -10, -9, -9,
-8, -8, -8, -7, -7, -7, -6, -6, -5, -5, -5, -4, -4, -4, -3, -3, -3, -2, -2, -1,
-1, -1, 0, 0, 0, 1, 1, 1, 2, 2, 2, 3, 3, 3, 4, 4, 4, 4, 5, 5, 5, 6, 6, 6, 6, 6,
7, 7, 7, 7, 7, 7, 7, 7, 7, 7, 7, 8, 8, 8, 8, 8, 8, 8, 8, 8, 8, 8, 8, 8, 8, 8, 8,
7, 7, 7, 7, 7, 7, 7, 7, 7, 7, 7, 7, 7, 7, 7, 7, 7, 7, 7, 7, 7, 6, 6, 6, 6, 6, 6,
6, 6, 5, 5, 5, 5, 5, 5, 5, 5, 4, 4, 4, 4, 4, 4, 4, 3, 3, 3, 3, 3, 3, 2, 2, 2, 2,
2, 2, 1, 1, 1, 1, 1, 0, 0, 0, 0, -1, -1, -1, -1, -2, -2, -2, -2, -3, -3, -3, -3,
-4, -4, -4, -4, -4, -5, -5, -5, -5, -6, -6, -6, -6, -6, -6, -7, -7, -7, -7, -7,
-8, -8, -8, -8, -8, -8, -8, -9, -9, -9, -9, -9, -9, -9, -9, -10, -10, -10, -10,
-10, -10, -10, -10, -10, -11, -11, -11, -11, -11, -11, -11, -11, -11, -11, -11,
-11, -11, -11, -11, -11, -11, -11, -11, -12, -11, -11, -11, -11, -11, -11, -11,
-11, -11, -11, -11, -11, -11, -11, -11, -11, -11, -11, -11, -11, -11, -11, -11,
-11, -11, -11, -11, -11, -11, -11, -11, -11, -11, -11, -11, -11, -11, -10, -10,
-10, -10, -10, -10, -10, -10, -10, -10, -10, -10, -10, -10, -10, -10, -9, -9,
-9, -9, -9, -9, -9, -9, -9, -9, -9, -9, -9, -9, -9, -8, -8, -8, -8, -8, -8, -8,
-8, -8, -8, -8, -7, -7, -7, -7, -7, -7, -7, -7, -7, -7, -6, -6, -6, -6, -6, -6,
-6, -6, -6, -6, -6, -5, -5, -5, -5, -5, -5, -5, -5, -5, -5, -5, -4, -4, -4, -4,
-4, -4, -4, -4, -4, -4, -4, -4, -3, -3, -3, -3, -3, -3, -3, -3, -3, -3, -3, -3,
-3, -3, -2, -2, -2, -2, -2, -2, -2, -2, -2, -2, -2, -2, -2, -2, -2, -2, -2, -2,
-2, -2, -2, -2, -2, -2, -2, -2, -2, -2, -2, -2, -2, -2, -2, -2, -2, -2, -2, -2,
-2, -2, -2, -2, -2, -2, -2, -2, -2, -2, -2, -2, -2, -2, -2, -2, -2, -2, -2, -2,
-2, -2, -2, -2, -2, -2, -2, -2, -2, -2, -2, -2, -2, -2, -2, -2, -2, -2, -2, -2,
-2, -2, -2, -2, -3, -3, -3, -3, -3, -3, -3, -3, -3, -3, -3, -3, -3, -3, -3, -3,
-3, -3, -3, -3, -3, -3, -3, -3, -3, -3, -3, -3, -3, -4, -4, -4, -4, -4, -4, -4,
-4, -4, -4, -4, -4, -4, -4, -4, -4, -4, -4, -4, -4, -4, -4, -4, -4, -4, -4, -4,
-4, -4, -4, -4, -4, -4, -4, -4, -4, -4, -4, -4, -4, -4, -4, -4, -4, -4, -4, -4,
-4, -4, -4, -4, -4, -4, -4, -4, -4, -4, -4, -4, -4, -4, -4, -4, -4, -4, -4, -4,
-4, -4, -4, -4, -4, -4, -4, -4, -4, -4, -4, -4, -4, -4, -4, -4, -4, -4, -4, -4,
-4, -4, -4, -4, -4, -4, -4, -4, -4, -4, -4, -4, -4, -4, -4, -4, -4, -4, -4, -4,
-4, -4, -4, -4, -4, -4, -4, -4, -4, -4, -4, -4, -4, -4, -4, -4, -4, -4, -4, -4,
-3, -3, -3, -3, -3, -3, -3, -3, -3, -3, -3, -3, -3, -3, -3, -3, -3, -3, -3, -3,
-3, -3, -3, -3, -3, -3, -3, -3, -3, -3, -3, -3, -3, -3, -3, -3, -3, -3, -3, -3,
-3, -3, -3, -3, -3, -3, -3, -3, -3, -3, -3, -3, -3, -3, -3, -3, -3, -3, -3, -3,
-3, -3, -3, -3, -3, -3, -3, -3, -3, -3, -3, -3, -3, -3, -3, -3, -3, -3, -3, -3,
-3, -3, -3, -3, -3, -3, -3, -3, -3, -3, -3, -3, -3, -3, -3, -3, -3, -3, -3, -2,
-3, -2, -3, -2, -3, -2, -2, -2, -2, -2, -2, -2, -2, -2, -2, -2, -2, -2, -2, -2,
-2, -2, -2, -2, -2, -2, -2, -2, -2, -2, -2, -2, -2, -2, -2, -2, -2, -2, -2, -2,
-2, -2, -2, -2, -2, -2, -2, -2, -2, -2, -2, -2, -2, -2, -2, -2, -2, -2, -2, -2,
-2, -2, -2, -2, -2, -2, -2, -2, -2, -2, -2, -2, -2, -2, -2, -2, -2, -2, -2, -2,
-2, -2, -2, -2, -2, -2, -2, -2, -2, -2, -2, -2, -2, -2, -2, -2, -2, -2, -2, -2,
-2, -2, -2, -2, -2, -2, -2, -2, -2, -2, -2, -2, -2, -2, -2, -2, -2, -2, -2, -2,
-2, -2, -2, -2, -2, -2, -2, -2, -2, -2, -2, -2, -2, -2, -2, -2, -2, -2, -2, -2,
-2, -2, -2, -2, -2, -2, -2, -2, -2, -2, -2, -2, -2, -2, -2, -2, -2, -2, -2, -2,
-2, -2, -2, -2, -2, -2, -2, -2, -2, -2, -2 };
 
 #endif /* kick909_H_ */
