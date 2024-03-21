#include <stdio.h>

int main(){

int num1;
int num2;


printf("Informe o numero A:  \n");
scanf("%i", &num1);

printf("Informe o numero B: \n");
scanf("%i", &num2);

if( num1<num2){

printf("O valor A %i" " e menor que o valor B %i\n",num1 ,num2);
}
else{
printf("O valor B %i" " e menor que o valor A %i\n",num2 ,num1);
}

return 0;
}