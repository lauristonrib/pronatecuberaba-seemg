#include <stdio.h>
#include <stdlib.h>

int main (void){
	

	float num1, num2, divisao;
printf("digite o primeiro numero:\n")	;
scanf("%f",&num1);

printf ("digite o segundo numero:\n");
scanf ("%f",&num2);

if (num2>0)
{
divisao = num1 / num2;

printf ("o resultado da divisao e: %f \n",divisao);
}

else 
printf ("o denominador deve ser maior que 0 \n");

system("pause");
return 0;
}

