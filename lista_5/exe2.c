#include <stdio.h>

void printarResultadoIni(int* vet1){
    printf("[");
    for (int i = 0; i < 10; i++){
        printf("%d", vet1[i]);
        if(i < 9) printf(",");
    }
    printf("]\n");
}

void multiplicaPorMenosUm(int* vet1){
    for (int i = 0; i < 10; i++){
        vet1[i] *= -1;
    }
}

void imprimiResultadoMult(int* vet1){
    printf("[");
    for (int i = 0; i < 10; i++){
        printf("%d", vet1[i]);
        if(i < 9) printf(",");
    }
    printf("]\n");
}
int main(){

    int vet1[10];
    int vet2[5];

    int i;
    // Inicializa o vetor com o valor 1
    for (i = 0; i < 10; i++){
        vet1[i] = 1;
    }

    // Imprime o resultado da inicialização
    printarResultadoIni(vet1);
    
    // Multiplica todos os valores por -1
    multiplicaPorMenosUm(vet1);

    // Imprime o resultado da multiplicação
    imprimiResultadoMult(vet1);

    // Inicializa o vetor VET2 com o valor 20
    for (i = 0; i < 5; i++){
        vet2[i] = 20;
    } 

    // Imprime o resultado da inicialização
    printf("[");
    for (i = 0; i < 5; i++){
        printf("%d", vet2[i]);
        if(i < 4) printf(",");
    }
    printf("]\n");

    // Multiplica todos os valores por 2
    for (i = 0; i < 5; i++){
        vet2[i] *= 2;
    }

    // Imprime o resultado da inicialização
    printf("[");
    for (i = 0; i < 5; i++){
        printf("%d", vet2[i]);
        if(i < 4) printf(",");
    }
    printf("]\n");

}