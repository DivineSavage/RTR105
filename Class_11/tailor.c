#include <stdio.h>
#include<math.h>
double mans_bessels(double x, long double *almostlast)
{
 double a,S;
 int k=0;

 a = pow(-1,k)*pow(x,2*k)/(1.);
 S=a;
 printf("%.2f\t%8.2f\t%8.2f\n",x,a,S);

 while(k<100)
 {
 k++;
 a = a * -1 * x*x /( k*(k+1)*4 );
 S=S+a;
// printf("%.2f\t%8.2f\t%8.2f\n",x,a,S);
 if (k==98)
  {
   *almostlast = a;
  }
 }
return S*x/2;
}

void main()
{
 double x,y,yy;
 long double almostlast = 0;
 printf("Ievadat vertibu x \n");
 scanf("%lf",&x);
 y = j1(x);
 printf("stand func j1(y) (%.2f)=%.2f\n",x,y);

 yy=mans_bessels(x, &almostlast);
 printf("liet funkc j1(y) (%.2f)=%.2f\n",x,yy);
 printf("PrieksPedeja vertiba: %e\n",(double)almostlast);

}
