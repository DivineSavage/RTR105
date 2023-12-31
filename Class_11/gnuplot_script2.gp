#!/usr/bin/gnuplot -persist
# set terminal pngcairo  background "#ffffff" enhanced font "times" fontscale 1.0 size 640, 480 
# set output 'complex_trig.7.png'
unset key
unset parametric
set view map scale 1
set isosamples 100, 100
set size ratio 1 1,1
set style data lines
set xtics  norangelimit 
set xtics   ("-Ï€/2" -1.57080, "-Ï€/4" -0.785398, "0" 0.00000, "Ï€/4" 0.785398, "Ï€/2" 1.57080)
set ytics  norangelimit 
set ytics   ("-Ï€/2" -1.57080, "-Ï€/4" -0.785398, "0" 0.00000, "Ï€/4" 0.785398, "Ï€/2" 1.57080)
set cbtics  norangelimit 
set cbtics   ("0" -3.14159, "2Ï€" 3.14159)
set title "tanh( x + iy )" 
set urange [ -1.57080 : 1.57080 ] noreverse nowriteback
set vrange [ -1.57080 : 1.57080 ] noreverse nowriteback
set xrange [ -1.57080 : 1.57080 ] noreverse nowriteback
set x2range [ * : * ] noreverse writeback
set yrange [ -1.57080 : 1.57080 ] noreverse nowriteback
set y2range [ * : * ] noreverse writeback
set zrange [ * : * ] noreverse writeback
set cblabel "Phase Angle" 
set cblabel  offset character -2, 0, 0 font "" textcolor lt -1 rotate
set cbrange [ -3.14159 : 3.14159 ] noreverse nowriteback
set rrange [ * : * ] noreverse writeback
set palette positive nops_allcF maxcolors 0 gamma 1.5 color model HSV 
set palette defined ( 0 0 1 1, 1 1 1 1 )
set colorbox vertical origin screen 0.9, 0.2 size screen 0.05, 0.6 front  noinvert bdefault
Hue(x,y) = (pi + atan2(-y,-x)) / (2*pi)
phase(x,y) = hsv2rgb( Hue(x,y), sqrt(x**2+y**2), 1. )
rp(x,y) = real(f(x,y))
f(x,y) = tanh(x + y*{0,1})
ip(x,y) = imag(f(x,y))
color(x,y) = hsv2rgb( Hue( rp(x,y), ip(x,y) ), abs(f(x,y)), 1. )
NO_ANIMATION = 1
save_encoding = "utf8"
## Last datafile plotted: "++"
splot '++' using 1:2:(color($1,$2)) with pm3d lc rgb variable
