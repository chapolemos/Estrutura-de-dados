#include <stdio.h>

void soma(int, int, int*);

int main(void){
	int iValorA;
	int iValorB;
	int iResultado;
	
	printf("Entre com os valores:");
	
	scanf("%d %d",&iValorA,&iValorB);
	
	printf("Endereco de iResultado = %d\n",&iResultado);
	
	soma(iValorA,iValorB,&iResultado);
	
	printf("Soma: %d\n",iResultado);
	
	return 0;
}

void soma (int piValorA, int piValorB, int *piResultado){
	
	printf("Endereco de piResultado = %d\n",piResultado);
	*piResultado = piValorA + piValorB;
	return;
}
