#include <stdio.h>
#include <string.h>

#define MAX 100

typedef struct {
    char nome[50];
    char telefone[20];
} Contato;

void adicionarContato(Contato *contatos, int *total) {
    printf("Nome: ");
    getchar(); // limpa o buffer
    fgets(contatos[*total].nome, 50, stdin);
    contatos[*total].nome[strcspn(contatos[*total].nome, "\n")] = '\0';

    printf("Telefone: ");
    fgets(contatos[*total].telefone, 20, stdin);
    contatos[*total].telefone[strcspn(contatos[*total].telefone, "\n")] = '\0';

    (*total)++;
    printf("Contato adicionado com sucesso!\n\n");
}

void buscarContato(Contato *contatos, int total) {
    char nomeBusca[50];
    printf("Digite o nome para buscar: ");
    getchar(); // limpa o buffer
    fgets(nomeBusca, 50, stdin);
    nomeBusca[strcspn(nomeBusca, "\n")] = '\0';

    int encontrado = 0;
    for (int i = 0; i < total; i++) {
        if (strcmp(contatos[i].nome, nomeBusca) == 0) {
            printf("Nome: %s\n", contatos[i].nome);
            printf("Telefone: %s\n\n", contatos[i].telefone);
            encontrado = 1;
            break;
        }
    }
    if (!encontrado)
        printf("Contato não encontrado.\n\n");
}

void exibirContatos(Contato *contatos, int total) {
    if (total == 0) {
        printf("Nenhum contato cadastrado.\n\n");
        return;
    }

    for (int i = 0; i < total; i++) {
        printf("Contato %d:\n", i + 1);
        printf("Nome: %s\n", contatos[i].nome);
        printf("Telefone: %s\n\n", contatos[i].telefone);
    }
}

int main() {
    Contato contatos[MAX];
    int total = 0, opcao;

    do {
        printf("1 - Adicionar contato\n");
        printf("2 - Buscar contato por nome\n");
        printf("3 - Exibir todos os contatos\n");
        printf("0 - Sair\n");
        printf("Escolha uma opção: ");
        scanf("%d", &opcao);

        switch (opcao) {
            case 1:
                adicionarContato(contatos, &total);
                break;
            case 2:
                buscarContato(contatos, total);
                break;
            case 3:
                exibirContatos(contatos, total);
                break;
            case 0:
                printf("Encerrando...\n");
                break;
            default:
                printf("Opção inválida.\n\n");
        }
    } while (opcao != 0);

    return 0;
}
