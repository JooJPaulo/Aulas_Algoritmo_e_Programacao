#include<stdio.h>

main() {
    /*Exercício 01*/
    /*int A[6] = {1, 0, 5, -2, -5, 7}, soma = 0;

    for (int i = 0; i < 6; i++) {
        printf("A[%d] = %d\n", i, A[i]);
    }

    soma = A[0] + A[1] + A[5];
    printf("Soma: %d\n", soma);

    A[4] = 100;

    for (int i = 0; i < 6; i++) {
        printf("A[%d] = %d\n", i, A[i]);
    }*/

    /*Exercício 02*/
    /*int vet[6];

    for (int i = 0; i < 6; i++) {
        printf("Digite um valor: ");
        scanf("%d", &vet[i]);
    }

    for (int i = 0; i < 6; i++) {
        printf("vet[%d] = %d\n", i, vet[i]);
    }*/

    /*Exercício 03*/
    /*float vet[10], vetQuadrados[10];

    for (int i = 0; i < 10; i++) {
        printf("Digite um valor: ");
        scanf("%f", &vet[i]);
    }

    for (int i = 0; i < 10; i++) {
        vetQuadrados[i] = vet[i] * vet[i];
    }

    for (int i = 0; i < 10; i++) {
        printf("vet[%d] = %.2f\n", i, vet[i]);
    }

    for (int i = 0; i < 10; i++) {
        printf("vetQuadrados[%d] = %.2f\n", i, vetQuadrados[i]);
    }*/

    /*Exercício 04*/
    /*int vet[8], x, y, soma = 0;

    for (int i = 0; i < 8; i++) {
        printf("Digite um valor: ");
        scanf("%d", &vet[i]);
    }

    printf("Digite o valor de x: ");
    scanf("%d", &x);

    printf("Digite o valor de y: ");
    scanf("%d", &y);

    soma = vet[x] + vet[y];

    if (x > 7 || y > 7) {
        printf("Posicao X ou Posicao Y inexistente\n");
    } else {
        printf("Soma: %d\n", soma);
    }*/

    /*Exercício 05*/
    /*int vet[10], pares = 0;

    for (int i = 0; i < 10; i++) {
        printf("Digite um valor: ");
        scanf("%d", &vet[i]);

        if (vet[i] % 2 == 0) {
            pares++;
        }
    }

    printf("\nQuantidade de pares: %d\n\n", pares);
    for (int i = 0; i < 10; i++) {
        if (vet[i] % 2 == 0) {
            printf("vet[%d] = %d\n", i, vet[i]);
        }
    }*/

    /*Exercício 06*/
    /*int vet[10], maior = 0, menor = 0;

    for (int i = 0; i < 10; i++) {
        printf("Digite um valor: ");
        scanf("%d", &vet[i]);

        if (i == 0) {
            maior = vet[i];
            menor = vet[i];
        } else {
            if (vet[i] > maior) {
                maior = vet[i];
            } else if (vet[i] < menor) {
                menor = vet[i];
            }
        }
    }

    printf("\nMaior: %d\n", maior);
    printf("Menor: %d\n", menor);*/

    /*Exercício 07*/
    /*int vet [10], maior = 0, posicaoMaior = 0;

    for (int i = 0; i < 10; i++) {
        printf("Digite um valor: ");
        scanf("%d", &vet[i]);

        if (i == 0) {
            maior = vet[i];
            posicaoMaior = i;
        } else {
            if (vet[i] > maior) {
                maior = vet[i];
                posicaoMaior = i;
            }
        }
    }

    printf("\nMaior: %d\n", maior);
    printf("Posicao: %d\n", posicaoMaior);*/

    /*Exercício 08*/
    /*int vet[6];

    for (int i = 0; i < 6; i++) {
        printf("Digite um valor: ");
        scanf("%d", &vet[i]);
    }

    for (int i = 5; i >= 0; i--) {
        printf("vet[%d] = %d\n", i, vet[i]);
    }*/

    /*Exercício 09*/
    /*int vet[6];

    for (int i = 0; i < 6; i++) {
        printf("Digite um valor: ");
        scanf("%d", &vet[i]);
    }

    for (int i = 5; i >= 0; i--) {
        if (vet[i] % 2 == 0) {
            printf("vet[%d] = %d\n", i, vet[i]);
        }
    }*/

    /*Exercício 10*/
    /*int notas[15], soma = 0;
    float media = 0;

    for (int i = 0; i < 15; i++) {
        printf("Digite a nota do aluno %d: ", i + 1);
        scanf("%d", &notas[i]);

        soma += notas[i];
    }

    media = soma / 15.0;

    printf("\nMedia: %.2f\n", media);*/

    /*Exercício 11*/
    /*int vet[10], soma = 0, negativos = 0;

    for (int i = 0; i < 10; i++) {
        printf("Digite um valor: ");
        scanf("%d", &vet[i]);

        if (vet[i] > 0) {
            soma += vet[i];
        } else {
            negativos++;
        }
    }

    printf("\nSoma dos valores positivos: %d\n", soma);
    printf("Quantidade de valores negativos: %d\n", negativos);*/

    /*Exercício 12*/
    /*int vet[5], maior, menor;
    float media = 0;

    for (int i = 0; i < 5; i++) {
        printf("Digite um valor: ");
        scanf("%d", &vet[i]);

        if (i == 0) {
            maior = vet[i];
            menor = vet[i];
        } else {
            if (vet[i] > maior) {
                maior = vet[i];
            }
            if (vet[i] < menor) {
                menor = vet[i];
            }
        }

        media += vet[i];
    }

    media /= 5.0;

    printf("\nMaior: %d\n", maior);
    printf("Menor: %d\n", menor);
    printf("Media: %.2f\n", media);*/

    /*Exercício 13*/
    int vet[5], maior, menor, posicaoMaior, posicaoMenor;

    for (int i = 0; i < 5; i++) {
        printf("Digite um valor: ");
        scanf("%d", &vet[i]);

        if (i == 0) {
            maior = vet[i];
            menor = vet[i];
            posicaoMaior = i;
            posicaoMenor = i;
        } else {
            if (vet[i] > maior) {
                maior = vet[i];
                posicaoMaior = i;
            }
            if (vet[i] < menor) {
                menor = vet[i];
                posicaoMenor = i;
            }
        }
    }

    printf("\nMaior: %d\n", maior);
    printf("Posicao: %d\n", posicaoMaior);
    printf("Menor: %d\n", menor);
    printf("Posicao: %d\n", posicaoMenor);

    return 0;
}