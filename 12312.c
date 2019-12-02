#include <stdio.h>

void main(){
	int num1 = 6;
	num1 = (num1 % 2 ? num1 + 1: num1);
	printf("%d",num1);
}
