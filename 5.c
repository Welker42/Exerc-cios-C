#include <stdio.h>

int main() {
    float nota ;
    float nota2 ;
    float nota3 ;
    float media ;
    
    printf("Digite a primeira nota: ");
    scanf("%f", &nota);
    
    printf("Digite a segunda nota: ");
    scanf("%f", &nota2);

    printf("Digite a terceira nota: ");
    scanf("%f", &nota3);
    
    media = (nota + nota2 + nota3) /3 ;
    printf("A media do bimestre é de: %.2f\n" ,media);

    return 0;
}