#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/*

Escreva um programa leia uma sequencia de 30 inteiros.
Sempre que o numero recebido for par armazene-o e sempre
que for impar exclua o ultimo numero armazenado. Mostre
os números armazenados ao final da leitura.

*/

typedef struct elemento{
    int numero;
    struct elemento *prox;
}elemento;

typedef struct lista{
    int qtd;
    struct elemento * ini;
}lista;

//prototipagem
lista * cria_lista();
elemento * cria_elemento();
int insere_elemento_pilha(lista * l, int num);
void remove_elemento_pilha(lista * l, int num);
void mostrar(lista *l);
void remove_elemento_pilha(lista * l, int num);

void main(){
    lista * l1;
    l1 = cria_lista();
    insere_elemento_pilha(l1, 10);
    insere_elemento_pilha(l1, 11);
    insere_elemento_pilha(l1, 12);
    insere_elemento_pilha(l1, 13);
    insere_elemento_pilha(l1, 14);
    insere_elemento_pilha(l1, 15);

    mostrar(l1);

    remove_elemento_pilha(l1, 12);

    mostrar(l1);

    //printf("Teste");
}


lista * cria_lista(){
    lista * novo;
    novo = (lista*)malloc(sizeof(lista));
    novo->qtd = 0;
    novo->ini = NULL;
    return novo;
}

elemento * cria_elemento(){
    elemento * novo;
    novo = (elemento*)malloc(sizeof(elemento));
    novo->numero = 0;
    novo->prox = NULL;
    return novo;
}

int insere_elemento_pilha(lista * l, int num){
    elemento *novo, * aux;
    novo = cria_elemento();
    novo->numero = num;
    if(l->ini == NULL){
        l->ini = novo;
    }else{
        aux = l->ini;
       while(aux->prox != NULL){
           aux = aux->prox;
       }
       aux->prox = novo;
    }
    l->qtd++;
    return 1;
}

void mostrar(lista *l){
    elemento * aux;
    if(l->ini == NULL){
        printf("Lista Vazia");
    }else{
        aux = l->ini;
       // printf("\nnumero: %d", aux->numero);
        while(aux->prox != NULL)
        {
            printf("\nnumero: %d", aux->numero);
            aux = aux->prox;
        }
    }
}

void remove_elemento_pilha(lista * l, int num){
    //printf("teste 1");
    elemento * ant;
    elemento * aux;
    if(l->ini == NULL){
        printf("\nNão foi pssivel remover lista vazia");
    }else{
        //printf("teste 2");
        ant = NULL;
        aux = l->ini;
        while(aux->numero != num && aux->prox != NULL){
            ant = aux;
            aux = aux->prox;
        }
        if(aux->numero == num){
            if(ant == NULL){
                l->ini = aux->prox;
            }
            ant->prox = aux->prox;
            free(aux);
            l->qtd--;
        }   
    }
}