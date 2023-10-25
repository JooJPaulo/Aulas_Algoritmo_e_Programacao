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
/*int meses(int mes){
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
}*/
  
/*Exercício 03*/
/*float conversaoTemperatura(float f) {
    float c;
    c = (f - 32) * 5 / 9;
    return c;
}*/

/*Exercício 04*/
/*float medidasCilindro(float raio, float altura) {
    float pi = 3.14, volume;
    volume = pi * (raio * raio) * altura;
    return volume;
}*/

/*Exercício 05*/
/*float volumeEsfera(float raio) {
    float pi = 3.14, volume;
    volume = (4 / (3 * pi) * (raio * raio * raio));
    return volume;
}*/

/*Exercício 06*/
/*float imc(float peso, float altura) {
    float imc;
    imc = peso / (altura * altura);
    return imc;
}*/

/*Exercício 07*/
float totalGasto(float total, int opcaoPagamento) {
    float totalGasto;
    switch(opcaoPagamento) {
        case 1:
            totalGasto = opcao1(total);
            break;
        case 2:
            totalGasto = opcao2(total);
            break;
        case 3:
            totalGasto = opcao3(total);
            break;
        default:
            printf("Opcao invalida");
            break;
    }
    return totalGasto;
}

float opcao1(float total) {
    float totalGasto;
    totalGasto = total - (total * 0.1);
    return totalGasto;
}

float opcao2(float total) {
    float totalGasto;
    totalGasto = total/2;
    return totalGasto;
}

float opcao3(float total, int parcelas, float juros) {
    float totalGasto;
    float juros = 0.3;

    if(total > 100){
        totalGasto = total + (total * juros);
    }else{
        totalGasto = total;
    }
    return totalGasto;    
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

    /*int mes;
    printf("Digite o numero do mes: ");
    scanf("%d", &mes);
    meses(mes);*/

    /*float f, c;
    printf("Digite a temperatura em Fahrenheit: ");
    scanf("%f", &f);

    c = conversaoTemperatura(f);
    printf("A temperatura em Celsius e: %.2f", c);*/

    /*float raio, altura, volume;
    printf("Digite o raio do cilindro: ");
    scanf("%f", &raio);

    printf("Digite a altura do cilindro: ");
    scanf("%f", &altura);

    volume = medidasCilindro(raio, altura);
    printf("O volume do cilindro e: %.2f", volume);*/

    /*float raio, volume;
    printf("Digite o raio da esfera: ");
    scanf("%f", &raio);

    volume = volumeEsfera(raio);
    printf("O volume da esfera e: %.2f", volume);*/

    /*float peso, altura, imc;
    printf("Digite o peso: ");
    scanf("%f", &peso);

    printf("Digite a altura: ");
    scanf("%f", &altura);

    imc = imc(peso, altura);
    printf("O IMC e: %.2f", imc);*/

    float total, totalGasto;
    int opcaoPagamento, parcelas;
    float juros = 0.3;

    printf("Digite o valor total da compra: ");
    scanf("%f", &total);

    printf("Digite a opcao de pagamento: ");
    scanf("%d", &opcaoPagamento);

    totalGasto = totalGasto(total, opcaoPagamento);
    printf("O total gasto e: %.2f", totalGasto);

    if(opcaoPagamento == 3){
        printf("Digite o numero de parcelas: ");
        scanf("%d", &parcelas);
        totalGasto = totalGasto(total, opcaoPagamento, parcelas, juros);
        printf("O total gasto e: %.2f", totalGasto);
    }
}