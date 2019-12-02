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

void organizaPilha (pilha *p){
	if (p->topo == -1){
		printf("\nPilha vazia.");
		exit(1);
	}	
	pilha auxpar;
	auxpar.topo = -1;
	pilha auximpar;
	auximpar.topo = -1;
	pilha aux;
	aux.topo = p->topo;
	
	int i;
	int k = 0;
	
	/* Dev comments
	1. Fazer um if que percorre toda a pilha e verifica se p[i]%2==0. 
	2. Caso seja, adicionar o elemento a uma estrutura auxiliar de pares. Caso não seja, adicionar o elemento a uma estrutura de impares.
	3. Usar contadores pra saber quantos há de cada.
	4. Fazer um laço for com o contador par pra preencher o vetor com pares, e depois impares.
	5. Retornar.
	?. Tentar fazer com só uma pilha auxiliar.
	*/
	
	
	printf("\n\n==========PILHA PASSADA==========\n");
	
	for (i=0;i<=p->topo;i++){
		if (p->pilha[i]%2==0){
			auxpar.topo++;

			printf("%d eh Par.\n",p->pilha[i]);
			auxpar.pilha[auxpar.topo] = p->pilha[i];
		
			
		}
		else
		{
			auximpar.topo++;
			printf("%d eh Impar.\n",p->pilha[i]);
			auximpar.pilha[auximpar.topo] = p->pilha[i];
			
		}
	}
	
	printf("\n==========PILHAS DIVIDIDAS:==========\n");
	for (i=0;i<=auxpar.topo;i++){
			printf("Auxpar %d eh: %d\n",i,auxpar.pilha[i]);
	}
	printf("\n");
	for (i=0;i<=auximpar.topo;i++){
			printf("Auximpar %d eh: %d\n",i,auximpar.pilha[i]);
	}

	
	//Passando a pilha revertida pra uma pilha auxiliar
	
	for (i=0;i<=auxpar.topo;i++){
		p->pilha[i] = auxpar.pilha[i];
	}
	
	for (i=0;i<=auximpar.topo;i++){
		p->pilha[auxpar.topo+i+1] = auximpar.pilha[i];
	}
	/*for (i=p->topo;i>=0;i--){
		
		aux.pilha[k] = p->pilha[i];
		printf ("\nPilha introduzida i[%d]: %d",k,p->pilha[k]);// Pilha auxiliar: i[%d]: %d",k,p->pilha[k],k,aux.pilha[k]
		
		k++;
	}*/	
	printf("\n==========RETORNANDO PILHA REORGANIZADA==========\n");
	for (i=0;i<=p->topo;i++){
		//p->pilha[i] = aux.pilha[i];
		printf ("\nPilha introduzida revertida i[%d]: %d" ,i,p->pilha[i]);
	}
	
	
	
}
int main(){
	pilha p;
	p.topo = -1;
	printf("==========PREENCHIMENTO DA PILHA==========\n");
	push(&p,23);
	push(&p,20);
	push(&p,75);
	push(&p,50);
	push(&p,189);
	//pop(&p);
		
	organizaPilha(&p);
	
	
}
