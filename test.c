#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct Dados{
    int num;
    struct dados * prox;
    struct dados * ant;
}dados;


typedef struct Lista{
    int qtd;
    struct dados * ini;
    struct dados * fim;
}lista;

//prototipagem
dados * cria_dados();
lista * cria_lista();

void main(){
    dados * l1;
    l1 = cria_dados();
    printf("teste");
    
}


dados * cria_dados(){
    dados * novo;
    novo = (dados*)malloc(sizeof(dados));
    novo->num = 0;
    novo->prox = NULL;
    novo->ant = NULL;
    return novo;
}

lista * cria_lista(){
    lista * novo;
    novo = (lista*)malloc(sizeof(lista));
    novo->qtd = 0;
    novo->ini = NULL;
    novo->fim = NULL;
    return novo;

}

int insere_lista(lista * l , int x){
    novo = cria_dados();
    if(l->ini = l->fim){
        l->ini = novo;

    }else{
        
    }

}