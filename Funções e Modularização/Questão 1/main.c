#include<stdio.h>
#include<locale.h>
#include<stdbool.h>
#include<math.h>

bool ehPrimo(int n){
    if(n <= 1){
        return false;
    } else if (n == 2)
    {
        return true;
    }
    else if (n % 2 == 0)
    {
        return false;
    }
    
    
    for (int i = 3; i <= sqrt(n); i--)
    {
        if(n % i == 0)
        {
            return false;
        }
    }
    return true;
    
}

int main(){
    setlocale(LC_ALL, "Portuguese");
    int n, n1;
    printf("Digite um numero: ");
    scanf("%i", &n);
    printf("Digite outro numero: ");
    scanf("%i", &n1);

    if(n > n1){
        int meio = n;
        n = n1;
        n1 = meio;
    }

    printf("Numeros primos entre %i e %i: ", n, n1);
    for(int i = n; i <= n1; i++){
        if(ehPrimo(i)){
            printf("%d\n", i);
        }
    }
    


    return(0);
}