#include <stdio.h>

typedef struct{
	int length;
	int width;
} rectangle;

typedef struct{
	int x;
	int y;
	int z;
	
}position;

typedef struct{
	char owner[6];
	rectangle ret;
	position posi;
}house;

int main(){
	
	rectangle retang = {5,10};
	position pos = {64,32,128};
	house casinha = {"Lemos", {120,240},{32,64,128}};
	
	house moradia[] = {{"Lemos", {120,240},{32,64,128}},{"Sopa", {80,160},{64,128,256}}};
	int i;
	
	for (i=0;i<2;i++){
	printf("A casa que fica em X - %d, Y - %d, Z - %d \nde tamanho %d por %d\npertence a %s\n\n",
	moradia[i].posi.x,
	moradia[i].posi.y,
	moradia[i].posi.z,
	moradia[i].ret.length,
	moradia[i].ret.width,
	moradia[i].owner);}
	
	return 0;
}
