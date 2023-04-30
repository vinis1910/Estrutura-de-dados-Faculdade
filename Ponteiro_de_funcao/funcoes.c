#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

int e_par(int x) {
    if(x % 2 == 0) return x;
    else return -1; // condição para filtrar números pares
}

int e_positivo(int x) {
    if(x > 0) return x;
    else return -1; // condição para filtrar números pares
}

void imprimeVetor(int* v, int tam){
    printf("[");
    for (int i = 0; i < tam; i++){
        printf("%d", v[i]);
        if(i < tam-1) printf(",");
    }
    printf("]");
}
 
void print_int(int x){
    printf("%d ", x);
}

int* filter(int* v, int tam, int(*funcao)(int), int* tamanho){
    int* novoVetor = (int*) malloc(tam * sizeof(int));
    int count = 0;
    for (int i = 0; i <= tam; i++){
        if(funcao(v[i]) != -1){
            novoVetor[count] = v[i];
            count++;
            *tamanho = *tamanho + 1;
        };
    }
    return novoVetor;
}

void forEach(int* v, int tam, int(*funcao)(int)){
    for (int i = 0; i < tam; i++){
        funcao(v[i]);
    }
}

int* every(int* v, int tam, int(*funcao)(int)){
    int* novoVetor = (int*) malloc(tam * sizeof(int));
    int count = 0;
    for (int i = 0; i <= tam; i++){
        if(funcao(v[i]) != -1){
            novoVetor[count] = v[i];
            count++;
        }else return false;
    }
    return novoVetor;
}

int concat(int* v1, int tam1, int* v2, int tam2, int* tamanho){
    int tam = tam1 + tam2;
    int count = 0;
    int* novoVetor = (int*) malloc(tam * sizeof(int));
    for(int i = 0; i < tam; i++){
        if(i < tam1){
            novoVetor[i] = v1[i];
        }
        if(i >= tam1){
            novoVetor[i] = v2[count];
            count++;
        }
    }
    return novoVetor;
}

