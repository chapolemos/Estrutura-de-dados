#include <stdio.h>
#include <stdlib.h>


void aloca(int ***p, int x, int y)
{
	int i;
	*p = malloc(4*x); //??????????????
	if (*p == NULL)
	{
		printf("\nErro de alocacao de memoria.");
		exit(1);
	}
	
	for (i=0;i<y;i++)
	{
		(*p)[i]= malloc(4*y);
		if ((*p)[i]==NULL)
		{
			printf("\nErro de alocacao de memoria.");
			exit(1);
		}
	}
	return;
}

int main(void)
{
	int **p;
	int i,k;
	
	aloca(&p,4,5);
	
	for (i=0;i<4;i++)
	{
		for (k=0;k<5;k++)
		{
			p[i][k]= i+k;
		}
	}
	for (i=0;i<4;i++)
	{
		for (k=0;k<5;k++)
		{
			printf("%d",p[i][k]);
		}
		printf("\n");
	}
	return 0;
}
