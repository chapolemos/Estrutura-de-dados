#include <stdio.h>
#include <string.h>
#include <stdbool.h>

int power(int input, int power){
	
	int i;
	int result = input;
	
	for (i=1;i<power;i++){
		result *=input;
	}
	return result;
}

int recpower(int input, int power){
	
	if (power < 1){
		return 1;
	}
	return input * recpower(input,power-1);
}






















int largest(int inputarr[], int tam){
	int i;
	int biggo = 0;
	for (i =0;i<tam;i++){
		if (inputarr[i]>biggo)
			biggo = inputarr[i];
	}
	return biggo;
}






int main()
{
	int size = 7;
	int ages[] = {1,4,53,23,23,9,52};
	printf("%d\n",largest(ages,size));

return 0;
}
