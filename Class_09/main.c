#include "foo.h"

int main(void)
{
    char *name_main = "bar";
    printf("name_main atrašanās vieta: %s\n", name_main)
    printf("name_main vertiba pirms foo izpildisana: %s\n", name_main)


    int id_main = 42;
    printf("id_main atrašanās vieta: %s\n", %id_main)
    printf("id_main vertiba pirms foo izpildisana: %s\n", id_main)

   foo(id_main, name_main)

    printf("id_main atrašanās vieta: %s\n", %id_main)
    printf("id_main vertiba pec foo izpildisana: %s\n", id_main)

    printf("id_main atrašanās vieta: %s\n", name_main)
    printf("id_main vertiba pec foo izpildisana: %s\n", name_main)


    foo(id_main, name_main);
    return 0;
}
