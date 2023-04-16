#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<stdbool.h>

#define TAM 50

void getFirstWord(char *vet){

    for (int i=0; i < strlen(vet); i++){
        if(vet[i] >= 97 && vet[i] <= 122){
            if((vet[i] != ' ') || (vet[i-1] == ' ' && vet[i] && vet[i] >= 97 && vet[i] <= 122)){
                printf("%c", vet[i]);
            }
        }
    }
}

int main(){
    char vet[TAM]= "dasbuid saiudsa fsa  dnsiad   ";

    for(int i = 0; i < TAM; i++){
        scanf("%c", &vet[i]);
    }
    printf("hello");
    getFirstWord(vet);
    return 0;
}