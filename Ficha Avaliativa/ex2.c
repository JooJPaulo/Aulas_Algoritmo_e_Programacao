#include<stdio.h>

main() {
    float alturaChico = 1.50, alturaZe = 1.10;
    int crescimentoChico = 2, crescimentoZe = 3, anos = 0;

    while (alturaChico >= alturaZe) {
        alturaChico += crescimentoChico / 100.0;
        alturaZe += crescimentoZe / 100.0;
        anos++;
    }

    printf("Ze levara %d anos para ser maior que Chico\n", anos);



    return 0;
}