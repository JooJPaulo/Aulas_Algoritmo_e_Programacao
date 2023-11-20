#include <stdio.h>

int validaQuantidade();
float calculaSalario(int quantidade);

int main() {
    int quantidade;
    float salarioFinal;

    quantidade = validaQuantidade();
    salarioFinal = calculaSalario(quantidade);

    printf("O salario final eh: %.2f\n", salarioFinal);

    return 0;
}

int validaQuantidade() {
    int quantidade;
    float bonus = 0.0;

    printf("Digite a quantidade produzida: ");
    scanf("%d", &quantidade);

    if (quantidade <= 50) {
        bonus = 0;
    } else if (quantidade > 50 && quantidade <= 80) {
        bonus = 0.5;
    } else {
        bonus = 0.75;
    }

    return quantidade;
}

float calculaSalario(int quantidade) {
    float salario = 600.00;
    float bonus;

    if (quantidade <= 50) {
        bonus = 0;
    } else if (quantidade > 50 && quantidade <= 80) {
        bonus = 0.5;
    } else {
        bonus = 0.75;
    }

    float salarioFinal = salario + (salario * bonus);

    return salarioFinal;
}
