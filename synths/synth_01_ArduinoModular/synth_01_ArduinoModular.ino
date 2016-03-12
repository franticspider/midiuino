
// http://rcarduino.blogspot.co.uk/2012/10/arduino-modular-synthesizer-part-one.html
  

#define SAMPLE_MAX (65535.0)
#define SAMPLE_FREQUENCY (8000.0)
#define TIMER1_FREQUENCY 2000000
#define UPDATE_RATE 8000

#define MIDI_NOTE_MAX 127

#define MIX_MIDDLE 127

#define GRAIN1_FREQUENCY_INPUT A0
#define GRAIN1_AMPLITUDE_INPUT A1

#define GRAIN2_FREQUENCY_INPUT A2
#define GRAIN2_AMPLITUDE_INPUT A3

#define LFO_FREQUENCY_INPUT A4
#define LFO_AMPLITUDE_INPUT A5

#define GRAIN1_SHAPE_INPUT 4
#define GRAIN2_SHAPE_INPUT 7
#define LFO_SHAPE_INPUT 8

#define PWM_OUT OCR0A

// Will put this in progmem - eventually
/*PROGMEM*/ 
unsigned char sineWave[256] =
{
127    ,    //0
130    ,    //1
133    ,    //2
136    ,    //3
139    ,    //4
142    ,    //5
145    ,    //6
148    ,    //7
151    ,    //8
154    ,    //9
157    ,    //10
160    ,    //11
163    ,    //12
166    ,    //13
169    ,    //14
172    ,    //15
175    ,    //16
178    ,    //17
181    ,    //18
184    ,    //19
186    ,    //20
189    ,    //21
192    ,    //22
194    ,    //23
197    ,    //24
200    ,    //25
202    ,    //26
205    ,    //27
207    ,    //28
209    ,    //29
212    ,    //30
214    ,    //31
216    ,    //32
218    ,    //33
221    ,    //34
223    ,    //35
225    ,    //36
227    ,    //37
229    ,    //38
230    ,    //39
232    ,    //40
234    ,    //41
235    ,    //42
237    ,    //43
239    ,    //44
240    ,    //45
241    ,    //46
243    ,    //47
244    ,    //48
245    ,    //49
246    ,    //50
247    ,    //51
248    ,    //52
249    ,    //53
250    ,    //54
250    ,    //55
251    ,    //56
252    ,    //57
252    ,    //58
253    ,    //59
253    ,    //60
253    ,    //61
253    ,    //62
253    ,    //63
254    ,    //64
253    ,    //65
253    ,    //66
253    ,    //67
253    ,    //68
253    ,    //69
252    ,    //70
252    ,    //71
251    ,    //72
250    ,    //73
250    ,    //74
249    ,    //75
248    ,    //76
247    ,    //77
246    ,    //78
245    ,    //79
244    ,    //80
243    ,    //81
241    ,    //82
240    ,    //83
239    ,    //84
237    ,    //85
235    ,    //86
234    ,    //87
232    ,    //88
230    ,    //89
229    ,    //90
227    ,    //91
225    ,    //92
223    ,    //93
221    ,    //94
218    ,    //95
216    ,    //96
214    ,    //97
212    ,    //98
209    ,    //99
207    ,    //100
205    ,    //101
202    ,    //102
200    ,    //103
197    ,    //104
194    ,    //105
192    ,    //106
189    ,    //107
186    ,    //108
184    ,    //109
181    ,    //110
178    ,    //111
175    ,    //112
172    ,    //113
169    ,    //114
166    ,    //115
163    ,    //116
160    ,    //117
157    ,    //118
154    ,    //119
151    ,    //120
148    ,    //121
145    ,    //122
142    ,    //123
139    ,    //124
136    ,    //125
133    ,    //126
130    ,    //127
127    ,    //128
124    ,    //129
121    ,    //130
118    ,    //131
115    ,    //132
112    ,    //133
109    ,    //134
106    ,    //135
103    ,    //136
100    ,    //137
97    ,    //138
94    ,    //139
91    ,    //140
88    ,    //141
85    ,    //142
82    ,    //143
79    ,    //144
76    ,    //145
73    ,    //146
70    ,    //147
68    ,    //148
65    ,    //149
62    ,    //150
60    ,    //151
57    ,    //152
54    ,    //153
52    ,    //154
49    ,    //155
47    ,    //156
45    ,    //157
42    ,    //158
40    ,    //159
38    ,    //160
36    ,    //161
33    ,    //162
31    ,    //163
29    ,    //164
27    ,    //165
25    ,    //166
24    ,    //167
22    ,    //168
20    ,    //169
19    ,    //170
17    ,    //171
15    ,    //172
14    ,    //173
13    ,    //174
11    ,    //175
10    ,    //176
9    ,    //177
8    ,    //178
7    ,    //179
6    ,    //180
5    ,    //181
4    ,    //182
4    ,    //183
3    ,    //184
2    ,    //185
2    ,    //186
1    ,    //187
1    ,    //188
1    ,    //189
1    ,    //190
1    ,    //191
0    ,    //192
1    ,    //193
1    ,    //194
1    ,    //195
1    ,    //196
1    ,    //197
2    ,    //198
2    ,    //199
3    ,    //200
4    ,    //201
4    ,    //202
5    ,    //203
6    ,    //204
7    ,    //205
8    ,    //206
9    ,    //207
10    ,    //208
11    ,    //209
13    ,    //210
14    ,    //211
15    ,    //212
17    ,    //213
19    ,    //214
20    ,    //215
22    ,    //216
24    ,    //217
25    ,    //218
27    ,    //219
29    ,    //220
31    ,    //221
33    ,    //222
36    ,    //223
38    ,    //224
40    ,    //225
42    ,    //226
45    ,    //227
47    ,    //228
49    ,    //229
52    ,    //230
54    ,    //231
57    ,    //232
60    ,    //233
62    ,    //234
65    ,    //235
68    ,    //236
70    ,    //237
73    ,    //238
76    ,    //239
79    ,    //240
82    ,    //241
85    ,    //242
88    ,    //243
91    ,    //244
94    ,    //245
97    ,    //246
100    ,    //247
103    ,    //248
106    ,    //249
109    ,    //250
112    ,    //251
115    ,    //252
118    ,    //253
121    ,    //254
123        //255
};

