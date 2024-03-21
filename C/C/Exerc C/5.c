#include <stdio.h>

int main(){

char nome [100];
float media;
float nota1;
float nota2;
float nota3;


printf("Escreva o nome: ");
scanf("%s", &nome);

printf("Nota primeira prova: ");
scanf("%f", &nota1);

printf("Nota segunda prova: ");
scanf("%f", &nota2);

printf("Nota terceira prova: ");
scanf("%f" , &nota3);

printf("Nome:%s\n " ,nome);

media = (nota1 + nota2 + nota3)/ 3;
printf("A media do bimestre e de:%.2f\n" ,media);

return 0;
}