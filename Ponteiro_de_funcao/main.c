#include "funcoes.c"

int main() {
//    int vetor[10] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};			
//    int tamanho = -1;
//    int *novo = filter(vetor, 10, e_par, &tamanho); // filtra apenas números pares
//
//	if(novo == NULL){
//        if (tamanho == -1)
//            printf("Erro na criacao do vetor\n");
//        else
//            printf("Vetor vazio\n");
//    } else {
//        imprimeVetor(novo, tamanho);
//    }
//    free(novo); // libera a memória alocada para o novo array
    
//    int array[10] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
//    printf("\n");
//    

//    forEach(array, 10, print_int); // imprime cada elemento do array

//    int v1[10] = {1, 2, 3, 4, 5, -6, 7, 8, 9, 10};
//    int v2[10] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    

		// verifica se todos os números são positivos
//    int* result = every(v1, 10, e_positivo); 

//    if (result) {
//        printf("Todos os numeros sao positivos.\n");
//    } else {
//        printf("Alguns dos numeros sao negativos.\n");
//    }

//    result = every(v2, 10, e_positivo); 
//    if (result) {
//        printf("Todos os numeros sao positivos.\n");
//    } else {
//        printf("Alguns dos numeros sao negativos.\n");
//    }
//    free(result);

    int vetor1[5] = {1, 2, 3, 4, 5};
    int vetor2[5] = {6, 7, 8, 9, 10};
    int tamanho;

    int *result = concat(vetor1, 5, vetor2, 5, &tamanho); // concatena os dois arrays

    imprimeVetor(result, 10); // imprime o array resultante

    free(result); // libera a memória alocada
    return 0;
}