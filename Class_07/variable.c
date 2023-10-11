#include <stdio.h>

int main(void)
 {
 int i; // int deklarēšana int ==> 4 byte

 printf("i vērtība bez noteiktas vērības (simbols): %c\n",i);
 printf("i vērtība bez noteiktas vērības (dec): %d\n",i);
 printf("i vērtība bez noteiktas vērības (oct): %#o\n",i);
 printf("i vērtība bez noteiktas vērības (hex): %#x\n",i);
 printf("i vērtība bez noteiktas vērības (baiti): %ld\n",sizeof(i));
 printf("i vērtība bez noteiktas vērības (adrese): %p\n",&i);
 printf("i vērtība bez noteiktas vērības (real): %f\n",i);
 printf("i vērtība bez noteiktas vērības (real): %e\n",i);

// mainīgā loma ir saglabāt un mainīt kautkāda veida informāciju
 i = 25; // visbiežāk  mainīgā vērtības maiņai mēs pielietosim piešķiršanas operāciju
 printf("i vērtība ar noteiktas vērības (simbols): %c\n",i);
 printf("i vērtība ar noteiktas vērības (dec): %d\n",i);
 printf("i vērtība ar noteiktas vērības (oct): %#o\n",i);
 printf("i vērtība ar noteiktas vērības (hex): %#x\n",i);
 printf("i vērtība ar noteiktas vērības (baiti): %ld\n",sizeof(i));
 printf("i vērtība ar noteiktas vērības (adrese): %p\n",&i);
 printf("i vērtība ar noteiktas vērības (real): %f\n",i);
 printf("i vērtība ar noteiktas vērības (real): %e\n",i);

 return 0;
 }
