#include <stdio.h>

int main()
{
int i = 1;
long long int sk = 0;
int st = 0;

printf("Ievadat decimalu skaitli,\n");
scanf("%lld",&sk);

printf("Izvēlaties datu tipu int, char vai long long ievadat : 0, 1, 2");
scanf("%d",&st);

if(st == 0)
 {
  if(sk <= 12)
  {
   while (i<=sk)
   {
    sk = sk*i;
    i++;
   }
  printf("%d",sk);
  }
  else
  {
   printf("Dota skaitla faktorials ir palielu izveletajam datu tipam\n");
  }
 }

if(st == 1)
 {
  if(sk <= 5)
  {
   while(i<=sk)
   {
    sk = sk*i;
    i++;
   }
  printf("%c",sk);
  }
  else
  {
   printf("Dota skaitla faktorials ir palielu izveletajam datu tipam\n");
  }
 }
if(st == 2)
 {
  if(sk <= 20)
  {
   while(i<=sk)
   {
    sk = sk*i;
    i++;
   }
  printf("%lld",sk);
  }
  else
  {
   printf("Dota skaitla faktorials ir palielu izveletajam datu tipam\n");
  }
 }
return 0;
}
