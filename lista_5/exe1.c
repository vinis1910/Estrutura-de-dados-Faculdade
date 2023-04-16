#include <stdio.h>

char ResultNota1(float nota1, float nota2, float nota3){
        
    float nota_final = (nota1 + nota2 + nota3) / 3.0;
    
    if (nota_final >= 9.0) {
        return 'A';
    } else if (nota_final >= 7.0 && nota_final < 9.0) {
        return 'B';
    } else if (nota_final >= 6.0 && nota_final < 7.0) {
        return 'C';
    } else {
        return 'R';
    }
    
}

void ResultNota2(float nota1, float nota2, float nota3, char* letra_nota){
    float nota_final = (nota1 + nota2 + nota3) / 3;
    
    if (nota_final >= 9.0) {
        *letra_nota = 'A';
    } else if (nota_final >= 7.0 && nota_final < 9.0) {
        *letra_nota = 'B';
    } else if (nota_final >= 6.0 && nota_final < 7.0) {
        *letra_nota = 'C';
    } else {
        *letra_nota = 'R';
    }
}

int main() {
    float nota1, nota2, nota3;
    char letra_nota;
    
    printf("Digite a nota da primeira prova: ");
    scanf("%f", &nota1);
    
    printf("Digite a nota da segunda prova: ");
    scanf("%f", &nota2);
    
    printf("Digite a nota da terceira prova: ");
    scanf("%f", &nota3);

    //printf("Voce tirou um %c", ResultNota1(nota1, nota2, nota3));
    ResultNota2(nota1, nota2, nota3, &letra_nota);
    printf("Voce tirou um %c", letra_nota);
}