#include <stdio.h>

int main(){

float fabrica;
float distribuidor;
float impostos;
float consumidor;

printf("Informe o custo de fabrica do carro:  ");
scanf("%f", &fabrica);

distribuidor = 0.28;

impostos = 0.45;

consumidor = fabrica + (fabrica * impostos) + (fabrica * distribuidor);

printf("O custo ao consumidor do carro e: R$  %.1f \n", consumidor);

return 0;
}