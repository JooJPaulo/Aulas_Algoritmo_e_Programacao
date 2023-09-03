#include<stdio.h>

main() {
    /*Exerc�cio 1*/
    /*int num;

    printf("Digite um numero: ");
    scanf("%d", &num);

    if (num >= 0) {
        printf("A raiz quadrada de %d e %.2f\n", num, sqrt(num));
    }  else {
        printf("O quadrado de %d e %d\n", num, num * num);
    }*/
    
    /*Exerc�cio 2*/

    /*int num1, num2, num3, num4, maior, menor;

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

    printf("O maior numero e %d e o menor numero e %d\n", maior, menor);*/

    /*if ((num1 > num2 && num1 > num3 && num1 > num4) && (num2 < num3 && num2 < num4) && (num3 < num4)) {
        printf("O maior numero e %d e o menor numero e %d\n", num1, num2);
    } else if ((num1 > num2 && num1 > num3 && num1 > num4) && (num3 < num2 && num3 < num4) && (num2 < num4)) {
        printf("O maior numero e %d e o menor numero e %d\n", num1, num3);
    } else if ((num1 > num2 && num1 > num3 && num1 > num4) && (num4 < num2 && num4 < num3) && (num3 < num2)) {
        printf("O maior numero e %d e o menor numero e %d\n", num1, num4);
    }*/

    /*Exercício 3*/
    /*int num1, num2, num3;

    printf("Digite o primeiro numero: ");
    scanf("%d", &num1);

    printf("Digite o segundo numero: ");
    scanf("%d", &num2);

    printf("Digite o terceiro numero: ");
    scanf("%d", &num3);
    
    if (num1 > num2) {
        int temp = num1;
        num1 = num2;
        num2 = temp;
    }
    if (num2 > num3) {
        int temp = num2;
        num2 = num3;
        num3 = temp;
    }
    if (num1 > num2) {
        int temp = num1;
        num1 = num2;
        num2 = temp;
    }

    printf("Os numeros digitados, em ordem crescente, foram: %d %d %d\n", num1, num2, num3);*/

    /*Exercício 4*/
    /*int num1, num2, num3;

    printf("Digite o primeiro numero: ");
    scanf("%d", &num1);

    printf("Digite o segundo numero: ");
    scanf("%d", &num2);

    printf("Digite o terceiro numero: ");
    scanf("%d", &num3);

    if (num1 < num2) {
        int temp = num1;
        num1 = num2;
        num2 = temp;
    }
    if (num2 < num3) {
        int temp = num2;
        num2 = num3;
        num3 = temp;
    }
    
    if (num1 < num2) {
        int temp = num1;
        num1 = num2;
        num2 = temp;
    }

    printf("Os numeros digitados, em ordem decrescente, foram: %d %d %d\n", num1, num2, num3);*/
    
    /*Exercício 5*/
    /*int num;

    printf("Digite um numero: ");
    scanf("%d", &num);

    if ((num == 5 || num == 200 || num == 400) && (500 <= num <= 1000)) {
        printf("O numero digitado foi %d, que e igual a 5, 200 ou 400 e esta entre 500 e 1000", num);
    } else {
    printf("O numero digitado foi %d, que nao e igual a 5, 200 ou 400 e nao esta entre 500 e 1000", num);
    }*/
    
    /*Exercício 6*/
    /*int num;

    printf("Digite um numero: ");
    scanf("%d", &num);

    if ((num % 2) == 0) {
        printf("O numero digitado foi %d, que e par", num);
    }*/
    
    /*Exercício 7*/
    /*int nota1, nota2, nota3, media;

    printf("Digite a primeira nota: ");
    scanf("%d", &nota1);

    printf("Digite a segunda nota: ");
    scanf("%d", &nota2);
    
    printf("Digite a terceira nota: ");
    scanf("%d", &nota3);

    media = (nota1 + nota2 + nota3) / 3;
    nota3 = nota3 * 2;

    if (media >= 7) {
        printf("A media do aluno foi %d e ele foi aprovado", media);
    } else {
        printf("A media do aluno foi %d e ele foi reprovado", media);
    }*/

    /*Exercício 8*/
    /*int idade, tempoServico;

    printf("Digite a idade: ");
    scanf("%d", &idade);

    printf("Digite o tempo de servico: ");
    scanf("%d", &tempoServico);

    if (idade >= 65 || tempoServico >= 30 || (idade >= 60 && tempoServico >= 25)) {
        printf("O funcionario pode se aposentar");
    } else {
        printf("O funcionario nao pode se aposentar");
    }*/

    /*Exercício 9*/
    float salarioAtual, aumento, salarioNovo;
    int tempoServico;

    printf("Digite o salario atual: ");
    scanf("%f", &salarioAtual);

    printf("Digite o tempo de servico: ");
    scanf("%d", &tempoServico);

    return 0;
}
