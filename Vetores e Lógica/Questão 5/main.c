#include<stdio.h>
#include<locale.h>

int main(){
    setlocale(LC_ALL, "Portuguese");
    int v1[5], v2[5], verificação[5];
    int qtdVerificados = 0;
    printf("Digite os numeros que deseja inserir no primeiro vetor: ");
    for(int i = 0; i < 5; i++){
        scanf("%d", &v1[i]);
    }
    printf("Digite os numeros que deseja inserir no segundo vetor: ");
    for(int i = 0; i < 5; i++){
        scanf("%d", &v2[i]);
    }

    printf("Termos Semelhantes: ");
    for(int i = 0; i < 5; i++){
        for(int j = 0; j < 5; j++){
            if(v1[i] == v2[j]){
                int jaImpresso = 0;
                for(int k = 0; k < qtdVerificados; k++){
                    if(v1[i] == verificação[k]){
                        jaImpresso = 1;
                        break;
                    }
                }

                if(!jaImpresso){
                    printf("%d ", v1[i]);
                    verificação[qtdVerificados] = v1[i];
                    qtdVerificados++;
                }

                break;
            }
        }
    }
    return(0);
}