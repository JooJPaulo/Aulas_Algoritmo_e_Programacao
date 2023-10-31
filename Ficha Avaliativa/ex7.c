#include<stdio.h>

main() {
    float nota1, nota2, nota3, mediaTurma = 0, mediaPonderada;
    int numAlunos = 30;

    for (int i = 1; i <= numAlunos; i++) {
        printf("Digite a primeira nota para o aluno %d: ", i);
        scanf("%f", &nota1);

        printf("Digite a segunda nota para o aluno %d: ", i);
        scanf("%f", &nota2);

        printf("Digite a terceira nota para o aluno %d: ", i);
        scanf("%f", &nota3);

        mediaPonderada = (nota1 * 2 + nota2 * 4 + nota3 * 3) / 10;
        mediaTurma += mediaPonderada;

        if (mediaPonderada >= 7) {
            printf("A media do aluno %d e: %.2f\n", i, mediaPonderada);
            printf("Aluno aprovado!\n");
        } else {
            printf("A media do aluno %d e: %.2f\n", i, mediaPonderada);
            printf("Aluno reprovado!\n");
        }
    }

    mediaTurma /= numAlunos;

    printf("A media da turma e: %.2f\n", mediaTurma);

    return 0;
}