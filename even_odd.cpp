#include <stdio.h>
#include <stdbool.h>

bool is_even(int number)
{
    return 0 == number % 2;
}

int main()
{
    int number;

    printf("Input sebuah bilangan:\n");

    scanf("%i", &number);

    if (is_even(number)) {
        printf("Bilangan genap!\n");
    } else {
        printf("Bilangan ganjil!\n");
    }

    return 0;
}
