#include <stdio.h>

void votosCandidato(int voto, int *candidato1, int *candidato2, int *candidato3, int *candidato4, int *votoNulo, int *votoBranco) {
    if (voto == 1) {
        (*candidato1)++;
    } else if (voto == 2) {
        (*candidato2)++;
    } else if (voto == 3) {
        (*candidato3)++;
    } else if (voto == 4) {
        (*candidato4)++;
    } else if (voto == 5) {
        (*votoNulo)++;
    } else if (voto == 6) {
        (*votoBranco)++;
    }
}

int main() {
    int candidato1 = 0, candidato2 = 0, candidato3 = 0, candidato4 = 0, votoNulo = 0, votoBranco = 0, voto;

    do {
        printf("Digite o voto (ou 0 para encerrar): ");
        scanf("%d", &voto);

        if (voto == 0) {
            break;
        }

        votosCandidato(voto, &candidato1, &candidato2, &candidato3, &candidato4, &votoNulo, &votoBranco);
    } while (1);

    printf("Total de votos para o candidato 1: %d\n", candidato1);
    printf("Total de votos para o candidato 2: %d\n", candidato2);
    printf("Total de votos para o candidato 3: %d\n", candidato3);
    printf("Total de votos para o candidato 4: %d\n", candidato4);
    printf("Total de votos nulos: %d\n", votoNulo);
    printf("Total de votos em branco: %d\n", votoBranco);

    return 0;
}
