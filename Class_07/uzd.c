#include <stdio.h>

int main(void)
 {
 long int c = 0;
 long int i = 0;
 long int b = 0;
 printf("Ievadat pirmo reizināmo, ");
 scanf("%ld",&b);
 printf("\n");
 printf("Ievadat otro reizināmo, ");
 scanf("%ld",&i);
 printf("\n");
 c = i * b;
 printf("Reizinājums ir %ld",c);
 printf("\n");

 return 0;
 }
