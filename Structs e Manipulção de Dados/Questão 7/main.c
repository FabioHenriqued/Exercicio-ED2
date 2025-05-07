#include<stdio.h>
#include<locale.h>
#include<stdlib.h>

typedef struct{
    char nome[50];
    int matricula;
    float media;
} Alunos;

void cadastrarAlunos(Alunos *alunos, int qtd){
    printf("Informe o nome do aluno: ");
    getchar();
    fgets(alunos->nome, sizeof(alunos->nome), stdin);
    
    printf("Agora informe a matricula: ");
    scanf("%d", &alunos->matricula);
    
    printf("E por ultimo informe a média: ");
    scanf("%f", &alunos->media);
    
    printf("Aluno cadastrado!!!");
}

void listarAprovados(Alunos *alunos, int qtd){
    for(int i = 0; i < qtd; i++){
        if(alunos[i].media >= 7.0){
            printf("Nome: %s\n", alunos[i].nome);
            printf("Matrícula: %d\n", alunos[i].matricula);
            printf("Média: %.2f\n\n", alunos[i].media);
        }
    }
}

int main(){
    setlocale(LC_ALL, "Portuguese");
    Alunos* alunos;
    int op, qtd = 0;
    printf("=============================");
    printf("1 - Cadastrar Aluno.");
    printf("2 - Lista de Aprovados.");
    printf("0 - Sair.");
    printf("=============================");
    printf("Informe a opção que deseja: ");
    scanf("%d", &op);
    while(op != 0){
        switch(op){
            case 1:
                printf("Quantos alunos deseja cadastrar? ");
                scanf("%d", &qtd);
                alunos = malloc(qtd * sizeof(Alunos));
                cadastrarAlunos(&alunos, qtd);
                break;
            case 2:
                
                break;
        }
        printf("Informe a opção que deseja: ");
        scanf("%d", &op);
    }
    return(0);
}