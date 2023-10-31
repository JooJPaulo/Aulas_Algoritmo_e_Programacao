#include<stdio.h>
#include<limits.h>

int main() {
    int codigoCidade, quantidadeVeiculos, quantidadeAcidentes, maiorIndiceAcidentes = 0, menorIndiceAcidentes = INT_MAX, somaAcidentes = 0, somaVeiculos = 0, quantidadeCidades = 0;
    float quantidadeCidadesRS = 0, somaAcidentesRS = 0;
    char estado;

    do {
        printf("Informe o codigo da cidade: ");
        scanf("%d", &codigoCidade);

        if (codigoCidade != 0) {
            printf("Informe o estado da cidade (RS para Rio Grande do Sul): ");
            scanf(" %c", &estado);

            printf("Informe a quantidade de veiculos de passeio: ");
            fflush(stdin);
            scanf("%d", &quantidadeVeiculos);
            

            printf("Informe a quantidade de acidentes de transito com vitimas: ");
            scanf("%d", &quantidadeAcidentes);

            if (quantidadeAcidentes > maiorIndiceAcidentes) {
                maiorIndiceAcidentes = quantidadeAcidentes;
            }

            if (quantidadeAcidentes < menorIndiceAcidentes) {
                menorIndiceAcidentes = quantidadeAcidentes;
            }

            somaAcidentes += quantidadeAcidentes;
            somaVeiculos += quantidadeVeiculos;
            quantidadeCidades++;

            if (estado == 'R' || estado == 'r') {
                quantidadeCidadesRS++;
                somaAcidentesRS += quantidadeAcidentes;
            }
        }
    } while (codigoCidade != 0);

    printf("Media de veiculos nas cidades: %.2f\n", (float) somaVeiculos / quantidadeCidades);
    printf("Media de acidentes nas cidades: %.2f\n", (float) somaAcidentes / quantidadeCidades);
    printf("Menor indice de acidentes nas cidades: %d\n", menorIndiceAcidentes);
    printf("Maior indice de acidentes nas cidades: %d\n", maiorIndiceAcidentes);

    if (quantidadeCidadesRS > 0) {
        printf("Media de acidentes com vitimas nas cidades do RS: %.2f\n", (float) somaAcidentesRS / quantidadeCidadesRS);
    } else {
        printf("Nenhuma cidade do RS registrada.\n");
    }

    return 0;
}
