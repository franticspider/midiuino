#!bin/bash

#Create arduino compatible header files from samples

#Convert to unsigned 8-bit
#sndfile-convert -pcms8 samples/909_xOver_4a.wav bd.flac
#~/software/libsamplerate-0.1.9/examples/sndfile-resample -to 32768 bd.flac bds.flac


#this works better, resampling before reducing bit depth:

#RESAMPLE:
~/software/libsamplerate-0.1.9/examples/sndfile-resample -to $3 $1 tmp.wav

#CONVERT TO 8 BIT
sndfile-convert -pcms8 tmp.wav tmp.flac

#CREATE THE HEADER
./moz_samp -i tmp.flac -l 3072 -o $2

#tidy up
rm tmp.wav
mv tmp.flac ${2}.flac

