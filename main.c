//codigo para hecer pruebas de como funciona github.
//programa simple que suma, resta, multiplica y divide numeros ingresador por pantalla.

#include <stdio.h>
#include <stdlib.h>

void sumar(int a, int b);
void restar(int a,int b);
void multiplicar(int a,int b);

int main() {

    int a,b; 
	printf ("Bienvenido... Ingrese 2 numeros!");
    printf ("Primer numero: ");   
	scanf ("%d",&a); 
    printf ("Segundo numero: ");  
	scanf ("%d",&b); 
	
    sumar(a,b);
	restar(a,b);
    multiplicar(a,b);
    
    //implementar resta, multiplicacion, division
   
    
    return (EXIT_SUCCESS);
}

void sumar(int a, int b){
     printf ("La suma es: %d",a+b); 
}

void restar(int a,int b){
	printf("La resta es: %d",a-b);
}

void multiplicar(int a, int b){
	printf("La multiplicación es: %d", a*b);
}


