#include<stdio.h>
#include<locale.h>

int inverterNumero(int n){
    int invertido = 0;
    while(n > 0){
        invertido = invertido * 10 + (n % 10);
        n /= 10;
    }

    return invertido;
}

int main(){
    setlocale(LC_ALL, "Pottuguese");
    int n;
    printf("Digite a sequencia de numeros que deseja inverter: ");
    scanf("%d", &n);

    int invertido = inverterNumero(n);
    printf("O numero invertido: %d", invertido);
    return(0);
}