#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define MAX 100

typedef struct {
    char nome[50];
    int codigo;
    int quantidade;
    float preco;
} Produto;

void cadastrarProduto(Produto* produtos, int* total) {
    printf("Nome: ");
    getchar(); // limpar buffer
    fgets(produtos[*total].nome, 50, stdin);
    produtos[*total].nome[strcspn(produtos[*total].nome, "\n")] = '\0';

    printf("Código: ");
    scanf("%d", &produtos[*total].codigo);

    printf("Quantidade: ");
    scanf("%d", &produtos[*total].quantidade);

    printf("Preço: ");
    scanf("%f", &produtos[*total].preco);

    (*total)++;
    printf("Produto cadastrado com sucesso!\n\n");
}

void buscarProduto(Produto* produtos, int total) {
    int codigo;
    printf("Digite o código do produto: ");
    scanf("%d", &codigo);

    for (int i = 0; i < total; i++) {
        if (produtos[i].codigo == codigo) {
            printf("Nome: %s\n", produtos[i].nome);
            printf("Quantidade: %d\n", produtos[i].quantidade);
            printf("Preço: %.2f\n\n", produtos[i].preco);
            return;
        }
    }
    printf("Produto não encontrado.\n\n");
}

void listarProdutos(Produto* produtos, int total) {
    if (total == 0) {
        printf("Nenhum produto cadastrado.\n\n");
        return;
    }

    for (int i = 0; i < total; i++) {
        printf("Produto %d:\n", i + 1);
        printf("Nome: %s\n", produtos[i].nome);
        printf("Código: %d\n", produtos[i].codigo);
        printf("Quantidade: %d\n", produtos[i].quantidade);
        printf("Preço: %.2f\n\n", produtos[i].preco);
    }
}

int main() {
    Produto produtos[MAX];
    int total = 0;
    int opcao;

    do {
        printf("1 - Cadastrar produto\n");
        printf("2 - Buscar produto por código\n");
        printf("3 - Listar todos os produtos\n");
        printf("0 - Sair\n");
        printf("Escolha uma opção: ");
        scanf("%d", &opcao);

        switch (opcao) {
            case 1:
                cadastrarProduto(produtos, &total);
                break;
            case 2:
                buscarProduto(produtos, total);
                break;
            case 3:
                listarProdutos(produtos, total);
                break;
            case 0:
                printf("Encerrando...\n");
                break;
            default:
                printf("Opção inválida.\n");
        }
    } while (opcao != 0);

    return 0;
}
