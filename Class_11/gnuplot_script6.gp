#!/usr/bin/gnuplot -persist
# set terminal pngcairo  transparent enhanced font "arial,10" fontscale 1.0 size 600, 400 
# set output 'polar.8.png'
set clip points
unset border
set dummy t, y
set raxis
set key fixed right top vertical Right noreverse enhanced autotitle box lt black linewidth 1.000 dashtype solid
unset key
set polar
set samples 800, 800
set style data lines
set xzeroaxis
set yzeroaxis
set zzeroaxis
set xtics axis in scale 1,0.5 nomirror norotate  autojustify
set ytics axis in scale 1,0.5 nomirror norotate  autojustify
unset rtics
set title "Butterfly" 
set trange [ 0.00000 : 37.6991 ] noreverse nowriteback
set xrange [ * : * ] noreverse writeback
set x2range [ * : * ] noreverse writeback
set yrange [ * : * ] noreverse writeback
set y2range [ * : * ] noreverse writeback
set zrange [ * : * ] noreverse writeback
set cbrange [ * : * ] noreverse writeback
set rrange [ * : * ] noreverse writeback
set colorbox vertical origin screen 0.9, 0.2 size screen 0.05, 0.6 front  noinvert bdefault
butterfly(x)=exp(cos(x))-2*cos(4*x)+sin(x/12)**5
NO_ANIMATION = 1
plot butterfly(t)
