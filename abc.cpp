#include <stdio.h>
#include <math.h>

const char * grade(int nilai[3])
{
    float nilaiAkhir = 0;

    for (int i = 0; i < 3; i++) {
        nilaiAkhir += nilai[i];
    }

    nilaiAkhir = nilaiAkhir / 3;

    printf("Nilai akhir: %.0f\n", nilaiAkhir);

    if (nilaiAkhir >= 85) {
        return "A";
    }

    if (nilaiAkhir < 85 && nilaiAkhir >= 75) {
        return "B";
    }

    if (nilaiAkhir < 75 && nilaiAkhir >= 65) {
        return "C";
    }

    if (nilaiAkhir < 65 && nilaiAkhir >= 55) {
        return "D";
    }

    return "E";
}

int biggest(int nilai[3])
{
    int biggest = 0;

    for (int i = 0; i < 3; i++) {
        if (nilai[i] > biggest) {
            biggest = nilai[i];
        }
    }

    return biggest;
}

float volume_bola(int jarijari)
{
    return (4  * M_PI * (jarijari * jarijari * jarijari)) / 3;
}

int main()
{
    int nilai[3];
    int nilaiTemp;
    int nilaiKe = 1;
    int jarijari;

    for (int i = 0; i < 3; i++) {
        printf("Input nilai %i:\n", nilaiKe);

        scanf("%i", &nilaiTemp);

        nilai[i] = nilaiTemp;

        nilaiKe++;
    }

    printf("Grade: %s\n", grade(nilai));

    printf("Nilai tertinggi: %i\n", biggest(nilai));

    printf("Input jari-jari bola:\n");

    scanf("%i", &jarijari);

    printf("Volume bola: %f\n", volume_bola(jarijari));

    return 0;
}
