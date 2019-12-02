#include "libraries.h"
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


