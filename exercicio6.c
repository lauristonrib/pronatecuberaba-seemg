#include <stdio.h>
#include <stdlib.h>

int main (void){
	

float cod_peca, valor_peca, num_peca;  

printf("receba o cod da peca:\n");

scanf("%f", &cod_peca);

printf ("receba o valor da peca:\n");

scanf("%f", &valor_peca);

printf ("receba a quantidade de pecas \n");
 scanf ("%f", &num_peca);

valor_peca = num_peca * valor_peca;

printf("o codigo da peca e : %f \n", cod_peca);


printf("o valor da peca e : %f \n", valor_peca);



system("pause");


return 0;
}

