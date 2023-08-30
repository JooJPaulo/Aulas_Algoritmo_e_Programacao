#include<stdio.h>

main() {
    /*Exercício 1*/
    /*int num;

    printf("Digite um numero: ");
    scanf("%d", &num);

    if (num >= 0) {
        printf("A raiz quadrada de %d e %.2f\n", num, sqrt(num));
    }  else {
        printf("O quadrado de %d e %d\n", num, num * num);
    }*/
    
    /*Exercício 2*/
    int num1, num2, num3, num4, maior, menor;

    printf("Digite o primeiro numero: ");
    scanf("%d", &num1);

    printf("Digite o segundo numero: ");
    scanf("%d", &num2);

    printf("Digite o terceiro numero: ");
    scanf("%d", &num3);

    printf("Digite o quarto numero: ");
    scanf("%d", &num4);
    fflush(stdin);

    if(num1 > num2 && num1 > num3 && num1 > num4){
        maior = num1;
    } else if (num2 > num1 && num2 > num3 && num2 > num4) {
        maior = num2;
    } else if (num3 > num1 && num3 > num2 && num3 > num4) {
        maior = num3;
    } else {
        maior = num4;
    }
    
    if(num1 < num2 && num1 < num3 && num1 < num4){
        menor = num1;
    } else if (num2 < num1 && num2 < num3 && num2 < num4) {
        menor = num2;
    } else if (num3 < num1 && num3 < num2 && num3 < num4) {
        menor = num3;
    } else {
        menor = num4;
    }

    printf("O maior numero e %d e o menor numero e %d\n", maior, menor);


    /*if ((num1 > num2 && num1 > num3 && num1 > num4) && (num2 < num3 && num2 < num4) && (num3 < num4)) {
        printf("O maior numero e %d e o menor numero e %d\n", num1, num2);
    } else if ((num1 > num2 && num1 > num3 && num1 > num4) && (num3 < num2 && num3 < num4) && (num2 < num4)) {
        printf("O maior numero e %d e o menor numero e %d\n", num1, num3);
    } else if ((num1 > num2 && num1 > num3 && num1 > num4) && (num4 < num2 && num4 < num3) && (num3 < num2)) {
        printf("O maior numero e %d e o menor numero e %d\n", num1, num4);
    }*/

    
    

    return 0;
}