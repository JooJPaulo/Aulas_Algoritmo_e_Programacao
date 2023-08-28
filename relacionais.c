#include<stdio.h>

main() {
    int num1, num2/*, resultado*/;

    printf("Digite o primeiro numero: ");
    scanf("%d", &num1);
    
    printf("Digite o segundo numero: ");
    scanf("%d", &num2);

    /*resultado = num1 == num2;
    printf("Resultado: %d\n", resultado);

    resultado = num1 != num2;
    printf("Resultado: %d\n", resultado);

    resultado = num1 >= num2;
    printf("Resultado: %d\n", resultado);

    resultado = num1 =< num2;
    printf("Resultado: %d\n", resultado);*/

    if (num1 == num2) {
        printf("Os numeros sao iguais\n");
    } else {
        printf("Os numeros sao diferentes\n");
    }

    return 0;
}