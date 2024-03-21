#include <stdio.h>

int main(){
char nome [100];
float salario;
float vendas;
float resultado;

printf("Digite o nome:\n ");
scanf("%s" , nome);

printf("Digite ao salario:\n ");
scanf("%f", &salario);

printf("Insira o valor em vendas:\n ");
scanf("%f", &vendas);

resultado = salario + (vendas * 15/100);
printf("O salario sera de : %.2f\n" , resultado);

return 0;
}






