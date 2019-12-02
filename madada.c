#include <stdio.h>
#include <string.h>
#include <stdlib.h>

void alocaMatrizDinamica (int ***p, int i, int j){
	int x;
	*p = (int**)malloc(4*i);
	if (*p == NULL){
		printf("\nNope.");
		exit(1);
	}
	for (x=0;x<i;x++){
		(*p)[x] = malloc(4*j);
		if ((*p)[x] == NULL){
			printf("\nNope.");
			exit(1);
		}
	}
}	

void preencheMatrizDinamica (int **p, int i, int j)
{
	int x, y;
	for (x=0;x<i;x++)
	{
		for (y=0;y<j;y++)
		{
			p[x][y] = x+y;
			printf("%d ",p[x][y]);
		}
		printf("\n");
	}
}

int main (){
	int **p;
	alocaMatrizDinamica(&p,6,6);
	preencheMatrizDinamica(p,6,6);
	return 0;
}
