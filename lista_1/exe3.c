#include<stdio.h>

int main(){
    int x = 0;
    int count = 0;
    scanf("%d", &x);

    char str[x];

    for(int i = 0; i<x; i++){
        scanf("%c", &str[i]);
    }

    for(int i = 0; i<x; i++){
        if((str[i] == 'a') || (str[i] == 'e') || (str[i] == 'i') || (str[i] == 'o') || (str[i] == 'u'))
            count++;
    }
    printf("%d", count);
}