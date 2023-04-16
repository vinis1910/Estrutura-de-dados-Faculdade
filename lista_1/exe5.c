#include <stdio.h>

int main(){
    int x = 0, soma = 0;

    scanf("%d", &x);

    int str[x];

    for(int i = 0; i<x; i++){
        scanf("%d", &str[i]);
    }

    for(int i = 0; i < x; i++){
        soma += str[i];
    }

    printf("%d", soma);
}