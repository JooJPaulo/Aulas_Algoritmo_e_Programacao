#include <stdio.h>
#include <stdlib.h>
struct Funcionario {
    char nome[50];
    int quantidade;
    float salarioFinal;
};

void validaQuantidade(struct Funcionario *funcionario);
void calculaSalario(struct Funcionario *funcionario);

int main() {
    int numFuncionarios = 0;
    int input;

    struct Funcionario *funcionarios = malloc(sizeof(struct Funcionario));

    do {
        numFuncionarios++;

        funcionarios = realloc(funcionarios, numFuncionarios * sizeof(struct Funcionario));

        printf("\nFuncionario %d:\n", numFuncionarios);
        validaQuantidade(&funcionarios[numFuncionarios - 1]);
        calculaSalario(&funcionarios[numFuncionarios - 1]);

        printf("\nDigite -1 para sair ou qualquer outro numero para continuar: ");
        scanf("%d", &input);

    } while (input != -1);

    printf("\nResultados:\n");
    for (int i = 0; i < numFuncionarios; i++) {
        printf("\nFuncionario %d:\n", i + 1);
        printf("Nome: %s\n", funcionarios[i].nome);
        printf("Quantidade: %d\n", funcionarios[i].quantidade);
        printf("Salario Final: %.2f\n", funcionarios[i].salarioFinal);
    }

    free(funcionarios);

    return 0;
}

void validaQuantidade(struct Funcionario *funcionario) {
    float bonus = 0.0;

    printf("Digite o nome do funcionario: ");
    scanf("%s", funcionario->nome);

    printf("Digite a quantidade produzida: ");
    scanf("%d", &funcionario->quantidade);

    if (funcionario->quantidade <= 50) {
        bonus = 0;
    } else if (funcionario->quantidade > 50 && funcionario->quantidade <= 80) {
        bonus = 0.5;
    } else {
        bonus = 0.75;
    }
}

void calculaSalario(struct Funcionario *funcionario) {
    float salario = 600.00;
    float bonus;

    if (funcionario->quantidade <= 50) {
        bonus = 0;
    } else if (funcionario->quantidade > 50 && funcionario->quantidade <= 80) {
        bonus = 0.5;
    } else {
        bonus = 0.75;
    }

    funcionario->salarioFinal = salario + (salario * bonus);
}

