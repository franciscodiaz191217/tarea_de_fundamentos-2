#include <stdio.h>
#include <stdlib.h>
#include <math.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */
void triagulo(void);
void circulo (void);
void rectangulo(void);
void trapecio(void);
char menu(void);

   char menu(){
   	int a;
	printf("\n 1.triagulo");
	printf("\n 2.circulo");
	printf("\n 3.rectangulo");
	printf("\n 4.trapecio\n");
	scanf("%i",&a);
	return (a);
}

int main() {

	int e;
	
	   e = menu();
	     switch(e){
	   		 case 1 :
				{
		 			 triagulo();
		    	break;
		    	}
			 case 2 :
				{
					 circulo();
	    		break;
				}	
			 case 3 :
				{
					 rectangulo();
				}
				break;
			 case 4 :
				{
					 trapecio();
				}
			    break;
			
			default:
				printf("inserte un valor valido");
			}

	return 0;

}

void circulo(){

	float b,c,a,d;
		printf("\n cual es el valor del radio\n");
		scanf("%f",&b);
	if(b>0)
	{
		c=b*b*3.1416;
		a=b*2;
		d=a*3.1416;
		printf("\nel area  es:%f",c);
		printf("\nel valor del perimetro es%f",d);
	 }
	else
		{
			printf ("erro debe de ser mayor a cero ");
		}
}
void triagulo(){
	float a,b,c,d,f,g,h,i;
		printf(" cual es el valor de la base y altura\n");
		scanf("%f%f",&a,&b);
	if(a>0 && b>0)
	{
		c=(a*b)/2;
		d=a/2;
		f=d*d;
		g=a*a;
		h=sqrt(f+g);
		i=h+h+a;
		printf ("\n el perimetro%f",i);
		printf("\n el area es%f",c);
	 }
	else
	{
		printf ("solo datos mayores a cero");
	 }
	
	
}
 void rectangulo(){
 	float a,c,d,b;
 	printf(" cual el valor de la base y altura\n");
 	scanf("%f%f",&a,&b);
 	if (a>0 && b>0)
 	{
 	c=a*b;
 	d=a+a+b+b;
 	printf("\n el area%f",c);
 	printf("\n el perimetro%f",d);
 	 }
 	else 
 	{
 		printf ("solo datos mayores a cero");
	 }
 }
 void trapecio(){
 	float bm,bM,h,acum,acum1,acum2,acum3;
 	printf (" ingrese la base menor, base mayor  y altura:\n ");
 	scanf ("%f%f%f",&bm,&bM,&h);
 	if (bm>0 && bM>0 && h>0)
 	{
 		acum=(((bm+bM)*h)/2);
 		acum1=(bM-bm)/2;
 		acum2=sqrt(acum1*acum1+h*h);
 		acum3=bm+bM+acum2+acum2;
 		printf ("\n el area es :%f",acum);
 		printf ("\n perimetro es :%f",acum3);
 	 }
 	else 
 	{
 		printf ("solo datos mayores a cero");
	 }

 }
