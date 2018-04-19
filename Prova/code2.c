#include <stdio.h>
#include <stdlib.h>


void bublesord(int vet[], int tam);
void mostra(int vet[], int tam);


void main (){
    int vet[10] = {4,3,1,8,2,5,9,6,7,0};
    bublesord(vet, 10);
    mostra(vet, 10);

    printf("teste\n");
}


void bublesord(int vet[], int tam){
    int i,j,aux;
    for(i=1;i<tam;i++){
        for(j=0;j<tam-1;j++){
            if(vet[j] > vet[j +1]){
                aux = vet[j];
                vet[j] = vet[j + 1];
                vet[j + 1] = aux;
            }
        }
        tam--;
    }
}
void mostra(int vet[], int tam){
    int i;
    for(i=0;i<tam ;i++){
        printf("%d\n", vet[i]);
    }
}