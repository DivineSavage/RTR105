#include <stdio.h>
#include <math.h>

int main()
{
 float a = 0.01, b = 1.5*M_PI, x, delta_x=1.e-3, funkca, funkcb,funkcx;
 int k = 0;
 funkca = j1(a);
 funkcb = j1(b);
 if(funkca*funkcb>0)
 {
  printf("Intervala [%.2f;%.2f] bessel funkcijai ",a,b);
  printf("saknju nav (vai taja ir paru saknju skaits)\n");
  return 1;
 }
 printf("		bes(%7.3f)=%7.3f\t\t\t\t",a,j1(a));
 printf("sin(%7.3f)=%7.3f\n",b,j1(b));
 while((b-a)>delta_x)
 {
 k++;
 x = (a+b)/2;
 if(funkca*j1(x)>0)
  a = x;
 else
  b = x;
 printf("%2d. Iteracija: j1(%7.3f)=%7.3f\t",k,a,j1(a));
 printf("j1(%7.3f) = %7.3f\t",x,j1(x));
 printf("j1(%7.3f) = %7.3f\n",b,j1(b));
 }

printf("Sakne atrodas pie x=%.3f, jo j1(x) ir %.3f\n",x,j1(x));
return 0;
}

