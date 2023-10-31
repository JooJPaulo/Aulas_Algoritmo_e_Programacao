#include<stdio.h>
#include<math.h>

main() {
    float lado1, lado2, lado3, angulo1, angulo2, angulo3;

    printf("Digite o primeiro lado do triangulo: ");
    scanf("%f", &lado1);

    printf("Digite o segundo lado do triangulo: ");
    scanf("%f", &lado2);

    printf("Digite o terceiro lado do triangulo: ");
    scanf("%f", &lado3);

    angulo1 = acos((lado2 * lado2 + lado3 * lado3 - lado1 * lado1) / (2 * lado2 * lado3));
    angulo2 = acos((lado1 * lado1 + lado3 * lado3 - lado2 * lado2) / (2 * lado1 * lado3));
    angulo3 = acos((lado1 * lado1 + lado2 * lado2 - lado3 * lado3) / (2 * lado1 * lado2));

    angulo1 = angulo1 * 180 / M_PI;
    angulo2 = angulo2 * 180 / M_PI;
    angulo3 = angulo3 * 180 / M_PI;

    if (angulo1 == 90 || angulo2 == 90 || angulo3 == 90) {
        printf("O triangulo e retangulo\n");
    } else if (angulo1 > 90 || angulo2 > 90 || angulo3 > 90) {
        printf("O triangulo e obtusangulo\n");
    } else if (angulo1 < 90 && angulo2 < 90 && angulo3 < 90) {
        printf("O triangulo e acutangulo\n");
    } else {
        printf("Nao e possivel determinar o tipo do triangulo\n");
    }

    return 0;
}