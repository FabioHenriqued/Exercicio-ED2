#include <stdio.h>
#include <stdbool.h>

int main() {
    int numeros[10];
    
    printf("Digite 10 números inteiros:\n");
    for (int i = 0; i < 10; i++) {
        printf("Número %d: ", i + 1);
        scanf("%d", &numeros[i]);
    }

    printf("\nOcorrências de cada número:\n");
    for (int i = 0; i < 10; i++) {
        bool jaContado = false;

        for (int j = 0; j < i; j++) {
            if (numeros[i] == numeros[j]) {
                jaContado = true;
                break;
            }
        }
        
        if (!jaContado) {
            int contador = 1;
            for (int k = i + 1; k < 10; k++) {
                if (numeros[i] == numeros[k]) {
                    contador++;
                }
            }
            printf("%d aparece %d vez(es)\n", numeros[i], contador);
        }
    }

    return 0;
}
