#include <stdio.h>

int main(){

int num;


printf("Informe um numero:  \n");
scanf("%d", &num);

if( num>10){

printf("O numero e maior que 10");
}
else {
printf("O numero e menor ou igual a 10");
}

return 0;
}