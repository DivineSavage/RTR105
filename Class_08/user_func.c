#include <stdio.h>
#include <time.h>
#include <stdlib.h>


void generator(void);


int main(void)
{
 printf("funkcija generator()\n")

 return 0;
}

void generator(void);
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
}
