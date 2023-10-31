#include <stdio.h>

main() {
    int filhos, cont = 0;
    float salario, mediaFilhos = 0, mediaSalario = 0, maiorSalario = 0, percentualAte100 = 0;

    do {
        printf("Digite o salario da familia (ou -1 para encerrar): ");
        scanf("%f", &salario);

        if (salario == -1) {
            break;
        }

        printf("Digite a quantidade de filhos: ");
        scanf("%d", &filhos);

        mediaFilhos += filhos;
        mediaSalario += salario;
        cont++;

        if (salario > maiorSalario) {
            maiorSalario = salario;
        }

        if (salario <= 100) {
            percentualAte100++;
        }
    } while (1);

    if (cont > 0) {
        mediaFilhos /= cont;
        mediaSalario /= cont;
        percentualAte100 = (percentualAte100 / cont) * 100;
    }

    printf("Media de filhos: %.2f\n", mediaFilhos);
    printf("Media de salario: %.2f\n", mediaSalario);
    printf("Maior salario: %.2f\n", maiorSalario);
    printf("Percentual de pessoas com salario ate R$ 100,00: %.2f%%\n", percentualAte100);

    return 0;
}
