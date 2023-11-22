#include <stdio.h>
#include <math.h>

float modified_bes(float x, float A)
{
 return j1(x)-A;
}
void main()
{
 float a,x,delta_x,b,y,A;
 a = 0;
 b = 2*M_PI;

 printf("Jo vecit ievadi skaitli, A vertibu bessela funkcijai = A\n");
 scanf("%f",&A);
 x = a;
 delta_x = 0.1;
 printf("\tx\ty\n");
 while(x<b)
 {
 printf("%10.1f%10.1f\n",x,modified_bes(x,A));
 x += delta_x;


 }
}
