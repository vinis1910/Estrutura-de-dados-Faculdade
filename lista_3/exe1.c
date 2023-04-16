#include<stdio.h>

#define X 50

int main(){

    int i = 30;
    int* x = &i;
    int v[4] = {1,2,3,4};
    int* p = v;
    int* w = *(v + 2);

    for(int i = 0; i < 4; i++){
        printf("Valor %d do vetor: %d\n", i, *(v + i));
    }

}