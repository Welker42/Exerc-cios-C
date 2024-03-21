#include <stdio.h>

int main(){

float nota1, nota2, nota3, media;

char nome [100];

printf("Informe o nome do aluno:");
scanf("%s", nome);

printf("Informe a primeira nota:");
scanf("%f", &nota1);

printf("Informe a segunda nota:");
scanf("%f", &nota2);

printf("Informe a terceira nota:");
scanf("%f", &nota3);

media = (nota1 + nota2 + nota3) /3 ;

if( media >=7){
printf("O aluno %s " " esta aprovado com media %.2f " , nome , media);


if( media <=5)
    printf("O aluno %s" " foi reprovado com media %.2f" , nome , media);
    }

    else{
    printf("O aluno %s " " esta de recuperacao com media %.2f ", nome , media);
    }
    return 0;
}