#include <stdlib.h>
#include <stdio.h>


typedef struct
{
	int pilha[10];
	int topo;
} pilha;


void push(pilha *p, int elem){
	p->pilha[++(p->topo)] = elem;
	printf("\nElemento pushado pra posicao %d: %d",p->topo,elem);
	
}

int pop(pilha *p){
	if (p->topo == -1){
		printf("\nPilha vazia.");
		exit(1);
	}
	return p->pilha[(p->topo)--];
}

void trocaPilha (pilha *p){
	if (p->topo == -1){
		printf("\nPilha vazia.");
		exit(1);
	}	
	pilha aux;
	aux.topo = 1;
	
	int i;
	int k = 0;
	
	printf("\n\n==========INVERTER ELEMENTOS DO TOPO E FUNDO==========\n");
	//Passando a pilha revertida pra uma pilha auxiliar
	aux.pilha[0] = p->pilha[p->topo];
	aux.pilha[aux.topo] = p->pilha[0];
	printf("\nNovo primeiro elemento: %d \nNovo ultimo elemento: %d\n",aux.pilha[0],aux.pilha[aux.topo]);
	
	p->pilha[p->topo] = aux.pilha[1];
	p->pilha[0]=aux.pilha[0];
	
	printf("\n\n==========RETORNANDO PILHA REVERTIDA==========\n");
	for (i=0;i<=p->topo;i++){
		printf ("\nPilha introduzida revertida i[%d]: %d" ,i,p->pilha[i]);
	}
	
	
	
}
int main(){
	pilha p;
	p.topo = -1;
	printf("\n\n==========PREENCHIMENTO DA PILHA==========\n");
	push(&p,23);
	push(&p,20);
	push(&p,75);
	push(&p,50);
	push(&p,189);
	//pop(&p);
		
		trocaPilha(&p);
	
	
}
