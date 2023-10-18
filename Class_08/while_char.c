#include <stdio.h>
#include <time.h>
#include <stdlib.h>


int main(void)
{
char i = 1;
int flag = 1;
int grauds;
int counter = 0;
grauds = time(NULL);
srand(grauds);
while( flag )
  {

  //printf("i = %d\n",i++);
  counter++; 
  flag = rand();
  }

printf("counter = %d",counter);
return 0;
}

