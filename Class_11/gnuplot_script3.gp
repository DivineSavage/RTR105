#!/usr/bin/gnuplot -persist
# set terminal pngcairo  background "#ffffff" enhanced font "arial,8" fontscale 1.0 size 540, 360 
# set output 'rgb_variable.8.png'
unset key
unset parametric
set view 63, 58, 1, 1.4
set isosamples 40, 40
set xyplane at 0
unset xtics
unset ytics
set ztics  norangelimit 
set ztics   ("0" 0.00000)
set title "HSV coloring of pm3d surface\n(V=1)" 
set urange [ 0.0100000 : 1.00000 ] noreverse nowriteback
set vrange [ 0.0100000 : 1.00000 ] noreverse nowriteback
set xlabel "H" 
set xrange [ 0.0100000 : 1.00000 ] noreverse nowriteback
set x2range [ * : * ] noreverse writeback
set ylabel "S" 
set yrange [ 0.0100000 : 1.00000 ] noreverse nowriteback
set y2range [ * : * ] noreverse writeback
set zrange [ 0.00000 : 1.06500 ] noreverse nowriteback
set cbrange [ * : * ] noreverse writeback
set rrange [ * : * ] noreverse writeback
set colorbox vertical origin screen 0.9, 0.2 size screen 0.05, 0.6 front  noinvert bdefault
unset colorbox
rgb(r,g,b) = int(r)*65536 + int(g)*256 + int(b)
xrgb(r,g,b) = (g-b)/255. * cos(30.)
yrgb(r,g,b) = r/255. - (g+b)/255. * sin(30.)
RGB(R,G,B) =  int(255.*R) * 2**16 + int(255.*G) * 2**8  + int(255.*B)
f(x,y) = 0.4 + sin(sqrt(100.*x**2+100.*y**2))        / (1.5*sqrt(100.*x**2+100.*y**2))
NO_ANIMATION = 1
## Last datafile plotted: "++"
splot '++' using 1:2:(f($1,$2)):(hsv2rgb($1,$2,1.0))        with pm3d lc rgb variable
