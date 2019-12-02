#include <stdio.h>

int main(){
	
	
	int a = 100;
		printf("%d\n",a);
	int *b = &a;
		scanf("%d",b);
		
		printf("A: %d\n",a);
		printf("B: %d\n",b);
		printf("*B: %d\n",*b);

	return 0;
}
