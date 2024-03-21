#include <stdio.h>

int main(){

float conta;
float num;

printf("Escreva a temperatura em °C:  ");
scanf("%f", &num);

conta = (9 * num + 160)/5;

printf("A temperatura em °F sera de:  %.1f \n", conta);



return 0;
}