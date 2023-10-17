#include<stdio.h>

/*Exercício 01*/
int comparar(int num1, int num2){
    if(num1 > num2){
        return 1;
    }else if(num1 < num2){
        return -1;
    }else{
        return 0;
    }
}

main() {
    int num1, num2, resultado;
    printf("Digite o primeiro numero: ");
    scanf("%d", &num1);
    printf("Digite o segundo numero: ");
    scanf("%d", &num2);
    resultado = comparar(num1, num2);
    if(resultado == 1){
        printf("O primeiro numero e maior que o segundo");
    }else if(resultado == -1){
        printf("O segundo numero e maior que o primeiro");
    }else{
        printf("Os numeros sao iguais");
    }
}