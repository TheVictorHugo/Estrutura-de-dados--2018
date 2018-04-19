#include <stdio.h>
#include <stdlib.h>

typedef struct Lista
{
    int valor;
    struct lista *prox;
} lista;

typedef struct Pilha
{
    struct lista *ini;
    struct lista *fim;
} pilha;

void main()
{
    printf("teste");
}

pilha *criaPilha()
{
    pilha *no;
    no = (pilha *)malloc(sizeof(pilha));
    no->ini = NULL;
    return no;
}

void insere(pilha *p)
{
    pilha *aux;
    lista *novo;
    novo = (lista *)malloc(sizeof(lista));

    if(p->fim == p->ini){
        p = aux;
    }
}
