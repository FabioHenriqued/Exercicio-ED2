#include<stdio.h>
#include<locale.h>

int main(){
    setlocale(LC_ALL, "Portuguese");
    int m1[3][3], m2[3][3], m3[3][3];
    printf("Preencha a matriz com os valores: ");
    for(int i = 0; i < 3; i++){
        for(int j = 0; j < 3; j++){
            scanf("%d", &m1[i][j]);
        }
    }
    printf("preencha a segunda matriz com os valores: ");
    for(int i = 0; i < 3; i++){
        for(int j = 0; j < 3; j++){
            scanf("%d", &m2[i][j]);
        }
    }

    for(int i = 0; i < 3; i++){
        for(int j = 0; j < 3; j++){
            m3[i][j] = m1[i][j] + m2[i][j];
        }
    }
    printf("A soma das duas matrizes é igual a: \n");
    for(int i = 0; i < 3; i++){
        for(int j = 0; j < 3; j++){
            printf("%d\t", m3[i][j]);
        }
        printf("\n");
    }
    return(0);
}