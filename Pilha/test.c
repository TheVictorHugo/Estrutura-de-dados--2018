#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct Aluno{
    int idade;
    char name[50];
    struct aluno * prox;
}aluno;

typedef struct Pilha{
    int qtd;
    struct aluno * fim;
}pilha;

//prototiágem

void main(){
    printf("teste");
}

pilha* cria_pilha(){
    pilha * no;
    no = (pilha*) malloc(sizeof(pilha));
    return no;
}


int push( pilha* p){
    if(pilha->qtd == tam){
        printf("Pilha cheia\n");
        return 0;
    }else{
        pilha[qtd]->aluno.idade = x;
        pilha->qtd++;
        return 1;
    }
}

