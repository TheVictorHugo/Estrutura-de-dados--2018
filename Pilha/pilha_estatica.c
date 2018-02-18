#include <stdio.h>
#include <stdlib.h>


int tam = 10;
int top = 0;
int vet[10];

//prototipagem
void push(int valor);
void pop();
void retorna_ultimo_valor();


int main(){
    int valor;
   
    //printf("\n Essta e uma PILHA ESTATICA");
    //printf("\n Digite um numero para ser inserido na pilha: ");
    //scanf("%d", &valor);

    push(10);
    push(11);
    push(12);
    pop();
    retorna_ultimo_valor();
 
}

void push(int valor){
   if(tam == top){
       printf("\nPilha Cheia\n");
   }else{
       vet[top] = valor;
       top++;
   }
}

void pop(){
    if(top == 0){
        printf("Pilha Vazia");
    }else{
        vet[top-1] = 0;
        top--;
    }

}

void retorna_ultimo_valor(){
    int i;
    for(i=0; i< 10; i++){
        printf("%d ", vet[i]);
    }
    printf("\n");
    printf("top: %d \n", vet[top]);
}