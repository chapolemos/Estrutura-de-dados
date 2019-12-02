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

void revertePilha (pilha *p){
	if (p->topo == -1){
		printf("\nPilha vazia.");
		exit(1);
	}	
	pilha aux;
	aux.topo = -1;
	
	int i;
	int k = 0;
	printf("\n\n==========REVERTER PILHA==========\n");
	//Passando a pilha revertida pra uma pilha auxiliar
	for (i=p->topo;i>=0;i--){
		
		aux.pilha[k] = p->pilha[i];
		printf ("\nPilha introduzida i[%d]: %d",k,p->pilha[k]);// Pilha auxiliar: i[%d]: %d",k,p->pilha[k],k,aux.pilha[k]
		
		k++;
	}	
	printf("\n\n==========RETORNANDO PILHA REVERTIDA==========\n");
	for (i=0;i<=p->topo;i++){
		p->pilha[i] = aux.pilha[i];
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
		
		revertePilha(&p);
	
	
}
