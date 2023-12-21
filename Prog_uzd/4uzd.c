#include <stdio.h>
#include <stdlib.h>

int main()
{
int i = 1;
char sk = 0;
char of = 0;
char st = 3;
char fa = 0;
printf("Ievadat decimalu skaitli,\n");
scanf("%hhd",&sk);

printf("Izvēlaties datu tipu char, int vai long long ievadat : 0, 1, 2");
scanf("%hhd",&st);

 if(st == 0)
 {

  while(i <= sk)
  {

    of = fa;
    fa = fa * i;
    if (fa / i != of)
   {
    printf("Jūsu izvēlētais skaitlis ir palielu datu tipam\n");
    exit(1);
   }
   else;
   {
    i++;
   }
  }
 }
 if(st == 2)
 {
 while(i <= sk)
  {
   long long of = (long long) fa;
   long long fa = (long long) fa * i;
   if (fa / i != of)
   {
    printf("Jūsu izvēlētais skaitlis ir palielu datu tipam\n");
    exit(1);
   }
   else;
   {
   i++;
   }
  }
 }

 if(st == 1)
 {
 while(i <= sk)
  {
   int of = (int) fa;
   int fa = (int) fa * i;
   if (fa / i != of)
   {
    printf("Jūsu izvēlētais skaitlis ir palielu datu tipam\n");
    exit(1);
   }
   else;
   {
    i++;
   }
  }
 }

printf("Faktorials ir = %d\n",fa);
return 0;
}
