#include <stdio.h>
#include <stdlib.h>


int main(){
    float a,b,c;
    int opt;
    printf ("1=Suma\n 2=Resta\n 3=Multiplicacion\n 4=Divicion\n");
    printf ("Seleccione una opcion:");
    scanf ("%d" ,&opt);
    printf ("ingrese el primer operando:");
    scanf ("%f",&a);
    printf ("introduce el segundo operando:");
    scanf ("%f",&b);
    switch(opt){
    	
	case 'A':
	case 'a':
	c=a+b;
	 
		break;
case 'B':
case 'b':
	c=a-b;
break;

case 'C':
case'c':
	c=a*b;
break;	

case 'D':
	case'd':
	
	while(b==0){
            printf("error, bdebe de ser distinto de 0\n");
            printf("introduce el segundo operando");
            scanf ("%f", &b);
    }
    c=a/b;
    default:;
    }
    printf ("el resultado es %0.2f",c);
}
		

	
	
	

