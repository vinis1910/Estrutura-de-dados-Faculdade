#include<stdio.h>

#define X 50

int main(){

    int v1[3] = {1, 2, 3};
    int v2[3] = {4, 5, 6};
    int* p1 = v1;
    int* p2 = v2;
    int m[2] =  {v1, v2};
    int* pm = m;

    for(int i = 0; i < 2; i++){
        for (int j = 0; i < 3; i++){
            printf("Valor %d do vetor: %d\n", i, *(m + i));
        }
        
    }

}