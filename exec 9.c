#include <stdio.h>
#include<stdlib.h>
#include<locale.h>


int main (void){

setlocale (LC_ALL, "Portuguese");

float num1, num2, somar, subtrair, multiplicar, dividir, sair;
char opcao ='S';
while (opcao == 'S'){
	
printf ("1 SOMAR \n \n");
printf ("2 SUBTRAIR \n \n");
printf ("3 MULTIPLICAR \n \n");
printf ("4 DIVIDIR \n \n");
printf ("0 SAIR \n \n");

printf ("escolha uma opcao");
scanf ("%d",&opcao);
printf("\n");

switch (opcao){

case 1:  
printf ("digite o primeiro numero:\n");
scanf ("%d",&num1);

printf("digite o segundo numero \n"); 
scanf ("%d", &num2);

printf ("\n");
somar = num1 + num2; 
printf ("o resultado da soma e: %d \n", somar);
break;

case 2:
printf ("digite o primeiro numero\n");
scanf ("%d",&num1);

printf ("digite o segundo numero \n");
scanf ("%d",&num2);
subtrair = num1 - num2;
printf ("o resultado da subtracao e: %d \n", subtrair);
break;

case 3:
printf("digite o primeiro numero \n");
scanf ("%d", &num1);

printf ("digite o segundo numero \n");
scanf("%d", &num2);

multiplicar = num1 * num2;

printf ("o resultado da multiplicacao e: %d \n", multiplicar);
break;

case 4:
printf ("digite o primeiro numero \n");
scanf ("%f", &num1);
printf ("digite o segundo numero \n"); 
scanf ("%f", &num2);

while (num2 <=0){
printf (" o denominador deve ser maior que 0. Redigite : \n");
scanf ("%f", &num2);
}

dividir = num1/ num2;
printf ("o resultado da divisao e: %f \n", dividir);
break;

case 0:
exit (0);
break;

default:
printf ("nao e uma opcao valida");
break;
	
}

printf (" deseja continuar? S/N ");
scanf (" %c", &opcao);
opcao = toupper (opcao);

if (opcao == 'S' )
system ("cls");
	
}


system ("pause");
return 0;

}



















































































































































































































































 
