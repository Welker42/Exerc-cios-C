#include <stdio.h>

int main(){

    char nome [100], sexo; 
    int homem, mulher, contador;

    homem = 0 ;
    mulher = 0 ;

    for(contador = 1; contador <=2; contador++){
    

        printf("Informe o nome da pessoa:\n");
        scanf("%s", nome);

        printf("Informe o sexo da pessoa:\n %d (M para masculino, F para feminino)", contador );
        scanf("%s", &sexo);

        if (sexo == 'M' || sexo == 'm' );{
            printf("%s, é homem" , nome );
        homem=homem+1;
        }

        else (sexo == 'F' || sexo =='f');{
        printf("%s, é mulher" , nome);
        mulher=mulher+1;
        }
        
        printf("O total de homens é: %i\n", homem);
        printf("O total de mulheres é: %i\n", mulher);
    }
    return 0;
}
 