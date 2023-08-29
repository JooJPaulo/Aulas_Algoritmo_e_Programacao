#include<stdio.h>

main() {
    /*int idade;

    printf("Digite a sua idade: ");
    scanf("%d", &idade);

    if (idade >= 18) {
        printf("Voce e maior de idade\n");
    } else {
        printf("Voce e menor de idade\n");
    }*/

    /*float salario;

    printf("Digite o seu salario: ");
    scanf("%f", &salario);

    if (salario >= 1320) {
        printf("Voce recebe pelo menos um salario minimo\n");
    } else {
        printf("Voce recebe menos que um salario minimo\n");
    }*/

    /*float altura;

    printf("Digite a sua altura: ");
    scanf("%f", &altura);

    if (altura >= 1.80) {
        printf("Voce e alto\n");
    } else {
        printf("Voce e baixo\n");
    }*/

    /*float peso;

    printf("Digite o seu peso: ");
    scanf("%f", &peso);

    if (peso >= 70) {
        printf("Voce esta acima do peso\n");
    } else {
        printf("Voce esta no peso ideal\n");
    }*/

    float nota1, nota2, media;

    printf("Digite a primeira nota: ");
    scanf("%f", &nota1);

    printf("Digite a segunda nota: ");
    scanf("%f", &nota2);

    media = (nota1 + nota2) / 2;

    if (media >= 7) {
        printf("Voce foi aprovado\n");
    } else if (media >= 4 && media < 7) {
        printf("Voce esta de recuperacao\n");
    } else {
        printf("Voce foi reprovado\n");
    }  

    return 0;
}