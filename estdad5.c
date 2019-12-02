#include <stdio.h>
#include <stdlib.h>

int **aloca(int i, int j);
void libera(int **p, int i, int j);
void leitura(int **p, int i, int j);
void imprime(int **p, int i, int j);

int main(void){
	int **p;
	int **p1;
	
	p = aloca(3,2);
	leitura(p,3,2);
	
	p1 = aloca(2,3);
	leitura(p1,2,3);
	
	imprime(p,3,2);
	imprime(p1,2,3);
	
	libera(p,3,2);
	libera(p1,2,3);
	
	return 0;
}

int **aloca(int i,int j)
{
	int **p;
	int x;
	p = calloc(i,4);
	
	if (p == NULL)
	{
		printf("\nErro de alocacao de memoria.");
		exit(-1);
	}
	for (x=0;x<i;x++)
	{
		p[x]=calloc(j,4);
		if(p[x]==NULL){
			printf("\nErro de alocacao de memoria.");
			exit(-1);
		}
	}
	return p;
}

void leitura(int **p,int i, int j)
{
	int x,y;
	for(x=0;x<i;x++)
	{
		for (y=0;y<j;y++)
		{
			printf("\nInsira o elemento %d,%d ->",x,y);
			scanf("%d",&p[x][y]);
		}
	}
}

void imprime(int **p,int i, int j)
{
	int x,y;
	for(x=0;x<i;x++){
		for (y=0;y<j;y++)
		{
			printf("\nElemento %d,%d  = %d",x,y,p[x][y]);
		
		}
	}
}

void libera(int **p,int i, int j)
{
	int x,y;
	for(x=0;x<i;x++){
		free(p[x]);
	}
	free(p);
}
