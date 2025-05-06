#include<stdio.h>
#include<locale.h>

int potencia(int base, int expoente){
    if(expoente == 0){
        return 1;
    }else if(expoente == 1){
        return base;
    }else if(expoente > 1){
        int resultado = base;
        for(int i = 1; i < expoente; i++){
            resultado *= base;
        }
        return resultado;
    }
}

int main(){
    setlocale(LC_ALL, "Portuguese");
    int base, expoente;
    printf("Digite a base: ");
    scanf("%d", &base);
    printf("Digite o expoente: ");
    scanf("%d", &expoente);
    
    int resultado = potencia(base, expoente);
    printf("O resultado é: %d", resultado);
    return(0);
}