#include <stdio.h>


//https://www.geeksforgeeks.org/left-shift-right-shift-operators-c-cpp/ 
//https://www.prepbytes.com/blog/c-programming/c-program-to-convert-decimal-numbers-to-binary-numbers/

int main(void)
{
 int i = 0;
 unsigned char a;
 unsigned char result;
 printf("Ievadat 8 bitu naturālu skaitli ");
 scanf("%hhu",&a);
 printf("\n");
 unsigned char b;
 b = a;
 for (i=0; i < 8; i++)
 {
  a = b;
  a = a << i;
  a = a >> 7;
  result = a;
  printf("%d",result);
 }
 printf("\n");
 return 0;
}
