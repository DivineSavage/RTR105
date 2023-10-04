#include <stdio.h>

int main ()
{
 char str [80];
 int i;
 int gads = 2023;
 int age;
 int dzg = gads - age;
 printf("Ievadi Vārdu, Uzvārdu ");
 scanf ("%79s",str);
 printf("Ievadi savu vecumu");
 scanf("%d",&age);
 printf("Godājamais/ā %s, Dzimis ",dzg);
 return 0;

}
