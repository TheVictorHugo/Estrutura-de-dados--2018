#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct Aluno{
    char nome[50];
    int matricula;
    struct aluno * prox;
}aluno;

typedef struct Pilha{
    int qdt;
    struct aluno * inicio;
}pilha;

//prototipagem
pilha * cria_pilha();
int push(pilha* p,int x);
void pop(pilha * p);
void mostra_pilta_toda(aluno *p);

void main(){
    aluno * lista;
    lista = cria_pilha();
   pop(lista);
   push(lista,10);
   push(lista,11);
   push(lista,12);
   pop(lista);

    mostra_pilta_toda(lista);
    //printf("ultimo elemento: %d\n", lista->matricula);
} 

pilha* cria_pilha(){
    pilha * novo;
    novo = (pilha*)malloc(sizeof(pilha));
    novo->qdt = 0;
    novo->inicio = NULL;
    return novo;
}

int push(pilha* p,int x){
    aluno * novo;
    novo = (aluno*)malloc(sizeof(aluno));
    novo->matricula = x;
    novo->prox = NULL;
    if(p->inicio == NULL){
        p->inicio = novo;
        printf("%d\n", novo->matricula);
        return 1;
    }else{
        novo->prox = p->inicio;
        p->inicio = novo;
    }
    p->qdt++;
    printf("%d\n", novo->matricula);
    return 1;
}

void pop(pilha * p){
    aluno * aux;
    if(p->inicio == NULL){
        printf("pilha vazia\n");
    }else{
        aux = p->inicio;
        p->inicio = aux->prox;
        free(aux);
    }
    p->qdt--;
}

void mostra_pilta_toda(aluno *p){
    aluno * aux;

    while(p->prox != NULL){
        printf("%d\n", p->matricula);
    }
}













