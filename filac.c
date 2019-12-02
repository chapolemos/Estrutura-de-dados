#include <stdio.h>
#include <stdlib.h>

#define TAMANHO_MAXIMO 10

typedef struct
{
	int items[TAMANHO_MAXIMO];
	int front,rear;
	
}queue;

int empty(queue *pq)
{ 
	if (pq->front == pq->rear)
	{
		printf("\nFila vazia.");
		return 1;
	}
	return 0;
}

void enqueue(queue *pq, int elem)
{	

	//Verifica se a fila chegou ao fim e volta ao começo (fila circular)
	if (pq->rear == TAMANHO_MAXIMO - 1){
		if (pq->front == -1){
			printf("\nEstouro da fila.");
			exit(1);
		}
		pq->rear = 0;
	}
	else
	{
		pq->rear++;
	}

	//Verifica se a fila está cheia após pq rear aumentar	
	if (pq->rear == pq->front)
	{
		printf("\nEstouro da fila.");
		exit(1);
	}
	
	
	printf("\nElemento %d adicionado a posicao %d da fila.",elem,pq->rear);
	printf("\nFront: %d Rear: %d Tamanho maximo: %d\n",pq->front,pq->rear,TAMANHO_MAXIMO);
}

int dequeue(queue *pq)
{	
	if (empty(pq))
	{
		printf("\nFila vazia.");
		exit(1);
	}
	//Verifica se a fila chegou ao fim e volta ao começo (fila circular)
	if (pq->front == TAMANHO_MAXIMO - 1){
		pq->front = 0;
	}
	else
	{
		pq->front++;
	}
	
	return (pq->items[pq->front]);
}

int size(queue *pq){
	int x;
	
	if (pq->front <= pq->rear)
	{
	return pq->rear - pq->front;
	}  
	return pq->front + pq->rear;
}

int front(queue *pq)
{
	return(pq->items[pq->front+1]);
}

void main(){
	queue fila;
	fila.rear = -1;
	fila.front = -1;
	
	enqueue(&fila,40);
	
	enqueue(&fila,84);
	enqueue(&fila,72);
	enqueue(&fila,40);
	enqueue(&fila,84);
	//dequeue(&fila);	
	enqueue(&fila,72);
	enqueue(&fila,40);
	enqueue(&fila,84);
	enqueue(&fila,72);
	enqueue(&fila,40);
	enqueue(&fila,84);
	enqueue(&fila,72);
}
