#!bin/bash

#Script to generate drum sounds for synth_05a
sh wav2header.sh samples/909_xOver_4a.wav jjbd
sh wav2header.sh samples/rhythm77_sn.wav jjsn
sh wav2header.sh samples/rhythm77_ch.wav jjch
sh wav2header.sh samples/rhythm77_oh.wav jjoh
sh wav2header.sh samples/fx_09.wav jjfx1
sh wav2header.sh samples/fx_10.wav jjfx2
sh wav2header.sh samples/fx_17b.wav jjfx3

rm -rf jamjar
mkdir jamjar
cp jj* jamjar/
ls -lh jamjar/*
