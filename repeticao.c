#include <stdio.h>

main() {
    /*Exercício 01*/
    /*int num, cont = 0;

    printf("Digite um numero: ");
    scanf("%d", &num);

    while (cont <= num) {
        printf("%d\n", cont);
        cont++;
    }*/

    /*Exercício 02*/
    /*int num;

    printf("Digite um numero: ");
    scanf("%d", &num);

    do {
        printf("%d\n", num);
        num--;
    } while (num >= 0);*/
    
    /*Exercício 03*/
    /*int num;

    printf("Digite um numero: ");
    scanf("%d", &num);

    
    for (int i = 1; num >= i; i += 2) {
        printf("\n%d", i);
    }*/

    /*Exercício 04*/
    /*int cont = 1;

    do {
        printf("%d\n", cont * 3);
        cont++;
    } while(cont <= 5);*/

    /*Exercício 05*/
    /*int cont = 0, soma = 0;
    while (cont <= 100) {
        if (cont % 2 == 0) {
            soma += cont;
        }
        cont++;
    }

    printf("A soma dos 50 primeiros numeros pares e: %d", soma);*/

    /*Exercício 06*/
    /*int fruta, preco, quantidade, total, precoTotal = 0;
    char continuar;

    do {
        printf("Digite o codigo da fruta: ");
        scanf("%d", &fruta);

        if (fruta == 0) {
            break;
        }
        
        switch(fruta) {
            case 1:
                preco = 5;
                printf("Abacaxi\n");

                printf("Digite a quantidade: ");
                scanf("%d", &quantidade);

                total = preco * quantidade;
                break;
            case 2:
                preco = 1;
                printf("Maca\n");

                printf("Digite a quantidade: ");
                scanf("%d", &quantidade);

                total = preco * quantidade;
                break;
            case 3:
                preco = 3;
                printf("Pera\n");

                printf("Digite a quantidade: ");
                scanf("%d", &quantidade);

                total = preco * quantidade;
                break;
        default:
            printf("Codigo invalido\n");
            break;
        }

            precoTotal += total;
            fflush(stdin);
            printf("Deseja continuar? (S/N)");
            scanf("%c", &continuar);

    } while (continuar == 'S' || continuar == 's');

    printf("O preco total e: %d", precoTotal);*/

    /*Exercício 07*/
    char sexo, corOlhos, corCabelo;
    int idade, contGeral = 0, contEspecifico = 0, contF = 0, contM = 0, continuar;
    float salario, porcentagem;

    do {
        contGeral++;
        printf("Digite o sexo: ");
        scanf("%c", &sexo);

        if (sexo == 'F' || sexo == 'f') {
            contF++;
        } else if (sexo == 'M' || sexo == 'm') {
            contM++;
        } else {
            printf("Sexo invalido\n");
            break;
        }

        printf("Digite a idade: ");
        scanf("%d", &idade);
        fflush(stdin);

        printf("Digite a cor dos olhos (a para azuis, v para verdes, c para castanhos e p para pretos): ");
        scanf("%c", &corOlhos);

        fflush(stdin);

        if((corOlhos != 'A' || corOlhos != 'a') && (corOlhos != 'V' || corOlhos != 'v') && (corOlhos != 'C' || corOlhos != 'c') && (corOlhos != 'P' || corOlhos != 'p')) {
            printf("Cor invalida\n");
            break;
        }


        printf("Digite a cor do cabelo (l para loiroa, c para castanhos, p para pretos e r para ruivos): ");
        scanf("%c", &corCabelo);

        if((corCabelo != 'L' || corCabelo != 'l') && (corCabelo != 'C' || corCabelo != 'c') && (corCabelo != 'P' || corCabelo != 'p') && (corCabelo != 'R' || corCabelo != 'r')) {
            printf("Cor invalida\n");
            break;
        }

        printf("Digite o salario: ");
        scanf("%f", &salario);

        if (sexo == 'F' || sexo == 'f') {
            if (idade >= 18 && idade <= 35) {
                if (corOlhos == 'C' || corOlhos == 'c') {
                    if (corCabelo == 'C' || corCabelo == 'c') {
                        if (salario >= 1.320) {
                            contEspecifico++;
                        }
                    }
                }
            }
        }

    } while (continuar != -1);

    porcentagem = (contEspecifico * 100) / contGeral;

    printf("A porcentagem de pessoas que atendem aos requisitos e: %.2f", porcentagem);

    return 0;
}