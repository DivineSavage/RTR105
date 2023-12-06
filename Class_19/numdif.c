#include <stdio.h>
#include <math.h>

void main()
{
 printf("\tx\t\tj1(x)\t\tj1\'(x)\t\tj1\''(x)\t\tj1\'''(x)\n");
 float a = 0, b=2*M_PI,x,delta_x=1.e-2,x1,x2,x3,x4;
 x = a;
 while(x<b)
 {

  printf("%10.2f\t%10.2f\t%10.2f\n",x,j1(x),(j1(x+delta_x)-j1(x))/delta_x);
  x += delta_x;
  x1 += delta_x;
 }

 while(x<b)
 {

  printf("%10.2f\t%10.2f\t%10.2f\n",x,j1(x1),(j1(x1+delta_x)-j1(x1))/delta_x);
  x1 += delta_x;
  x2 += delta_x;
 }

 while(x<b)
 {

  printf("%10.2f\t%10.2f\t%10.2f\n",x,j1(x2),(j1(x2+delta_x)-j1(x2))/delta_x);
  x2 += delta_x;
  x3 += delta_x;
 }
 while(x<b)
 {

  printf("%10.2f\t%10.2f\t%10.2f\n",x,j1(x3),(j1(x3+delta_x)-j1(x3))/delta_x);
  x3 += delta_x;
  x4 += delta_x;

 }
}
