#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>
#include <stdbool.h>

typedef struct {
    int id;
    char proprietario[50];
    int combustivel;
    char modelo[50];
    char cor[50];
    char nuChassi[50];
    int ano;
    char placa[8];
    struct Veiculo *prox;
} Veiculo;

Veiculo *criarVeiculo() {
    Veiculo *v = (Veiculo *) malloc(sizeof(Veiculo));
    
    if (v == NULL) {
        printf("Erro ao alocar memoria\n");
        exit(1);
    }
    v->prox = NULL;
    return v;
}

Veiculo *cadastrar(Veiculo *lista) {
    Veiculo *v = criarVeiculo();

    printf("Digite o nome do proprietario: ");
    getchar(); 
    fgets(v->proprietario, sizeof(v->proprietario), stdin);
    fflush(stdin);

    do {
        printf("Digite o tipo de combustivel (1 para Alcool, 2 para Diesel e 3 para Gasolina): ");
        scanf("%d", &v->combustivel);
        fflush(stdin);
    } while (v->combustivel < 1 || v->combustivel > 3);

    printf("Digite o modelo: ");
    fgets(v->modelo, sizeof(v->modelo), stdin);
    fflush(stdin);

    printf("Digite a cor: ");
    fgets(v->cor, sizeof(v->cor), stdin);
    fflush(stdin);

    printf("Digite o numero do chassi: ");
    fgets(v->nuChassi, sizeof(v->nuChassi), stdin);
    fflush(stdin);

    printf("Digite o ano: ");
    scanf("%d", &v->ano);
    fflush(stdin);

    do {
        printf("Digite a placa (três primeiros valores alfabéticos e quatro restantes valores numéricos): ");
        fgets(v->placa, sizeof(v->placa), stdin);
        fflush(stdin);

        if (isalpha(v->placa[0]) && isalpha(v->placa[1]) && isalpha(v->placa[2]) &&
            isdigit(v->placa[3]) && isdigit(v->placa[4]) && isdigit(v->placa[5]) && isdigit(v->placa[6])) {
            break;
        } else {
            printf("Formato de placa inválido. Tente novamente.\n");
        }
    } while (1);

    if (lista == NULL) {
        v->id = 1;
        lista = v;
    } else {
        Veiculo *atual = lista;
        while (atual->prox != NULL) {
            atual = atual->prox;
        }
        v->id = atual->id + 1; 
        atual->prox = v;
    }
    return lista;
}

Veiculo *listar(Veiculo *lista) {
    if (lista == NULL) {
        printf("Lista vazia\n");
    } else {
        Veiculo *atual = lista;
        while (atual != NULL) {
            printf("ID: %d\n", atual->id);
            printf("Proprietario: %s", atual->proprietario);
            printf("Combustivel: %d\n", atual->combustivel);
            printf("Modelo: %s", atual->modelo);
            printf("Cor: %s", atual->cor);
            printf("Numero do chassi: %s", atual->nuChassi);
            printf("Ano: %d\n", atual->ano);
            printf("Placa: %s\n", atual->placa);
            atual = atual->prox;
        }
    }
    return lista;
}

bool placaComecaComJET(char *placa) {
    return (placa[0] == 'J' && (placa[7] == '0' || placa[7] == '2' || placa[7] == '4' || placa[7] == '7'));
}

void listarProprietariosAnoDiesel(Veiculo *lista) {
    Veiculo *atual = lista;
    while (atual != NULL) {
        if (atual->ano >= 2010 && atual->combustivel == 2) {
            printf("Proprietario: %s", atual->proprietario);
        }
        atual = atual->prox;
    }
}

void listarPlacasJET(Veiculo *lista) {
    Veiculo *atual = lista;
    while (atual != NULL) {
        if (placaComecaComJET(atual->placa)) {
            printf("Placa: %s - Proprietario: %s", atual->placa, atual->proprietario);
        }
        atual = atual->prox;
    }
}

