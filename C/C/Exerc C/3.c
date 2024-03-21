#include <stdio.h>

int main(){


float distancia;
float combustivel;
float resultado;


printf("Digite a distância percorrida: ");
scanf("%f", &distancia);

printf("Digite a quantia de combustível gasta");
scanf("%f", &combustivel);

resultado = distancia/ combustivel;
printf("O consumo de combustível medio e de:%.2f\n" ,resultado);

return 0;
}






    



