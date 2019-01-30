#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) 
{
	int Vector [10];
	int i=1;
		
	for(i>=0;i<=10;i++){
		printf (" ingrese el valor para la posicion %d:\n ",i);
		scanf ("%d",&Vector[i]);
	}
		for(i>=0;i<=9;i=i+1){
	}
	for(i>=9;i>=0;i--){
		printf ("%d\n",Vector[i]);
	}
	return 0;
	
	
}
