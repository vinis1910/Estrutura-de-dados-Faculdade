#include<stdio.h>

#define X 50

int main(){
    char str[X] = "vinicius";

    for(int i = X-1; i>=0; i--){
        printf("%c", str[i]);
    }
}