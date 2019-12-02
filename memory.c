#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <string.h>

typedef struct{
	char name[30];
	int age;
	bool isVerified;
} user;

user *createUser(char name[], int age, bool isVerified){
	user *newUser = malloc(sizeof(user));
	strcpy(newUser->name, name);
	newUser->age = age;
	newUser->isVerified = isVerified;
	return newUser;
}; 
int main(){
	int size;
	int i;
	
	printf("Quantos?: ");
	scanf("%d",&size);	
	
	int *arr = malloc(size * 4);
	
	if (arr == 0){
		printf("Elementos demais requisitados.\n");
		return -1;
	}else{
		printf("Pode prosseguir.\n");
	}
	
	for (i=0;i<size;i++){
		printf("Escreva o elemento numero %d:",i);
		scanf("%d",&arr[i]);
	}
	
	printf("\nSeu array:\n\n");
	
	for (i=0;i<size;i++){
		printf("Elemento %d:%d\n",i,arr[i]);
	}
	
	free(arr);
	user *me = createUser("Lemos", 21, false);
	printf("Lemos tem %d anos de idade!!!",me->age);
	free(me);
	
	

	return 0;
} 
