#include <stdio.h>
#include <stdlib.h>
#define TAMANHO_PILHA 100

typedef struct 
{
	int topo;
	int items[TAMANHO_PILHA];
}pilha;

int empty( ilha *p)
{
	if(p->topo == -1)
	{
		return 1;
	}
	return 0;
}

int pop (pilha *p)
{
	if (empty(p))
	{
		printf("\nPilha vazia.");
		exit(1);
	}
	return (p->items[p->topo--]);
}
void push(pilha *p, int e)
{
	if(p->topo == (TAMANHO_PILHA-1))
	{
		printf("\nEstouro da pilha.");
		exit(1);
	}
	p->items[++(p->topo)] = e;
	return;
}

int size ( pilha *p)
{	
	return p->topo+1;
}

int stackpop( pilha *p) 
{
 return p->items[p->topo]; 
} 

int main()
{
	int i;
	pilha x;
	x.topo = -1;
	push (&x,1);
	push (&x,2);
	push (&x,3);
	for (i=0;i<=x.topo;i++)
		printf("\nElemento %d: %d",i,x.items[i]);
		printf("\nTopo:%d",x.topo);
	pop(&x);
	for (i=0;i<=x.topo;i++)
		printf("\nElemento %d: %d",i,x.items[i]);
		printf("\nTopo:%d",x.topo);
		
	printf("\nTamanho:%d",size(&x));
		
}
