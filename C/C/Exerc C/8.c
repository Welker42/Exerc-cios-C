#include <stdio.h>

int main(){

float cotacao;
float real;
float dolar;

printf("Escreva o valor em dolar: ");
scanf("%f", &dolar);

printf("Insira o valor da cotacao: ");
scanf("%f", &cotacao);

real = dolar * cotacao;

printf("O valor em reais sera de :   %.2f \n", real);

return 0;
}