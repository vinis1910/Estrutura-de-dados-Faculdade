//tad_vetor.c
#include "tad_vetor.h"


/********************************************
 * Especificação dos dados
 *******************************************/
struct vetor{
    int* vet;
    int tam;
    int qtd;
};

/********************************************
 * Implementação das funções
 *******************************************/
Vetor* vet_criar(){
    Vetor* v = (Vetor*) malloc(sizeof(Vetor));
    v->vet = (int*) malloc(sizeof(int) * v->tam);
    v->qtd = 0;
    v->tam = 1;

    for(int i = 0; i < v->tam; i++){
        v->vet[i] = NULL;
    }
    return v;
};

bool vet_anexar(Vetor* v, int elemento){
    if(v->qtd == v->tam){
        v->tam *= 2;
        v->vet = realloc(v->vet, v->tam * sizeof(int));
    }
    v->vet[v->qtd] = elemento;
    v->qtd++;
    return 1;
};

bool vet_inserir(Vetor* v, int elemento, int posicao){
    if(v->qtd == v->tam){
        v->tam *= 2;
        v->vet = realloc(v->vet, v->tam * sizeof(int));
    }
    if(v->vet[posicao] == NULL) return 0;

    for (int i = v->qtd; i >= posicao; i--){
        v->vet[i+1] = v->vet[i];
    }
    v->vet[posicao] = elemento;
    v->qtd++;
    return 1;
};

bool vet_substituir(Vetor* v, int posicao, int novoElemento){
    if(v->vet[posicao] == NULL) return 0;
    v->vet[posicao] = novoElemento;
    return 1;
};

bool vet_removerPosicao(Vetor* v, int posicao, int* endereco){
    if(v->vet[posicao] == NULL) return 0;

    *endereco = v->vet[posicao];
    v->vet[posicao] = NULL;
    v->qtd--;
    for (int i = posicao; i < v->qtd; i++){
        v->vet[i] = v->vet[i+1];
    }
    return 1;
};

int vet_removerElemento(Vetor* v, int elemento){
    for (int i = 0; i < v->qtd; i++){
        if(v->vet[i] == elemento) v->vet[i] = NULL;
        if(v->vet[i] == NULL) v->vet[i] = v->vet[i+1];
    }
    v->qtd--;
};

int vet_tamanho(Vetor* v){
    int qtdElementos = 0;
    if(v->qtd == 0) return 0;
    for (int i = 0; i < v->qtd; i++){
        qtdElementos++;
    }
    return qtdElementos;
};

bool vet_elemento(Vetor* v, int posicao, int* saida){
    *saida = v->vet[posicao];
    return 1;
};

int vet_posicao(Vetor* v, int elemento){
    for (int i = 0; i < v->qtd; i++){
        if (v->vet[i] == elemento) return &v->vet[i];
    }
};

void vet_imprimir(Vetor* v){
    printf("[");
    for (int i = 0; i < v->qtd; i++){
        printf("%d", v->vet[i]);
        if(i < v->qtd-1) printf(",");
    }
    printf("]");
};

void vet_desalocar(Vetor** endVetor){
    free(endVetor);
    *endVetor = NULL;
};

bool vet_toString(Vetor* v, char* saida){
    *saida = '\0';
    strcat(saida, "[");
    for (int i=0; i < v->qtd; i++){
        char elemento[20];
        sprintf(elemento, "%d", v[i]); // converte int para char[]
        strcat(saida, elemento);
        if(i < v->qtd-1) strcat(saida, ",");
    }
    strcat(saida, "]");
    return true;
};