void listarModeloCorVogalSomaPar(Veiculo *lista) {
    Veiculo *atual = lista;
    while (atual != NULL) {
        char segundaLetraPlaca = tolower(atual->placa[1]);
        int somaNumerosPlaca = atoi(atual->placa + 3) + atoi(atual->placa + 4) + atoi(atual->placa + 5) + atoi(atual->placa + 6);

        if (strchr("aeiou", segundaLetraPlaca) && somaNumerosPlaca % 2 == 0) {
            printf("Modelo: %s - Cor: %s", atual->modelo, atual->cor);
        }
        atual = atual->prox;
    }
}

void trocarProprietarioSemZeroNoChassi(Veiculo *lista) {
    Veiculo *atual = lista;
    char nuChassi[50];

    printf("Digite o numero do chassi: ");
    scanf("%s", nuChassi);

    while (atual != NULL) {
        if (strcmp(atual->nuChassi, nuChassi) == 0) {
            if (!strchr(atual->placa, '0')) {
                printf("Digite o novo nome do proprietario: ");
                getchar(); 
                fgets(atual->proprietario, sizeof(atual->proprietario), stdin);
                fflush(stdin);
                break;
            } else {
                printf("Carro com placa que possui pelo menos um digito igual a zero. Troca de proprietario nao permitida.\n");
            }
        }
        atual = atual->prox;
    }
}

Veiculo *buscar(Veiculo *lista) {
    if (lista == NULL) {
        printf("Lista vazia\n");
    } else {
        int id;
        printf("Digite o ID: ");
        scanf("%d", &id);

        Veiculo *atual = lista;
        while (atual != NULL) {
            if (atual->id == id) {
                printf("ID: %d\n", atual->id);
                printf("Proprietario: %s", atual->proprietario);
                printf("Combustivel: %d\n", atual->combustivel);
                printf("Modelo: %s", atual->modelo);
                printf("Cor: %s", atual->cor);
                printf("Numero do chassi: %s", atual->nuChassi);
                printf("Ano: %d\n", atual->ano);
                printf("Placa: %s\n", atual->placa);
                break;
            }
            atual = atual->prox;
        }
    }
    return lista;
}

Veiculo *excluir(Veiculo *lista) {
    if (lista == NULL) {
        printf("Lista vazia\n");
    } else {
        int id;
        printf("Digite o ID: ");
        scanf("%d", &id);

        Veiculo *atual = lista;
        Veiculo *anterior = NULL;
        while (atual != NULL) {
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
    Veiculo *lista = NULL;
    int opcao;

    do {
        printf("1 - Cadastrar\n");
        printf("2 - Listar\n");
        printf("3 - Listar proprietarios de veiculos a diesel fabricados a partir de 2010\n");
        printf("4 - Listar placas que comecam com JET e terminam com 0, 2, 4 ou 7\n");
        printf("5 - Listar modelo e cor de veiculos cuja segunda letra da placa eh uma vogal e a soma dos numeros da placa eh par\n");
        printf("6 - Trocar proprietario de veiculo cujo numero do chassi nao possui nenhum digito igual a zero\n");
        printf("7 - Buscar\n");
        printf("8 - Excluir\n");
        printf("0 - Sair\n");
        printf("Digite a opcao: ");
        scanf("%d", &opcao);
        fflush(stdin);

        switch (opcao) {
            case 1:
                lista = cadastrar(lista);
                break;
            case 2:
                listar(lista);
                break;
            case 3:
                listarProprietariosAnoDiesel(lista);
                break;
            case 4:
                listarPlacasJET(lista);
                break;
            case 5:
                listarModeloCorVogalSomaPar(lista);
                break;
            case 6:
                trocarProprietarioSemZeroNoChassi(lista);
                break;
            case 7:
                lista = buscar(lista);
                break;
            case 8:
                lista = excluir(lista);
                break;
            case 0:
                printf("Saindo...\n");
                break;
            default:
                printf("Opcao invalida\n");
                break;
        }
    } while (opcao != 0);
}