#include <stdio.h>

int pilha[20];
int pos=0;

void push(int valor)
{
	pilha[pos] = valor;
	pos++;
	return;
}

void pop(){
	return(pilha[--pos]);
}

int size(){
	return pos;
}

int stacktop(){
	return(pilha[pos]);
}

int main(){
	printf("\nColocados dados na pilha");
	push(1);
	push(2);
	push(3);
	
	printf("\nTamanho da pilha: %d",size());
	
	printf()
	
}
