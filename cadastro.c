#include<stdio.h>

main() {

    char nome[50];
    int idade;
    char matricula[10];
    char endereco[100];
    char curso[50];
    char periodo[10];
    char disciplina[50];
    float mensalidade;

    printf("Digite o nome do aluno: ");
    fgets(nome, 50, stdin);
    printf("Digite a idade do aluno: ");
    scanf("%d", &idade);
    printf("Digite a matricula do aluno: ");
    scanf("%s", matricula);
    printf("Digite o endereco do aluno: ");
    fflush(stdin);
    fgets(endereco, 100, stdin);
    printf("Digite o curso do aluno: ");
    fgets(curso, 50, stdin);
    printf("Digite o periodo do aluno: ");
    scanf("%s", periodo);
    printf("Digite a disciplina do aluno: ");
    fflush(stdin);
    fgets(disciplina, 50, stdin);
    printf("Digite o valor da mensalidade do aluno: ");
    scanf("%f", &mensalidade, "reais");

    printf("\n\nNome: %s", nome);
    printf("Idade: %d", idade);
    printf("Matricula: %s", matricula);
    printf("Endereco: %s", endereco);
    printf("Curso: %s", curso);
    printf("Periodo: %s", periodo);
    printf("Disciplina: %s", disciplina);
    printf("Mensalidade: %.2f", mensalidade);

}