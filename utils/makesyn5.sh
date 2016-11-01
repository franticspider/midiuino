#!bin/bash

RATE=16384

#Script to generate drum sounds for synth_05a
sh wav2header.sh samples/909_xOver_4a.wav jjbd ${RATE} 
sh wav2header.sh samples/rhythm77_sn.wav jjsn ${RATE} 
sh wav2header.sh samples/rhythm77_ch.wav jjch ${RATE} 
sh wav2header.sh samples/rhythm77_oh.wav jjoh ${RATE} 
sh wav2header.sh samples/fx_09.wav jjfx1 ${RATE} 
sh wav2header.sh samples/fx_10.wav jjfx2 ${RATE} 
sh wav2header.sh samples/fx_17b.wav jjfx3 ${RATE} 

rm -rf jamjar
mkdir jamjar
cp jj* jamjar/
ls -lh jamjar/*
