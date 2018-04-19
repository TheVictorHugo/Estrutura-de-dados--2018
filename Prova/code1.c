#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct elemento{
    int matricula;
    char nome[30];
    struct elemento * prox;
}elemento;

typedef struct lista{
    int qtd;
    struct elemento * ini;
}lista;

//Prototipagem
lista * cria_lista();
elemento * cria_elemento();
int insere_lista(lista * l, int mat, char * nome);
void mostra_lista(lista *l);
int remover_lista(lista * l, int num);



void main(){
    
    lista * l1;
    l1 = cria_lista();

    insere_lista(l1, 10, "victor");
    //mostra_lista(l1);
    insere_lista(l1, 11, "hugo");
    //mostra_lista(l1);
    insere_lista(l1, 14, "thor");
  
   // mostra_lista(l1);

    remover_lista(l1, 14);

     mostra_lista(l1);

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
    novo = (lista*)malloc(sizeof(lista));
    novo->matricula = 0;
    strcpy(novo->nome, "");
    novo->prox = NULL;
    return novo;
}

int insere_lista(lista * l, int mat, char * nome){
    elemento * novo;
    elemento * aux;
    novo = cria_elemento();
    novo->matricula = mat;
    strcpy(novo->nome, nome);
    if(l->ini == NULL){
        l->ini = novo;
        return 1;
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

int remover_lista(lista * l, int num){
    elemento * aux;
    elemento * ant;
    if(l->ini == NULL){
        printf("Lista vazia\n");
        return 0;
    }else{
        aux = l->ini;
        ant = NULL;
        while(aux->matricula != num && aux->prox != NULL){
            ant = aux;
            aux = aux->prox;    
        }
        if(aux->prox == NULL  && aux->matricula != num){
            printf("item não encontrado\n");
            return 0;
        }else{
            if(ant == NULL){
                l->ini = aux->prox; 
            }else if(aux->prox != NULL){
                ant->prox = aux->prox;
            }else if(aux->prox==NULL){
                ant->prox = NULL;
            }
            free(aux);
            l->qtd--;
            return 1;
        }
    }
}


void mostra_lista(lista *l){
    elemento * aux;
    if(l->ini == NULL){
        printf("Lista Vazia\n");
    }else{
        aux = l->ini;
        while(aux->prox != NULL){
            printf("Matricular %d", aux->matricula);
            printf(" Nome: %s\n", aux->nome);
            aux =aux->prox;
        }
    }
}
