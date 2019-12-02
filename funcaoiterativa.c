#include <stdio.h>
#include <stdlib.h>
int trianguloIterativo(int n){
	int total;
	while(n>0){
		total+=n;
		n--;
	}
	
	return total;
}

int triangulo(int n){
	if (n == 1){
		return n;
	}
	return n+triangulo(n-1);
}
void main(){
	
	
	//printf("%d",trianguloIterativo(5));
	printf("%d",triangulo(5));
}
