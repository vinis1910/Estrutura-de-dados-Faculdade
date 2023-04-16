#include <stdio.h>
#include <stdlib.h>

int main() {
    float decimal;
    int inteiro, resto, i = 1, binario = 0;

    printf("Digite um numero decimal: ");
    scanf("%f", &decimal);

    inteiro = abs((int) decimal);  // converte para inteiro e pega o valor absoluto
    decimal = fabs(decimal - inteiro);  // pega o valor absoluto da parte decimal

    // converte a parte inteira para binário
    while (inteiro != 0) {
        resto = inteiro % 2;
        inteiro = inteiro / 2;
        binario += resto * i;
        i *= 10;
    }

    // adiciona a parte decimal em binário
    if (decimal != 0) {
        printf(".");
        for (i = 0; i < 8; i++) {
            decimal *= 2;
            binario = binario * 10 + (int) decimal;
            decimal -= (int) decimal;
        }
    }

    // imprime o valor binário
    if (decimal < 0) {
        printf("-");
    }
    printf("%d", binario);
}