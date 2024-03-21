#include <stdio.h>

int main() {
    float distancia;
    float combustivel;
    float resultado;
    
    printf("Digite a distancia percorrida: ");
    scanf("%f", &distancia);
    
    printf("Digite a quantia de combustivel gasta: ");
    scanf("%f", &combustivel);
    
    resultado = distancia / combustivel;
    printf("O consumo de combustivel medio e de:%.2f\n" ,resultado);

    return 0;
}