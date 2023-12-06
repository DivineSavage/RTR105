#include <stdio.h>
#include <math.h>

float deriv(d,d2)
{

 while(d2<b)
 {
  d = j1(x+delta_x)-j1(x))/delta_x;
  d += delta_x;
  d2 =j1(d+delta_x)-j1(d))/delta_x;
  d2 += delta_x;
  return d,d2;
 }
}



void main()
{
 printf("\tx\t\tj1(x)\t\tj1\'(x)\t\tj1\''(x)\n");
 float a = 0, b=0,x,delta_x=0;
 x = a;
 printf("Ievadiet lūdzu apakšējo robežu a\n");
 scanf("%10.2f",&a);
 printf("Ievadiet lūdzu augšējo robežu b\n");
 scanf("%10.2f",&b);
 printf("Ievadiet lūdzu vēlamo precizitāti dx\n");
 scanf("%10.2f",&delta_x);
 deriv();

 while(x<b)
 {
  printf("%10.2f\t%10.2f\t%10.2f\t%10.2f\n",x,j1(x),d,d2);
 }
}