// should pre calculate these and store them in progmem to save memory
// for prototyping, lets calculate them and use ram
unsigned char rampWave[256];
unsigned char squareWave[256];

// used to convert midi note numbers into the increments required to generate the note in the ISR
const PROGMEM unsigned int midiNoteToWavePhaseIncrement[128] =
{
 66 // 0,8.18,66.98,66
,70 // 1,8.66,70.96,70
,75 // 2,9.18,75.18,75
,79 // 3,9.72,79.65,79
,84 // 4,10.30,84.38,84
,89 // 5,10.91,89.40,89
,94 // 6,11.56,94.72,94
,100 // 7,12.25,100.35,100
,106 // 8,12.98,106.32,106
,112 // 9,13.75,112.64,112
,119 // 10,14.57,119.34,119
,126 // 11,15.43,126.43,126
,133 // 12,16.35,133.95,133
,141 // 13,17.32,141.92,141
,150 // 14,18.35,150.35,150
,159 // 15,19.45,159.29,159
,168 // 16,20.60,168.77,168
,178 // 17,21.83,178.80,178
,189 // 18,23.12,189.43,189
,200 // 19,24.50,200.70,200
,212 // 20,25.96,212.63,212
,225 // 21,27.50,225.28,225
,238 // 22,29.14,238.67,238
,252 // 23,30.87,252.86,252
,267 // 24,32.70,267.90,267
,283 // 25,34.65,283.83,283
,300 // 26,36.71,300.71,300
,318 // 27,38.89,318.59,318
,337 // 28,41.20,337.53,337
,357 // 29,43.65,357.60,357
,378 // 30,46.25,378.87,378
,401 // 31,49.00,401.40,401
,425 // 32,51.91,425.27,425
,450 // 33,55.00,450.55,450
,477 // 34,58.27,477.34,477
,505 // 35,61.74,505.73,505
,535 // 36,65.41,535.80,535
,567 // 37,69.30,567.66,567
,601 // 38,73.42,601.42,601
,637 // 39,77.78,637.18,637
,675 // 40,82.41,675.07,675
,715 // 41,87.31,715.21,715
,757 // 42,92.50,757.74,757
,802 // 43,98.00,802.79,802
,850 // 44,103.83,850.53,850
,901 // 45,110.00,901.11,901
,954 // 46,116.54,954.69,954
,1011 // 47,123.47,1011.46,1011
,1071 // 48,130.81,1071.60,1071
,1135 // 49,138.59,1135.32,1135
,1202 // 50,146.83,1202.83,1202
,1274 // 51,155.56,1274.36,1274
,1350 // 52,164.81,1350.13,1350
,1430 // 53,174.61,1430.42,1430
,1515 // 54,185.00,1515.47,1515
,1605 // 55,196.00,1605.59,1605
,1701 // 56,207.65,1701.06,1701
,1802 // 57,220.00,1802.21,1802
,1909 // 58,233.08,1909.38,1909
,2022 // 59,246.94,2022.92,2022
,2143 // 60,261.63,2143.20,2143
,2270 // 61,277.18,2270.64,2270
,2405 // 62,293.66,2405.66,2405
,2548 // 63,311.13,2548.71,2548
,2700 // 64,329.63,2700.27,2700
,2860 // 65,349.23,2860.83,2860
,3030 // 66,369.99,3030.95,3030
,3211 // 67,392.00,3211.18,3211
,3402 // 68,415.30,3402.12,3402
,3604 // 69,440.00,3604.42,3604
,3818 // 70,466.16,3818.75,3818
,4045 // 71,493.88,4045.83,4045
,4286 // 72,523.25,4286.41,4286
,4541 // 73,554.37,4541.29,4541
,4811 // 74,587.33,4811.33,4811
,5097 // 75,622.25,5097.42,5097
,5400 // 76,659.26,5400.53,5400
,5721 // 77,698.46,5721.67,5721
,6061 // 78,739.99,6061.89,6061
,6422 // 79,783.99,6422.36,6422
,6804 // 80,830.61,6804.25,6804
,7208 // 81,880.00,7208.85,7208
,7637 // 82,932.33,7637.51,7637
,8091 // 83,987.77,8091.66,8091
,8572 // 84,1046.50,8572.82,8572
,9082 // 85,1108.73,9082.58,9082
,9622 // 86,1174.66,9622.66,9622
,10194 // 87,1244.51,10194.85,10194
,10801 // 88,1318.51,10801.07,10801
,11443 // 89,1396.91,11443.33,11443
,12123 // 90,1479.98,12123.79,12123
,12844 // 91,1567.98,12844.71,12844
,13608 // 92,1661.22,13608.50,13608
,14417 // 93,1760.00,14417.70,14417
,15275 // 94,1864.65,15275.02,15275
,16183 // 95,1975.53,16183.31,16183
,17145 // 96,2093.00,17145.63,17145
,18165 // 97,2217.46,18165.16,18165
,19245 // 98,2349.32,19245.31,19245
,20389 // 99,2489.01,20389.70,20389
,21602 // 100,2637.02,21602.14,21602
,22886 // 101,2793.83,22886.67,22886
,24247 // 102,2959.95,24247.58,24247
,25689 // 103,3135.96,25689.42,25689
,27216 // 104,3322.44,27216.99,27216
,28835 // 105,3520.00,28835.39,28835
,30550 // 106,3729.31,30550.04,30550
,32366 // 107,3951.06,32366.63,32366
,34291 // 108,4186.01,34291.26,34291
,36330 // 109,4434.92,36330.32,36330
,38490 // 110,4698.64,38490.65,38490
,40779 // 111,4978.03,40779.41,40779
,43204 // 112,5274.04,43204.25,43204
,45773 // 113,5587.65,45773.32,45773
,48495 // 114,5919.91,48495.14,48495
,51378 // 115,6271.92,51378.79,51378
,54433 // 116,6644.87,54433.96,54433
,57670 // 117,7040.00,57670.76,57670
,61100 // 118,7458.62,61100.07,61100
,64733 // 119,7902.13,64733.26,64733
,3046 // 120,8372.02,68582.53,3046
,7124 // 121,8869.84,72660.64,7124
,11445 // 122,9397.27,76981.30,11445
,16022 // 123,9956.06,81558.77,16022
,20872 // 124,10548.07,86408.50,20872
,26010 // 125,11175.30,91546.65,26010
,31454 // 126,11839.81,96990.28,31454
};

