#include <stdio.h>

#define MAX 4

int main(){
	int i=0, contador=0;
	
	i=1;
	do{
		if(i%3==0){
			printf("%d\n",i);
			contador++;
		}
		i++;
	}while(contador<MAX);
}