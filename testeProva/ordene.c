#include <stdio.h>
#include <stdlib.h>

//prototipagem
void bubblesort(int vet[], int tam);
void mostra(vet, tam);


void main(){
    int vet[10]= {2,4,5,3,1,9,8,7,6,0};
    int tam = 10;
    bubblesort(vet,tam);
    mostra(vet, tam);
    //printf("test");
}

void bubblesort(int vet[], int tam){
    //printf("teste 1");
    int i;
    int j;
    int aux;

    for(i=0;i < tam;i++){
        for(j =0; j < tam-1; j++ ){
            if(vet[j] < vet[j+1]){
                aux = vet[j];
                vet[j] = vet[j +1];
                vet[j + 1 ] = aux;
            }
        }
        tam --;
    }
}

void mostra(int vet[],int tam){
    int i;
    for(i =0; i < tam; i++){
        printf("\nnumero: %d", vet[i]);
    }
}