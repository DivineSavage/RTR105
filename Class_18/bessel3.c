#include <stdio.h>
#include <math.h>



int main()
{
 float a = 0.01, b = 0*M_PI, x, delta_x=1.e-3, funkca, funkcb,funkcx,A;
 printf("Jo vecit ievadi skaitli, C vertibu bessela funkcijai = C\n");
 scanf("%f",&A);
 printf("Jo vecit ievadi skaitli, a vertibu bessela funkcijas robezam = a\n");
 scanf("%f",&a);
 printf("Jo vecit ievadi skaitli, b vertibu bessela funkcijas robezam = b\n");
 scanf("%f",&b);
 printf("Jo vecit ievadi precizitati, delta x vertibu bessela funkcijai = dx\n");
 scanf("%f",&delta_x);

 int k = 0;
 funkca = j1(a-A);
 funkcb = j1(b-A);
 
 if(funkca*funkcb>0)
 {
  printf("Intervala [%.2f;%.2f] bessel funkcijai ",a,b);
  printf("saknju nav (vai taja ir paru saknju skaits)\n");
  return 1;
 }
 printf("	    bes(%7.3f)=%7.3f\t\t\t\t",a,j1(a-A));
 printf("bes(%7.3f)=%7.3f\n",b,j1(b-A));
 while((b-a)>delta_x)
 {
 k++;
 x = (a+b)/2;
 if(funkca*j1(x-A)>0)
  a = x;
 else
  b = x;
 printf("%2d. Iteracija: j1(%7.3f)=%7.3f\t",k,a,j1(a-A));
 printf("j1(%7.3f) = %7.3f\t",x,j1(x-A));
 printf("j1(%7.3f) = %7.3f\n",b,j1(b-A));
 }

printf("Sakne atrodas pie x=%.3f, jo j1(x) ir %.3f\n",x,j1(x));
return 0;
}

