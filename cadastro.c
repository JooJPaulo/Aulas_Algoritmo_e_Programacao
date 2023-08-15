#include<stdio.h>

main() {

    char nome[50];
    int idade;
    char matricula[10];
    char endereco[100];
    char curso[50];
    int periodo;
    char disciplina[50];
    float mensalidade;

    printf("Digite o nome do aluno: ");
    fgets(nome, sizeof(nome), stdin);
    printf("Digite a idade do aluno: ");
    scanf("%d", &idade);
    printf("Digite a matricula do aluno: ");
    fgets(matricula, sizeof(matricula), stdin);
    printf("Digite o endereco do aluno: ");
    fflush(stdin);
    fgets(endereco, sizeof(endereco), stdin);
    printf("Digite o curso do aluno: ");
    fgets(curso, sizeof(curso), stdin);
    printf("Digite o periodo do aluno: ");
    scanf("%s", &periodo);
    printf("Digite a disciplina do aluno: ");
    fflush(stdin); 
    fgets(disciplina, sizeof(disciplina), stdin);
    printf("Digite o valor da mensalidade do aluno: ");
    scanf("%f", &mensalidade, "reais");

    printf("\nNome: %s", nome);
    printf("Idade: %d", idade);
    printf("Matricula: %s", matricula);
    printf("Endereco: %s", endereco);
    printf("Curso: %s", curso);
    printf("Periodo: %d", periodo);
    printf("Disciplina: %s", disciplina);
    printf("Mensalidade: %.2f", mensalidade);

}