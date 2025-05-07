#include <stdio.h>

int buscaBinaria(int v[], int tamanho, int chave) {
    int inicio = 0, fim = tamanho - 1;

    while (inicio <= fim) {
        int meio = (inicio + fim) / 2;
        if (v[meio] == chave)
            return meio; // posição encontrada
        else if (v[meio] < chave)
            inicio = meio + 1;
        else
            fim = meio - 1;
    }

    return -1; // não encontrado
}

int main() {
    int vetor[] = {1, 3, 5, 7, 9, 11, 13}; // vetor ordenado
    int tamanho = sizeof(vetor) / sizeof(vetor[0]);
    int chave;

    printf("Digite o número a ser buscado: ");
    scanf("%d", &chave);

    int resultado = buscaBinaria(vetor, tamanho, chave);

    if (resultado != -1)
        printf("Número encontrado na posição %d.\n", resultado);
    else
        printf("Número não encontrado.\n");

    return 0;
}
