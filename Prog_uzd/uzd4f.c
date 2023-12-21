#include <stdio.h>
#include <stdlib.h>

int main() {
    int i = 1;
    int sk = 0;
    int st = 0;
    long long fa = 1;

    printf("Ievadat decimalu skaitli,\n");
    scanf("%d", &sk);

    printf("Izvēlaties datu tipu char, int vai long long ievadat : 0, 1, 2");
    scanf("%d", &st);
    if(sk < 1)
    {
     printf("Nepareizs skaitlis\n");
     exit(1);
    }
    if (st == 0 || st == 1 || st == 2) {
        while (i <= sk) {
            // Check for overflow
            if (fa > (fa * i) / i) {
                printf("Jūsu izvēlētais skaitlis ir palielu datu tipam\n");
                exit(1);
            }

            fa *= i;
            i++;
        }

        if (st == 0)
            printf("Faktorials ir = %hhd\n", (char)fa);
        else if (st == 1)
            printf("Faktorials ir = %d\n", (int)fa);
        else if (st == 2)
            printf("Faktorials ir = %lld\n", fa);
    } else {
        printf("Nepareiza datu tipa izvēle\n");
    }

    return 0;
}

