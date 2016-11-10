#include <stdio.h>

void pecahin_uang(long uang, int &limapuluhribu, int &duapuluhribu, int &limaribu)
{
    if (0 != uang % 5000) {
        printf("Uang harus kelipatan 5000!\n");
    } else {
        while (uang > 0) {
            while (uang - 50000 >= 0 || (uang % 50000 == 0 && uang > 0)) {
                uang -= 50000;

                limapuluhribu++;
            }

            while (uang - 20000 >= 0 || (uang % 20000 == 0 && uang > 0)) {
                uang -= 20000;

                duapuluhribu++;
            }

            while (uang - 5000 >= 0 || (uang % 5000 == 0 && uang > 0)) {
                uang -= 5000;

                limaribu++;
            }
        }
    }
}

int main()
{
    int limapuluhribu = 0;
    int duapuluhribu = 0;
    int limaribu = 0;
    int uang;

    printf("Input uang:\n");

    scanf("%i", &uang);

    pecahin_uang(uang, limapuluhribu, duapuluhribu, limaribu);

    printf("50.000 %i lembar\n", limapuluhribu);
    printf("20.000 %i lembar\n", duapuluhribu);
    printf("5.000 %i lembar\n", limaribu);

    return 0;
}
