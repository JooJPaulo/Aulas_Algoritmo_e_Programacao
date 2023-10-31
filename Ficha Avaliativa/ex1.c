#include<stdio.h>


main() {
    float x, y;

    printf("Digite um numero: ");
    scanf("%f", &x);

    y = ((5 + x) + 3) / sqrt((x * x) - 16);

    printf("O resultado da expressao e: %f", y);

    return 0;
}