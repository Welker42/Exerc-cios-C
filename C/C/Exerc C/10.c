#include <stdio.h>

int main(){

float valor;
float prestacoes;
float conta;

printf("Insira o valor do produto: ");
scanf("%f", &valor);

printf("Insira a quantidade de prestacoes: ");
scanf("%f", &prestacoes);

conta = valor / prestacoes;



printf("O valor das prestacoes sera de: %.2f ", conta);



return 0;
}