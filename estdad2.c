#include <stdio.h>
#include <string.h>

void imprimeArrayElemento (int *aArray, int iElementoI, int iElementoJ){
	int *pResultado;
	pResultado = aArray+(iElementoI*3)+iElementoJ;
	printf("O elemento %d %d na posicao de memoria %ld \n cujo inicio do vetor fica em %ld eh: %ld\n",iElementoI,iElementoJ,pResultado,aArray,*pResultado);
}

int main (){
	
	int t[3][3] = {{10,11,12},{20,21,22},{30,31,32}};	
	imprimeArrayElemento(t,1,2);
	
	//printf("%d",t[2][2]);
	
}
