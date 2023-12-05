#include<stdio.h>

typedef struct {
    int id;
    char nome[50];
    int quantidade;
    float preco;
    struct Produto *prox;
} Produto;

Produto *criarProduto() {
    Produto *p = (Produto *) malloc(sizeof(Produto));
    
    if (p == NULL) {
        printf("Erro ao alocar memoria\n");
        exit(1);
    }
    p->prox = NULL;
    return p;
}

Produto *cadastrar(Produto *lista) {
    Produto *p = criarProduto();

    printf("Digite o nome: ");
    getchar(); 
    fgets(p->nome, sizeof(p->nome), stdin);

    printf("Digite a quantidade: ");
    scanf("%d", &p->quantidade);

    printf("Digite o preco: ");
    scanf("%f", &p->preco);

    if (lista == NULL) {
        p->id = 1;
        lista = p;
    } else {
        Produto *atual = lista;
        while (atual->prox != NULL) {
            atual = atual->prox;
        }
        p->id = atual->id + 1; 
        atual->prox = p;
    }
    return lista;
}

Produto *listar(Produto *lista) {
    if (lista == NULL) {
        printf("Lista vazia\n");
    } else {
        Produto *atual = lista;
        while(atual != NULL) {
            printf("ID: %d\n", atual->id);
            printf("Nome: %s", atual->nome);
            printf("Quantidade: %d\n", atual->quantidade);
            printf("Preco: %.2f\n", atual->preco);
            atual = atual->prox;
        }
    }
    return lista;
}

Produto *buscar(Produto *lista) {
    if (lista == NULL) {
        printf("Lista vazia\n");
    } else {
        int id;
        printf("Digite o ID: ");
        scanf("%d", &id);
        Produto *atual = lista;
        while(atual != NULL) {
            if (atual->id == id) {
                printf("ID: %d\n", atual->id);
                printf("Nome: %s", atual->nome);
                printf("Quantidade: %d\n", atual->quantidade);
                printf("Preco: %.2f\n", atual->preco);
                return lista;
            }
            atual = atual->prox;
        }
        printf("Produto nao encontrado\n");
    }
    return lista;
}

Produto *excluir(Produto *lista) {
    if (lista == NULL) {
        printf("Lista vazia\n");
    } else {
        int id;
        printf("Digite o ID: ");
        scanf("%d", &id);
        Produto *atual = lista;
        Produto *anterior = NULL;
        while(atual != NULL) {
            if (atual->id == id) {
                if (anterior == NULL) {
                    lista = atual->prox;
                } else {
                    anterior->prox = atual->prox;
                }
                free(atual);
                printf("Produto excluido com sucesso\n");
                return lista;
            }
            anterior = atual;
            atual = atual->prox;
        }
        printf("Produto nao encontrado\n");
    }
    return lista;
}

main() {
    Produto *lista = NULL;
    int opcao;
    do {
        printf("1 - Cadastrar\n");
        printf("2 - Listar\n");
        printf("3 - Buscar\n");
        printf("4 - Excluir\n");
        printf("5 - Sair\n");
        printf("Digite a opcao: ");
        scanf("%d", &opcao);
        switch(opcao) {
            case 1:
                lista = cadastrar(lista);
                break;
                fflush(stdin);
            case 2:
                lista = listar(lista);
                break;
                fflush(stdin);
            case 3:
                lista = buscar(lista);
                break;
                fflush(stdin);
            case 4:
                lista = excluir(lista);
                break;
                fflush(stdin);
            case 5:
                printf("Saindo...\n");
                break;
            default:
                printf("Opcao invalida\n");
        }
    } while(opcao != 5);
}