class CSynth
{
public:
  volatile static unsigned char* m_pWaveForm1;
  volatile static unsigned char* m_pWaveForm2;
  volatile static unsigned char* m_pLFOShape1;
  volatile static unsigned char* m_pLFOShape2;
  volatile static unsigned int m_nWaveForm1Accumulator;
  volatile static unsigned int m_nWaveForm1Increment;
  volatile static unsigned int m_nWaveForm2Accumulator;
  volatile static unsigned int m_nWaveForm2Increment;
  volatile static unsigned int m_nLFOAccumulator1;
  volatile static unsigned int m_nLFOIncrement1;
  volatile static unsigned int m_nLFOAccumulator2;
  volatile static unsigned int m_nLFOIncrement2;
  volatile static unsigned char m_sLFOType;
  volatile static unsigned char m_sMix;
  static void startAudio()
  {
     TCCR1A=0x0;          // set the timer prescaler to 8 = 16/8 = 2MHz
     TCCR1B=0x02;          // set the timer prescaler to 8 = 16/8 = 2MHz
     TIMSK1 |= (1<<OCIE1A);   // Enable output compare match interrupt on OCR1A
     
     TCCR0A=0B10110011;                                    //-8 bit audio PWM
    //TCCR0A=0x83;          // Set timer waveform generation mode to FAST PWM, clear OC0A On match, set at bottom - OC0A = digital pin 6.
    TCCR0B=0x01;          // Set to clock frequency, no prescaler
    OCR0A=127;            // set in the middle - do we need this ? probably not.
    DDRD|=1<<6;          // Set digital pin 6 to output - channels 2 and 3
  }
  static void triggerMidiNote(unsigned char sNote)
  {
    if(sNote < MIDI_NOTE_MAX)
    {
      m_nWaveForm1Increment = (pgm_read_word(midiNoteToWavePhaseIncrement + (sNote)));
    }
  }
};

