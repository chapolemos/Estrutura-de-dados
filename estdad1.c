#include <stdio.h>
#include <string.h>

void imprimeArrayElemento (int *aArray, int iElemento){
	int *pResultado;
	pResultado = aArray+iElemento;
	printf("O elemento %d na pos de memoria %ld cujo inicio do vetor eh %ld eh: %ld\n",iElemento,pResultado,aArray,*pResultado);
	
}

int main (){
	
	int t[5] = {77,52,42,14,823};	
	imprimeArrayElemento(t,2);
	
}
