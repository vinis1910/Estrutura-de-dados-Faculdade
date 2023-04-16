#include<stdio.h>

#define TAM 100

int main(){
    int flag = 0;

    char str[TAM];
    char str2[TAM];

    
    scanf("%s %s", str, str2);    

    
    int i = 0;
    while (str[i] != 0){
        if(str[i] == str2[i]){
            flag = 1;
        }else{
            flag = 0;
            break;
        }
        i++;
    }
    printf("%d", flag);
}