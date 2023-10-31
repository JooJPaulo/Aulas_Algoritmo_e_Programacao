#include<stdio.h>

main() {
    float lado1, lado2, lado3;

    printf("Digite o primeiro lado do triangulo: ");
    scanf("%f", &lado1);

    printf("Digite o segundo lado do triangulo: ");
    scanf("%f", &lado2);

    printf("Digite o terceiro lado do triangulo: ");
    scanf("%f", &lado3);

    if (lado1 == lado2 && lado2 == lado3) {
        printf("O triangulo e equilatero\n");
    } else if (lado1 == lado2 || lado2 == lado3 || lado1 == lado3) {
        printf("O triangulo e isosceles\n");
    } else if (lado1 != lado2 && lado2 != lado3 && lado1 != lado3) {
        printf("O triangulo e escaleno\n");
    } else {
        printf("Nao e possivel determinar o tipo do triangulo\n");
    }

    return 0;
}