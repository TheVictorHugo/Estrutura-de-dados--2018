#include <stdio.h>
#include <stdlib.h>
#include <string.h>


typedef struct Aluno{
    char nome[50];
    int matricula;
    struct aluno * prox;
    struct aluno * ant;
}aluno;

typedef struct Lista{
    int qtd;
    struct aluno * ini;
    struct aluno * fim;
}lista;


void main(){



} 


lista * cria_lista(){
    lista * novo;
    novo = (lista*)malloc(sizeof(lista));
    novo->qtd = 0;
    novo->ini = NULL;
    novo->fim = NULL;
    return novo;
}

int insere(lista *l, int valor, char nome[50]){
    aluno * novo;
    novo = (aluno*)malloc(sizeof(lista));
    printf("Digite o nome\n");
    gets(novo->nome);
    printf("Digite a matricula\n");
    scanf("%d", novo->matricula);
    if(l->ini == NULL){
        l->ini = novo;
        return 1;
    }else{
        novo->prox = l->ini;
        l->ini = novo;
    }
    l->qtd++;
    return 1;
}