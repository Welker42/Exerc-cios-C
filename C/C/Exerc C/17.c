#include <stdio.h>

int main(){

    float numero, contador, intervalo;

    intervalo = 0 ;

    for(contador = 1; contador <=80; contador++){

        printf("Informe o numero%.1f", contador);
        scanf("%f", &numero);

        if (numero >= 10 && numero <= 150){
        intervalo++;
        }
    }
    printf("A quantidade de numeros no intervalo: %.0f", intervalo);
    return 0;
}

