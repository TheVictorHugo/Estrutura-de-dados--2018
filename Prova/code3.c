#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void main(){
    int i,j,diamante,maior,menor;
    char areia[30];
    scanf("%s", areia);

    diamante=0;
    maior=0;
    menor=0;
    for(i=0;i < strlen(areia); i++){
        if(areia[i] == '\0'){
            break;
        }else{
            if(areia[i] == '<'){
                maior++;
            }else if(areia[i] == '>'){
                menor++;
            }
        }
    }
    if(maior > menor){
        diamante = maior - menor;
    }else{
        diamante = menor - maior;
    }
    //printf("%d\n", maior);
    //printf("%d", menor);
    printf("%d", diamante);

    //printf("teste\n");
}