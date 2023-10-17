#include<stdio.h>

/*Exercício 01*/
/*int comparar(int num1, int num2){
    if(num1 > num2){
        return 1;
    }else if(num1 < num2){
        return -1;
    }else{
        return 0;
    }
}*/

/*Exercício 02*/
int meses(int mes){
    switch(mes){
        case 1:
            printf("Janeiro");
            break;
        case 2:
            printf("Fevereiro");
            break;
        case 3:
            printf("Marco");
            break;
        case 4:
            printf("Abril");
            break;
        case 5:
            printf("Maio");
            break;
        case 6:
            printf("Junho");
            break;
        case 7:
            printf("Julho");
            break;
        case 8:
            printf("Agosto");
            break;
        case 9:
            printf("Setembro");
            break;
        case 10:
            printf("Outubro");
            break;
        case 11:
            printf("Novembro");
            break;
        case 12:
            printf("Dezembro");
            break;
        default:
            printf("Mes invalido");
            break;
    }
}

main() {
    /*int num1, num2, resultado;
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
    }*/

    int mes;
    printf("Digite o numero do mes: ");
    scanf("%d", &mes);
    meses(mes);

}