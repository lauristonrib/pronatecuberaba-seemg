#include <stdio.h>
#include <stdlib.h>

int main (void){
	
int dias;  

printf("digite um numero para dias da semana:\n"); 

scanf("%d", &dias);
switch(dias){

case 1:
printf("o dia da semana e: %d - DOMINGO:\n", dias);
break;

case 2:
printf("o dia da semana e: %d -SEGUNDA-FEIRA \n",dias); 
break;

case 3:
printf("o dia da semana e: %d -TERCA-FEIRA \n", dias);
break;

case 4:
printf("o dia da semana e : %d QUARTA-FEIRA \n",dias);
break;

case 5:
printf("o dia da semana e : %d QUINTA-FEIRA \n",dias);
break;

case 6:
printf("o dia da semana e : %d SEXTA-FEIRA \n",dias);
break;
case7: 
printf("o dia da semana e : %d SABADO \n",dias);
break;
 default:


printf("nao dia da semana e : %d ! \n");

}
system("pause");


return 0;
}	
