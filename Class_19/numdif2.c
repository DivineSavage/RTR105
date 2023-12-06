#include <stdio.h>
#include <math.h>

struct Deriv
{
 float d1;
 float d2;
};

struct Deriv derivative(float delta_x, float x)
{
 struct Deriv currentresults;
// while(d2<b)

  currentresults.d1 = j1((x+delta_x)-j1(x))/delta_x;
  currentresults.d1 += delta_x;
  currentresults.d2 =j1((currentresults.d1+delta_x)-j1(currentresults.d1))/delta_x;
  currentresults.d2 += delta_x;
  return currentresults;
}



void main()
{
 printf("\tx\t\tj1(x)\t\tj1\'(x)\t\tj1\''(x)\n");
 float a = 0, b=0,x,delta_x=0;
 x = a;
 printf("Ievadiet lūdzu apakšējo robežu a\n");
 scanf("%f",&a);
 printf("Ievadiet lūdzu augšējo robežu b\n");
 scanf("%f",&b);
 printf("Ievadiet lūdzu vēlamo precizitāti dx\n");
 scanf("%f",&delta_x);
 while(x<b)
 {
  struct Deriv drawresults = derivative( delta_x, x );
  printf("%10.2f\t%10.2f\t%10.2f\t%10.2f\n",x,j1(x),drawresults.d1,drawresults.d2);
 }
}
