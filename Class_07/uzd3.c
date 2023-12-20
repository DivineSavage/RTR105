#include <stdio.h>
#include <stdlib.h>
int main(void)
{
 int a = 0;
 int b = 0;
 int c = 0;
 int agdl = 0;
 int i = 0;
 printf("Ievadat vienu ciparu ");
 scanf("%d",&a);
 printf("Ievadat otru ciparu ");
 scanf("%d",&b);
 printf("Ievadat treso ciparu ");
 scanf("%d",&c);
 printf("To sakārtot augošā vai dilstošā secībā Ievadat 0 vai 1 ");
 scanf("%d",&agdl);

if(agdl == 0)
 {
   if(a>=b && b>=c)
   {
    printf("%d,%d,%d,/n",a,b,c);
   }
   else if(b>=a && a>=c)
   {
    printf("%d,%d,%d,/n",b,a,c);
   }
   else if(c>=a && a>=b)
   {
    printf("%d,%d,%d,/n",c,a,b);
   }
   else if(a>=c && c>=b)
   {
    printf("%d,%d,%d,/n",a,c,b);
   }
   else if(b>=c && c>=a)
   {
    printf("%d,%d,%d,/n",b,c,a);

   }
   else if(c>=b && b>=a)
   {
    printf("%d,%d,%d,/n",c,b,a);
   }
 }


if(agdl == 1)
 {
  if(a<=b && b<=c)
   {
    printf("%d,%d,%d,/n",a,b,c);
   }
   else if(b<=a && a<=c)
   {
    printf("%d,%d,%d,/n",b,a,c);
   }
   else if(c<=a && a<=b)
   {
    printf("%d,%d,%d,/n",c,a,b);
   }
   else if(a<=c && c<=b)
   {
    printf("%d,%d,%d,/n",a,c,b);
   }
   else if(b<=c && c<=a)
   {
    printf("%d,%d,%d,/n",b,c,a);
   }
   else if(c<=b && b<=a)
   {
    printf("%d,%d,%d,/n",c,b,a);
   }
  }



return 0;
}
