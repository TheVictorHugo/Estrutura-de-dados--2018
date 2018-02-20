#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct lista{
    int info;
    struct lista * prox;
    //struct lista * anterior;
}lista;

typedef struct Pilha{
    struct lista* topo;
    //struct lista * ini;
}pilha;


//prototipagem
pilha* cria_pilha();
void push (pilha* p, int valor);
int pop(pilha* p);
void imprimir(pilha* p);


int main(){
    pilha *p;
  
    p = cria_pilha();


    push(p,10);
    imprimir(p);

    printf("teste\n");
}

pilha* cria_pilha(){
    pilha * p = (pilha*) malloc(sizeof(pilha)); // aloca um endereço para pilha
    p->topo = NULL; // set os valores para não dar erro
    return p; // retorna o ponteiro criado
}

void push (pilha* p, int valor){
    lista * n = (lista*)malloc(sizeof(lista)); //alocou na memoria
    n->info = valor; //colocou o valor
    n->prox = p->topo; // aponta para a proxima celula 
    p->topo = n; // topo == top // top agora aponta para N
}

int pop(pilha* p){
    lista * aux;// define um auxiliar 
    int valor; //cria um variavel auxiliar
    if(p->topo == NULL){ // verirfica se pilha esta vazia
        printf("Pilha vazia");
        return 0;
    }
    //faz a traca de apontamentos
    aux =  p->topo;
    valor = aux->info;
    p->topo = aux->prox;
    free(aux);
    return valor; // retornna o valor que vai ser retirado
}

void imprimir(pilha* p){
    lista * aux;
    printf("\n%d\n", aux->info); // imprimir o top
}
