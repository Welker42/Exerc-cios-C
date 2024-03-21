#include <stdio.h>

int main(){

    float idade,contador, maior, menor;

    maior = 0 ;
    menor = 0 ;

    for(contador = 1; contador <=75; contador++){
    

        printf("Informe a idade:\n %.0f ", contador );
        scanf("%f", &idade);

        if (idade >= 18){
            scanf("Maior de idade\n ");
        maior++;
        }

        else{
        printf("Menor de idade\n ");
        menor++;

        }
    }
    printf("Total de pessoas maiores de idade: %.0f\n ", maior);
    printf("Total de pessoas menores de idade: %.0f\n ", menor);
    return 0;
}
