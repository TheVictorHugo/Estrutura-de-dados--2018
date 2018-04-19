#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void main(){
    int ini;
    int fim;
    int valor;
    int valor2;
    int resultado;
    scanf("%d %d", &ini, &fim);

    if(ini == fim){
         resultado = 24;  
         printf("O JOGO DUROU %d HORA(S)\n", resultado);
       }
    else if(fim < ini){
       valor = ini- 24;
       valor2 = fim - 0;
       resultado = - valor + valor2;
       printf("O JOGO DUROU %d HORA(S)\n", resultado);
       
    }else{
       valor = ini- 24;
       valor2 = fim - 0;
       resultado = (-valor + valor2) - 24;
      printf("O JOGO DUROU %d HORA(S)\n", resultado);
    }
}