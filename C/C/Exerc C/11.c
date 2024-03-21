#include <stdio.h>

int main(){

float preco;
float percentual;
float conta;

printf("Informe o preco de custo do produto: ");
scanf("%f", &preco);

printf("Informe o percentual de aumento desejado: ");
scanf("%f", &percentual);

conta = preco + (preco*(percentual / 100));

printf("O valor com acrescimo sera de: %.1f \n", conta);

return 0;
}