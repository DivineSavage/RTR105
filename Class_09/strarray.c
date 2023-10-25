#include <stdio.h>


int main()
{

    int size = 0;
    int counter = 0;
    
    char name[60];
    printf("Enter a sentence: ");
    fgets(name, sizeof(name), stdin);
    puts(name);
    for (int i = 0; i < 61; i++ )
    {
      size = size + 1;
      if (name[i] == 32 || name[i] == "\0")
        {
         if (size > 5)
           {
            counter = counter + 1;
           }
         size = 0;


        }
      
    }
    printf("Vārdu skaits kas pārsniedz 5: %d", counter);
    printf("\n");
    return 0;
    


}

