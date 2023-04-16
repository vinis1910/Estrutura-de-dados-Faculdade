#include <stdio.h>
#include <string.h>

#define MAX_LINHAS 10
#define MAX_COLUNAS 50

void alinharADireita(char matriz[][MAX_COLUNAS], int nLinhas){
    int tamanhoMaiorPalavra = 0;

    for (int i = 0; i < nLinhas; i++){
        int tamanhoPalavraAtual = strlen(matriz[i]);
        if (tamanhoPalavraAtual > tamanhoMaiorPalavra){
            tamanhoMaiorPalavra = tamanhoPalavraAtual;
        }
    }

    for (int i = 0; i < nLinhas; i++){
        int tamanhoPalavraAtual = strlen(matriz[i]);
        int nEspacos = tamanhoMaiorPalavra - tamanhoPalavraAtual;
        for (int j = 0; j < nEspacos; j++){
            putchar(' ');
        }
        printf("%s\n", matriz[i]);
    }
}

int main(){

    char matriz[MAX_LINHAS][MAX_COLUNAS] = {"vini", "Vinicius", "Ana"};

    alinharADireita(matriz, MAX_LINHAS);
}