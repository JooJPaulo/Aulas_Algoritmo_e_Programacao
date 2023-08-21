#include<stdio.h>

int main() {
    /*Exercício 01*/
    /*int a, b, soma, subtracao, multiplicacao, divisao, resto;
    printf("Digite o primeiro numero: ");
    scanf("%d", &a);
    printf("Digite o segundo numero: ");
    scanf("%d", &b);
    soma = a + b;
    subtracao = a - b;
    multiplicacao = a * b;
    divisao = a / b;
    resto = a % b;
    printf("Soma: %d\n", soma);
    printf("Subtracao: %d\n", subtracao);
    printf("Multiplicacao: %d\n", multiplicacao);
    printf("Divisao: %d\n", divisao);
    printf("Resto: %d\n", resto);*/
    
    /*Exercício 02*/
    /*int numero;
    printf("Digite um numero: ");
    scanf("%d", &numero);

    printf("O dobro de %d e %d\n", numero, numero * 2);*/

    /*Exercício 03*/
    /*float base, altura;
    printf("Digite a base da sala: ");
    scanf("%.2f", &base);
    printf("Digite a altura da sala: ");
    scanf("%.2f", &altura);

    printf("A area da sala e: %.2f\n", base * altura);*/

    /*Exercício 04*/
    /*int real;
    float dolar = 4.98;

    printf("Digite o valor em reais: ");
    scanf("%d", &real);

    printf("O valor em dolar e: %.2f\n", real / dolar);*/

    /*Exercício 05*/
    /*float custoProduto, frete, despesas, precoVenda, lucro;

    printf("Digite o custo do produto: ");
    scanf("%f", &custoProduto);
    printf("Digite o valor do frete: ");
    scanf("%f", &frete);
    printf("Digite o valor das despesas: ");
    scanf("%f", &despesas);

    precoVenda = custoProduto + frete + despesas;
    lucro = precoVenda * 0.25;

    printf("O preco de venda e: %.2f\n", precoVenda);
    printf("O lucro e: %.2f\n", lucro);*/

    /*Exercício 06*/
    /*float raio, area;

    printf("Digite o raio do circulo: ");
    scanf("%f", &raio);

    area = 3.14 * sqrt(raio);

    printf("A area do circulo e: %.2f\n", area);*/

    /*Exercício 07*/
    /*int anos, meses, dias;

    printf("Digite a sua idade em anos: ");
    scanf("%d", &anos);

    meses = anos * 12;
    dias = anos * 365;

    printf("A sua idade em meses e: %d\n", meses);
    printf("A sua idade em dias e: %d\n", dias);*/

    /*Exercício 08*/
    /*float salario, percReajuste, novoSalario;

    printf("Digite o seu salario: ");
    scanf("%f", &salario);
    printf("Digite o percentual de reajuste: ");
    scanf("%f", &percReajuste);

    novoSalario = salario + (salario * (percReajuste / 100));

    printf("O seu novo salario e: %.2f\n", novoSalario);*/

    /*Exercício 09*/
    /*float custoFabrica, percDistribuidor = 0.28, percImpostos = 0.45, custoFinal;

    printf("Digite o custo de fabrica: ");
    scanf("%f", &custoFabrica);

    custoFinal = custoFabrica + (custoFabrica * percDistribuidor) + (custoFabrica * percImpostos);

    printf("O custo final do carro e: %.2f\n", custoFinal);*/

    /*Exercício 10*/
    float salario, comissao, vendas, bonusVendas;
    
    printf("Digite o seu salario: ");
    scanf("%f", &salario);
    printf("Digite o valor das vendas: ");
    scanf("%f", &vendas);

    comissao = vendas * 0.04;
    bonusVendas = vendas * 0.05;

    printf("O valor da comissao e: %.2f\n", comissao);
    printf("O valor do bonus de vendas e: %.2f\n", bonusVendas);
    printf("O salario final e: %.2f\n", salario + comissao + bonusVendas);

    return 0;
}