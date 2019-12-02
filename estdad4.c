#include <stdio.h> 
#include <stdlib.h> 
int funcao(int **piParametro) 
{
	printf("%d\n",&piParametro);
	printf("%d\n",piParametro); 
	printf("%d\n",*piParametro); 
	printf("%d\n",**piParametro); 
	return 0; 
	} 
int main( void ) 
	{ 
	int *piVariavel; 
	piVariavel = malloc(4); 
	*piVariavel = 20; 
	printf("Endereco de PV:%d\n",&piVariavel); 
	printf("PV aponta pra: %d\n",piVariavel); 
	printf("Valor de onde PV aponta: %d\n\n\n",*piVariavel); 
	funcao( &piVariavel );
	return 0; 
}
