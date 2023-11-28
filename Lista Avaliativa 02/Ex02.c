#include <stdio.h>

struct Funcionario {
    char nome[50];
    char sexo;
    float salario;
};

char* classificaSalario(float salario) {
    if (salario > 1400) {
        return "Acima do salário mínimo";
    } else if (salario == 1400) {
        return "Igual ao salário mínimo";
    } else {
        return "Abaixo do salário mínimo";
    }
}

void cadastrarFuncionarios() {
    struct Funcionario funcionario;
    int sair = 0;

    do {
        printf("\nInforme o nome do assalariado (ou digite -1 para encerrar): ");
        scanf("%s", funcionario.nome);

        if (strcmp(funcionario.nome, "-1") == 0) {
            sair = -1; // Update sair to exit the loop
            break;
        }

        printf("Informe o sexo (M/F): ");
        scanf(" %c", &funcionario.sexo);

        printf("Informe o salario: ");
        scanf("%f", &funcionario.salario);

        // Process or store the funcionario data as needed
        // ...

    } while (sair != -1);
}

int main() {
    struct Funcionario funcionario;
    int quantidade_abaixo_minimo = 0;
    int quantidade_acima_minimo = 0;

    cadastrarFuncionarios();

    char* classificacao = classificaSalario(funcionario.salario);

    if (classificacao[0] == 'A') {
        quantidade_acima_minimo++;
    } else if (classificacao[0] == 'B') { // Fix the comparison here
        quantidade_abaixo_minimo++;
    }

    printf("\nQuantidade de assalariados abaixo do salario minimo: %d\n", quantidade_abaixo_minimo);
    printf("Quantidade de assalariados acima do salario minimo: %d\n", quantidade_acima_minimo);

    return 0;
}
