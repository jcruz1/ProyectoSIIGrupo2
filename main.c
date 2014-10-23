//codigo para hecer pruebas de como funciona github.
//programa simple que suma, resta, multiplica y divide numeros ingresador por pantalla.

#include <stdio.h>
#include <stdlib.h>



void sumar(int a, int b);

int main() {

    int a,b; 
    printf ("Primer numero: ");   scanf ("%d",&a); 
    printf ("Segundo numero: ");  scanf ("%d",&b); 
    sumar(a,b);
    
    
    //implementar resta, multiplicacion, division
   
    
    return (EXIT_SUCCESS);
}

void sumar(int a, int b){
     printf ("La suma es: %d",a+b); 
}


