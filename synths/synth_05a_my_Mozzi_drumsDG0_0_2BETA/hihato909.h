#ifndef hihato_H_
#define hihato_H_
 
#include "Arduino.h"
#include <avr/pgmspace.h>
 
#define hihato909_NUM_CELLS 2048
#define hihato909_SAMPLERATE 32768 //16384
 
const char __attribute__((progmem)) hihato909_DATA [] = {0, -1, 0, -1, 0, -1, 0,
-1, 0, -1, 0, -1, 0, -1, 0, -1, 0, 0, -2, 4, -4, -1, 3, 1, -8, 7, -2, -9, 3, -1,
1, -3, 0, -2, 4, -3, -4, -1, -3, 3, -2, -5, -1, 2, -1, -3, -1, 4, -2, 4, -3, -2,
4, -1, 6, 0, 8, -5, -5, 2, -2, 2, -2, -2, 7, -4, 6, -11, -6, 11, -6, 1, 4, 0,
-14, 11, -6, -1, -2, -8, 5, -13, 1, 0, -8, 2, 7, 3, 1, -8, 5, 2, 2, -2, -8, 11,
-1, 0, 2, -1, -3, 2, -3, -9, 2, -4, 6, -3, 1, 9, -7, -3, 2, -2, -2, -13, 2, 9,
-3, 4, -3, 4, -6, 3, -1, -7, 13, -5, 3, 1, 1, -5, -13, 1, -2, 8, 0, 2, -4, 6,
-1, 2, 3, -12, 4, -16, 0, -7, 2, 0, -3, 10, -6, 6, -3, -9, -2, 11, -7, -7, 11,
9, -3, 1, -1, -5, -6, -4, 2, -11, 8, 2, -4, 14, 0, -9, 7, -4, 6, -2, -10, -3, 1,
4, -12, 10, -1, 1, 0, 2, -3, 0, 5, 0, 5, -6, 0, -1, 0, -8, -3, -1, -1, 1, -3, 3,
-3, 4, 8, -12, 0, -2, -7, 9, 2, 3, -6, -1, -4, 2, -7, -5, 12, -4, 7, 0, -2, 3,
-1, -2, -3, 1, -3, -1, 2, -1, 2, -8, 1, 7, -8, -3, 1, 5, 4, -3, -3, 1, -3, -13,
2, 0, 1, 2, -13, 4, 4, 4, 0, 6, 2, -6, -9, -5, 12, -3, 1, -10, 10, -1, -7, 3,
-2, 9, -18, 0, -5, 11, -4, 0, 6, -13, 3, -13, 14, 3, -5, 0, -3, 3, 1, -2, 1, 7,
5, -8, 6, 0, -8, 2, -3, 4, -6, 1, -14, 7, 8, -10, 7, -11, 10, -8, -13, 13, -3,
1, -2, 4, -4, -2, 0, 0, 8, -8, 2, 3, 5, -2, -1, -1, 4, 1, -13, 2, 2, -3, -5, 2,
-1, 2, -2, 0, 0, 4, -6, -5, 6, -1, 2, -5, 1, 10, -8, -7, 8, -6, 6, 3, -15, 2, 0,
-8, 6, 5, -4, 2, 0, -6, 5, -2, -4, 2, -3, -1, 5, -2, -2, 0, 1, 4, -8, 2, 4, 0,
0, -2, -1, -3, -1, -5, -3, 6, -18, 5, 10, -6, 10, -3, -4, 3, 1, -11, 4, -3, 5,
-2, -7, 7, -5, 3, -4, 4, -3, 3, -3, -2, 6, -2, 4, -5, 5, -3, -9, -3, -4, 1, -2,
5, 2, -2, 7, -4, -5, 3, 0, 2, 2, -5, -2, 6, 5, -11, 3, -6, 2, 0, -3, 5, -4, 5,
-6, 7, -11, 4, -3, -5, 1, -8, 4, -11, 17, 1, -3, -6, -2, 7, -2, -1, -5, 13, -5,
-8, 1, 5, 3, -10, 5, -5, -4, 7, -7, 8, 5, 1, -2, -8, 7, -8, -2, 2, 1, 4, -5, -5,
-2, 10, -10, -2, 1, -8, 0, -2, 5, 8, -4, -2, -4, 0, 4, -4, 1, -2, 5, 0, 8, -2,
1, -2, -4, 3, -6, 3, 0, -2, 2, 2, -5, -1, -7, -3, 1, 2, -6, 3, 0, -5, 6, -6, -1,
4, -2, -9, 4, 1, 3, 3, -2, 2, -1, -5, -2, 8, -1, -4, -6, 7, 2, 0, -3, 1, 2, -2,
1, -7, 5, -9, -2, 3, -4, 3, -1, -8, -3, 1, 0, -7, 5, 3, -3, -7, 2, 6, -2, 3, -7,
8, -7, 2, 1, 3, 7, -6, -1, -1, -2, -3, 5, -6, 3, 1, 0, -2, -1, -6, -5, 1, 3, 2,
-4, 2, -2, -1, 0, -1, -3, -2, -5, -3, 3, 4, -1, 8, 0, -2, 0, -5, 1, 2, -3, -2,
8, -4, 0, -5, -2, -1, -3, 0, 5, 3, -8, 0, 0, 7, -7, -2, -1, -3, -3, -1, 1, 7, 5,
-7, 1, 1, 4, -4, -3, 2, 5, -2, -6, 1, 1, -3, -7, -1, 3, -8, 3, -1, 2, 6, -11, 4,
1, -2, 0, -2, -3, 6, 6, -6, -1, 1, 2, 1, -1, -2, -1, -1, -5, 3, 0, -1, -1, -7,
0, -5, -1, 4, 0, 6, 0, -3, 1, 6, -5, 0, -3, -7, 6, -2, -2, 1, 5, -4, 4, -7, -4,
6, -3, 1, 0, -1, -4, -5, 2, -2, -5, 3, 1, 4, -1, 0, 1, 4, -1, -5, -1, -6, 2, -4,
-1, 2, -1, 1, -4, -2, 0, 1, 2, -1, 0, 2, -2, 0, 4, 0, -4, 1, -5, 1, -2, 1, 4, 0,
2, 1, -3, -9, 0, -1, 2, -6, -2, 4, 1, -1, -4, 1, -1, 0, -3, 1, 1, 1, 0, 0, 6,
-1, -8, -2, 1, 0, -2, -2, 5, 1, -3, -2, 5, 0, -3, -5, -8, 2, 1, 1, 0, 2, 2, -4,
-1, -2, 2, -5, 0, 6, -4, 5, 0, -4, 1, -4, -8, 6, -3, -4, 4, -3, 3, 0, -1, -2, 1,
-2, -2, 1, -2, -1, 0, 3, 1, 2, -1, -2, 0, -5, -1, 0, 7, 2, -4, 0, -2, -1, -2,
-1, 0, 1, -4, -3, 5, 2, -2, 2, -4, 2, -6, -6, 6, -1, 4, -2, 0, 1, -1, -1, -1, 2,
-3, 2, -5, -1, 4, -2, -1, -2, 2, -4, -5, 1, 2, 3, -1, 4, 1, -3, -2, -2, -2, 0,
2, -5, -2, 2, -1, 4, -4, -5, 3, -7, 2, 3, -3, 1, 2, 1, 1, -2, -3, 2, -4, 1, 0,
-1, 4, 1, -4, 2, -3, -3, 2, -7, 0, 4, -1, -2, 1, 1, -7, 4, -1, -1, -1, -6, 3, 4,
0, -1, 1, -4, 3, -5, -3, 4, -2, 1, 0, 0, 1, 0, -2, -2, -2, -3, -2, -1, 0, 3, -1,
0, 0, -1, -1, -4, 1, 1, 1, 2, -2, 2, 0, -2, 0, -3, -2, -2, 0, 2, 1, -1, 0, -1,
-2, 0, -3, 1, 1, -2, -3, 1, 0, 0, 1, -1, 1, -4, -1, 1, 3, 0, -1, 0, -1, -1, -4,
1, -1, 1, -1, -1, 3, -3, 0, -1, 2, -3, -2, 1, -3, 2, 2, -2, 0, 1, -6, 1, -1, 0,
3, -2, 0, 2, -2, -4, 1, -2, -2, -2, 2, -2, 2, 0, 0, 3, -2, 1, -2, 0, -3, 0, 1,
-1, 0, -1, 2, -4, -2, 1, -4, 2, 0, -2, 1, 3, -2, 0, -1, -2, -3, -2, 1, -1, 0, 1,
4, -2, 2, -2, -4, 1, -3, -2, 1, 0, -2, 0, 0, -1, 0, -2, -2, 1, 0, 1, 0, 2, 1,
-4, -2, 0, 0, -4, 1, -2, 1, 1, -4, 5, -1, -1, -2, -3, -1, 0, -3, -1, 4, -2, 0,
1, -1, 0, -2, -1, 2, -2, 1, 2, -1, 2, -1, -2, -1, -2, -5, -1, 1, 0, 0, 1, -2, 0,
-1, -2, -1, 1, 0, -4, 1, 0, 1, -1, 2, -2, -4, -1, -1, 4, 0, -2, 0, -1, 0, 0, -5,
1, 1, -3, 0, 0, -2, 3, -1, -2, 3, -5, 0, 2, 0, 0, -2, -2, 1, 2, -6, 0, 1, -1, 1,
-3, -1, 3, -2, -3, 2, 0, -3, 0, -2, 2, 1, -4, 2, 1, -2, -2, 1, -1, 4, -4, -4, 2,
2, -1, -1, -1, -4, 2, -3, 2, 2, -2, 0, -1, 0, 2, -3, -2, 2, 0, -4, -1, 1, -2, 2,
-2, -1, 0, -2, -1, 1, -1, -1, 3, 0, -1, -1, 0, -1, -2, 1, -1, 1, -1, 2, 1, -1,
-2, -1, 0, -5, 1, 0, -1, 2, 0, -2, -3, -1, 1, -2, -1, 1, 0, 1, 1, -2, 2, 0, -3,
-1, 0, -2, -1, 2, -1, -1, 2, -3, -1, 2, -3, -2, -1, -1, -1, 1, -2, 1, 1, -1, 0,
-2, 0, -2, 1, -1, 1, 1, 0, 0, -2, 0, -2, -1, -4, 0, 1, 0, 1, -1, 0, -1, -4, -2,
-1, -1, -1, 0, 1, 2, -1, -3, 1, 0, 0, -1, -1, 0, 1, -3, 0, 2, 0, -2, -4, -1, 1,
-1, -2, 2, 2, -1, -1, 0, -2, 1, -3, -3, 2, 0, -1, -1, 2, 1, -1, -2, -1, 0, -1,
-2, 0, 1, -1, -2, 0, 2, -3, -1, 0, -2, 1, -1, 0, 3, -1, 0, -1, 0, -1, -1, -2,
-1, 1, -1, 1, -3, -1, -1, -1, -1, -1, -1, -3, 2, -2, -1, 1, -1, 1, -2, -2, 1, 1,
0, -1, 1, -1, 0, -2, 1, 2, -3, 0, 0, -1, 0, -1, -2, 1, 0, -4, -1, 1, 0, 2, -3,
-1, 1, -1, -2, 1, -1, 2, -1, -2, 1, -2, 0, -2, 0, 1, -2, -1, 0, 2, 0, -2, -1, 0,
-1, -2, -1, 1, 3, -3, -2, 0, 0, -1, 0, 0, -1, -1, -3, -1, 1, 0, -2, 0, -1, 0,
-2, 0, 0, 1, -1, 0, 1, -1, 3, -2, 0, 0, -3, 0, 2, -2, -1, 2, -1, -1, -1, -2, 0,
-2, -2, 0, -1, -3, 0, 0, 0, 0, -3, 0, -1, 0, 0, 0, 1, 1, -1, -3, 0, 0, 0, -1,
-3, 0, 1, -2, -1, 2, -2, -1, 0, -4, 1, 0, -2, 1, -1, 1, -1, 0, 0, 0, -1, -1, 0,
-1, 1, -1, -1, 1, -1, -1, -2, -1, -1, -2, 0, 1, 0, -1, 1, -1, 0, 1, -1, -2, 1,
0, -2, 3, 0, 0, 0, -2, 0, -1, -1, -1, 0, -1, -1, -2, -1, 0, -2, -1, 0, -1, 0, 0,
0, 1, -1, 0, 0, -3, 0, 0, -1, 0, -1, 1, -1, 0, -1, -1, 0, -2, -1, 0, -1, -2, -1,
2, -1, -1, -1, -1, 1, -2, 1, -1, 0, 1, 0, -2, 0, 0, -3, 2, -2, -1, 0, -1, 0, 1,
1, -3, 1, -1, -2, 1, -3, 0, 1, -1, 0, 0, -2, 1, 0, -2, 0, -1, -1, 0, -2, -1, -1,
-1, 0, -1, -1, 0, 0, -2, 1, -1, -1, 0, -1, 1, -1, 0, -1, 1, -1, -3, 1, -1, 0,
-1, 0, 0, 0, 0, -2, -1, -1, 1, -3, -1, 2, -1, 0, -1, 0, 0, -2, -1, 1, -1, 0, -1,
-2, 1, -1, -2, 0, 0, -1, -2, -2, 1, 1, -1, -2, 1, 0, -2, 0, 0, 0, 0, -2, 0, 1,
-1, 0, -1, 0, -2, -1, -1, 1, 0, -1, 0, -1, 0, -1, -2, 1, -1, -2, 1, 0, 1, 0, -1,
0, 0, -2, -1, 1, -1, 0, -1, 0, 0, -1, -1, -1, 1, -3, -1, 0, 0, 0, -1, 1, 1, 0,
-3, 0, 0, -1, 0, -1, 1, -1, 0, -1, 1, 1, -3, -2, 0, 0, 0, -1, 0, 1, -2, -2, -1,
0, -1, -1, -1, 1, 0, -1, 1, -1, 0, -1, -1, -2, 1, -2, 0, 1, -1, 1, -1, 0, -1, 0,
-1, 0, 0, -1, 1, -1, 1, 0, -1, -2, 0, 0, -3, 0, -1, 1, -1, -2, 0, -1, 0, -1, -1,
0, -1, 0, 0, 1, -1, 1, -1, -2, 1, -2, 0, 0, -1, 0, 0, -1, -1, 1, -2, -2, 0, -1,
0, -1, 0, -1, 0, -1, -1, -1, -1, 0, -1, 1, 0, 0, 0, -1, -1, 0, 1, -1, 0, 0, -1,
0, -1, 0, 0, -1, -2, 0, -1, -1, 0, -1, 1, 0, -1, 0, -1, -2, 0, 0, -1, 0, -1, -1,
0, -1, -1, -2, 0, 1, -1, -1, 0, 0, 0, -1, 0, 0, 0, -1, -1, 0, -1, 0, -1, -1, -1,
-1, 0, 1, -1, -2, 1, -1, 0, -1, -1, -1, 0, -1, -1, 0, -1, 1, 0, 0, 0, -1, -1, 0,
-2, 0, -1, 0, 1, -2, -1, -1, 0, 0, -3, 1, 0, -1, 0, 0, 0, -2, 0, -2, 1, -1, -2,
1, 0, 0, -2, 0, 1, -2, -1, -1, -1, 1, -1, -1, -1, 1, -1, -1, 0, -1, 0, -1, 0, 0,
1, -1, 0, 0, -1, 0, -2, 0, -1, 0, -1, 1, 0, -2, -2, 0, 0, -3, -1, 0, -1, 0, 0,
-1, 0, };
 
 #endif /* hihato_H_ */