volatile unsigned char* CSynth::m_pWaveForm1;
volatile unsigned char* CSynth::m_pWaveForm2;
volatile unsigned char* CSynth::m_pLFOShape1;
volatile unsigned char* CSynth::m_pLFOShape2;
volatile unsigned int CSynth::m_nWaveForm1Accumulator;
volatile unsigned int CSynth::m_nWaveForm1Increment;
volatile unsigned int CSynth::m_nWaveForm2Accumulator;
volatile unsigned int CSynth::m_nWaveForm2Increment;
volatile unsigned int CSynth::m_nLFOAccumulator1;
volatile unsigned int CSynth::m_nLFOIncrement1;
volatile unsigned int CSynth::m_nLFOAccumulator2;
volatile unsigned int CSynth::m_nLFOIncrement2;
volatile unsigned char CSynth::m_sLFOType;
volatile unsigned char CSynth::m_sMix;
  
CSynth synth;

// iterate the grains and LFO 
SIGNAL (TIMER1_COMPA_vect) 
{
  OCR1A += (TIMER1_FREQUENCY/UPDATE_RATE);

   // cross fade between the two channels
  unsigned char sAmplitude1 = 0;
  unsigned char sAmplitude2 = 0;
  
  if(synth.m_sMix < 127)
  {
    sAmplitude1 = synth.m_sMix << 1;
    sAmplitude2 = 255;
  }
  else if(synth.m_sMix > 127)
  {
    sAmplitude2 = (255-synth.m_sMix) << 1;
    sAmplitude1 = 255;
  }
  
  OCR0B = OCR0A = 
  (((((
    (*(synth.m_pWaveForm1 + ((synth.m_nWaveForm1Accumulator+=synth.m_nWaveForm1Increment)>>8))) *
    (*(synth.m_pLFOShape1 + ((synth.m_nLFOAccumulator1+=synth.m_nLFOIncrement1) >> 8)))) >> 8) *
    sAmplitude1) >> 8) +
   ((((
    (*(synth.m_pWaveForm2 + ((synth.m_nWaveForm2Accumulator+=synth.m_nWaveForm2Increment)>>8))) *
    (*(synth.m_pLFOShape2 + ((synth.m_nLFOAccumulator2+=synth.m_nLFOIncrement2) >> 8)))) >> 8) *
    sAmplitude2) >> 8)) >> 1;    

}

void setup()
{
 pinMode(GRAIN1_SHAPE_INPUT,INPUT);
 pinMode(GRAIN2_SHAPE_INPUT,INPUT);
 pinMode(LFO_SHAPE_INPUT,INPUT);

 digitalWrite(GRAIN1_SHAPE_INPUT,HIGH);
 digitalWrite(GRAIN2_SHAPE_INPUT,HIGH);
 digitalWrite(LFO_SHAPE_INPUT,HIGH);

 Serial.begin(9600);

  for(int nIndex = 0;nIndex < 256;nIndex ++)
 {
   rampWave[nIndex] = 255 - nIndex;
   squareWave[nIndex] = (nIndex < 127) ? 0 : 255;
 }

 synth.m_pWaveForm1 = sineWave;
 synth.m_pWaveForm2 = sineWave;
 synth.m_pLFOShape1 = rampWave;
 synth.m_pLFOShape2 = squareWave;
 synth.m_sMix = MIX_MIDDLE;
 synth.startAudio();
}
void loop()
{
 synth.triggerMidiNote(256>>3);
 synth.m_nWaveForm2Increment = 512<<5;

 // the LFO Oscilators control the volume of the two waveforms, a low value
 synth.m_nLFOIncrement1 = 256 >> 2;
 synth.m_nLFOIncrement2 = 320 >> 2;

 // this mixes the two channels a low value will shut off one channel, a high value will shut off the other
 // anywhere in between will generate a proportional mix of the two channels
 synth.m_sMix = 300 >> 2;
}

/* To read from potentiometers: 
void loop()
{
 synth.triggerMidiNote(analogRead(1)>>3);
 synth.m_nWaveForm2Increment = analogRead(2)<<5;

 // the LFO Oscilators control the volume of the two waveforms, a low value
 synth.m_nLFOIncrement1 = analogRead(3) >> 2;
 synth.m_nLFOIncrement2 = analogRead(4) >> 2;

 // this mixes the two channels a low value will shut off one channel, a high value will shut off the other
 // anywhere in between will generate a proportional mix of the two channels
 synth.m_sMix = analogRead(5) >> 2;
}
*/

