#include<stdio.h>

main() {
    int opcao;
    do {
        printf("1 - Cadastrar uma pessoa\n");
        printf("2 - Listar todos\n");
        printf("3 - Buscar uma pessoa\n");
        printf("4 - Alterar uma pessoa\n");
        printf("5 - Excluir uma pessoa\n");
        printf("0 - Sair\n");
        printf("Digite sua opcao: ");
        scanf("%d", &opcao);
        switch(opcao) {
            case 1:
                printf("Cadastrar uma pessoa\n");
                break;
            case 2:
                printf("Listar todos\n");
                break;
            case 3:
                printf("Buscar uma pessoa\n");
                break;
            case 4:
                printf("Alterar uma pessoa\n");
                break;
            case 5:
                printf("Excluir uma pessoa\n");
                break;
            case 0:
                printf("Sair\n");
                break;
            default:
                printf("Opcao invalida\n");
        }
    } while(opcao != 0);

    

}