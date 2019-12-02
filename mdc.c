#include <stdio.h>
#include <stdlib.h>

int mdc(int m, int n){
	if (n==0)
		return m;

		return mdc(n, m%n);
	
}

void main()
{
	printf("%d",mdc (10,20));
	
	
}
