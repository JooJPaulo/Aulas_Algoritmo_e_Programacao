#include<stdio.h>

typedef struct {
    int id;
    char nome[50];
    int idade;
    struct Pessoa *prox;
} Pessoa;

Pessoa *criarPessoa() {
    Pessoa *p = (Pessoa *) malloc(sizeof(Pessoa));
    
    if (p == NULL) {
        printf("Erro ao alocar memoria\n");
        exit(1);
    }
    p->prox = NULL;
    return p;
}

Pessoa *cadastrar(Pessoa *lista) {
    Pessoa *p = criarPessoa();

    printf("Digite o nome: ");
    getchar(); 
    fgets(p->nome, sizeof(p->nome), stdin);

    printf("Digite a idade: ");
    scanf("%d", &p->idade);

    if (lista == NULL) {
        p->id = 1;
        lista = p;
    } else {
        Pessoa *atual = lista;
        while (atual->prox != NULL) {
            atual = atual->prox;
        }
        p->id = atual->id + 1; 
        atual->prox = p;
    }
    return lista;
}


Pessoa *listar(Pessoa *lista) {
    if (lista == NULL) {
        printf("Lista vazia\n");
    } else {
        Pessoa *atual = lista;
        while(atual != NULL) {
            printf("ID: %d\n", atual->id);
            printf("Nome: %s", atual->nome);
            printf("Idade: %d\n", atual->idade);
            atual = atual->prox;
        }
    }
    return lista;
}

Pessoa *buscar(Pessoa *lista) {
    if (lista == NULL) {
        printf("Lista vazia\n");
    } else {
        int id;
        printf("Digite o ID: ");
        scanf("%d", &id);

        Pessoa *atual = lista;
        while(atual != NULL) {
            if (atual->id == id) {
                printf("ID: %d\n", atual->id);
                printf("Nome: %s", atual->nome);
                printf("Idade: %d\n", atual->idade);
                break;
            }
            atual = atual->prox;
        }
    }
    return lista;
}

Pessoa *alterar(Pessoa *lista) {
    if (lista == NULL) {
        printf("Lista vazia\n");
    } else {
        int id;
        printf("Digite o ID: ");
        scanf("%d", &id);

        Pessoa *atual = lista;
        while (atual != NULL) {
            if (atual->id == id) {
                getchar();
                printf("Digite o nome: ");
                fgets(atual->nome, sizeof(atual->nome), stdin);

                printf("Digite a idade: ");
                scanf("%d", &atual->idade);
                break;
            }
            atual = atual->prox;
        }
    }
    return lista;
}


Pessoa *excluir(Pessoa *lista) {
    if (lista == NULL) {
        printf("Lista vazia\n");
    } else {
        int id;
        printf("Digite o ID: ");
        scanf("%d", &id);

        Pessoa *atual = lista;
        Pessoa *anterior = NULL;
        while(atual != NULL) {
            if (atual->id == id) {
                if (anterior == NULL) {
                    lista = atual->prox;
                } else {
                    anterior->prox = atual->prox;
                }
                free(atual);
                break;
            }
            anterior = atual;
            atual = atual->prox;
        }
    }
    return lista;
}

main() {
    Pessoa *lista = NULL;

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
                lista = cadastrar(lista);
                break;
            case 2:
                lista = listar(lista);
                break;
            case 3:
                lista = buscar(lista);
                break;
            case 4:
                lista = alterar(lista);
                break;
            case 5:
                lista = excluir(lista);
                break;
            case 0:
                printf("Saindo...\n");
                break;
            default:
                printf("Opcao invalida\n");
        }
    } while(opcao != 0);

    return 0;
}