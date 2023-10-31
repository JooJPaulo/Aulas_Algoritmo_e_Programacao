#include <stdio.h>

main() {
    float x, y, origem, eixoX, eixoY, q1, q2, q3, q4;

    printf("Digite o valor de X: ");
    scanf("%f", &x);
    printf("Digite o valor de Y: ");
    scanf("%f", &y);

    origem = (x == 0 && y == 0);
    eixoX = (x != 0 && y == 0);
    eixoY = (x == 0 && y != 0);
    q1 = (x > 0 && y > 0);
    q2 = (x < 0 && y > 0);
    q3 = (x < 0 && y < 0);
    q4 = (x > 0 && y < 0);
    
    if (origem) {
        printf("O ponto esta na origem.\n");
    } else if (eixoX) {
        printf("O ponto (%.1f, %.1f) esta no eixo X.\n", x, y);
    } else if (eixoY) {
        printf("O ponto (%.1f, %.1f) esta no eixo Y.\n", x, y);
    } else if (q1) {
        printf("O ponto (%.1f, %.1f) esta no primeiro quadrante.\n", x, y);
    } else if (q2) {
        printf("O ponto (%.1f, %.1f) esta no segundo quadrante.\n", x, y);
    } else if (q3) {
        printf("O ponto (%.1f, %.1f) esta no terceiro quadrante.\n", x, y);
    } else if (q4) {
        printf("O ponto (%.1f, %.1f) esta no quarto quadrante.\n", x, y);
    }

    return 0;
}