#include <stdio.h>

main () {

    /*Exercício 01*/
    /*int ddd;

    printf("Digite o DDD: ");
    scanf("%d", &ddd);

    switch (ddd) {
    case 61:
        printf("Brasilia\n");
        break;
    case 71:
        printf("Salvador\n");
        break;
    case 11:
        printf("Sao Paulo\n");
        break;
    case 21:
        printf("Rio de Janeiro\n");
        break;
    case 32:
        printf("Juiz de Fora\n");
        break;
    case 19:
        printf("Campinas\n");
        break;
    case 27:
        printf("Vitoria\n");
        break;
    case 31:
        printf("Belo Horizonte\n");
        break;
    default:
        printf("DDD nao cadastrado\n");
        break;
    }*/

    /*Exercício 02*/
    /*int codigoCardapio, quantidade;
    float preco;
    
    printf("Digite o codigo do produto: ");
    scanf("%d", &codigoCardapio);

    switch (codigoCardapio) {
        case 100:
            preco = 10.10;
            printf("Cachorro quente\n");
            printf("Digite a quantidade: ");
            scanf("%d", &quantidade);

            printf("Valor total: %.2f\n", preco * quantidade);
            break;
        case 101:
            preco = 8.30;
            printf("Bauru simples\n");
            printf("Digite a quantidade: ");    
            scanf("%d", &quantidade);

            printf("Valor total: %.2f\n", preco * quantidade);
            break;
        case 102:
            preco = 8.50;
            printf("Bauru com ovo\n");
            printf("Digite a quantidade: ");
            scanf("%d", &quantidade);

            printf("Valor total: %.2f\n", preco * quantidade);
            break;
        case 103:
            preco = 12.50;
            printf("Hamburguer\n");
            printf("Digite a quantidade: ");
            scanf("%d", &quantidade);

            printf("Valor total: %.2f\n", preco * quantidade);
            break;
        case 104:
            preco = 13.25;
            printf("Cheeseburguer\n");
            printf("Digite a quantidade: ");
            scanf("%d", &quantidade);

            printf("Valor total: %.2f\n", preco * quantidade);
            break;
        default:
            printf("Codigo nao cadastrado\n");
            break;
    }*/
    
    /*Exercício 03*/
    int prato, bebida, sobremesa, calorias;
    
    printf("Digite o prato: ");
    scanf("%d", &prato);

    printf("Digite a bebida: ");
    scanf("%d", &bebida);

    printf("Digite a sobremesa: ");
    scanf("%d", &sobremesa);

    switch (prato) {
        case 1:
            printf("Vegetariano\n");
            calorias = 180;
            break;
        case 2:
            printf("Peixe\n");
            calorias = 230;
            break;
        case 3:
            printf("Frango\n");
            calorias = 250;
            break;
        case 4:
            printf("Carne\n");
            calorias = 350;
            break;
        default:
            printf("Prato invalido\n");
            break;
    }
    switch (bebida) {
        case 1:
            printf("Cha\n");
            calorias += 20;
            break;
        case 2:
            printf("Suco de laranja\n");
            calorias += 70;
            break;
        case 3:
            printf("Suco de melao\n");
            calorias += 100;
            break;
        case 4:
            printf("Refrigerante diet\n");
            calorias += 65;
            break;
        default:
            printf("Bebida invalida\n");
            break;
    }
    switch(sobremesa) {
        case 1:
            printf("Abacaxi\n");
            calorias += 75;
            break;
        case 2:
            printf("Sorvete diet\n");
            calorias += 110;
            break;
        case 3:
            printf("Mousse diet\n");
            calorias += 170;
            break;
        case 4:
            printf("Mousse chocolate\n");
            calorias += 200;
            break;
        default:
            printf("Sobremesa invalida\n");
            break;
    }

    printf("Total de calorias: %d\n", calorias);

    return 0;
}