#include <stdio.h>

int main(int argc, char const *argv[])
{
    float C, F;

    printf("Enter the celsius: \n");
    scanf("%f", &C);

    F = (C * 9 / 5) + 32;

    printf("%.2f celsius is %.2f fahrenheit", C, F);

    return 0;
}
