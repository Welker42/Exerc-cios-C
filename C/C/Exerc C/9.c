#include <stdio.h>

int main(){

float deposito;
float juros;

printf("Valor depositado: ");
scanf("%f", &deposito);

juros = deposito + (deposito * 7/100);

printf("O valor depositado mais juros sera de:  %.1f \n", juros);

return 0;
}