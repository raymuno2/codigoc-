/*Programa: resta de dos numeros*/
#include <conio.h>
#include <stdio.h>
int main()
{
int n1, n2, producto, resta; 
printf("\n Introduzca primer numero (entero):");
scanf("%d",&n1); 
printf("\n Introduzca el segundo numero (entero):");
scanf("%d",&n2);
resta=n1-n2;
printf("\n La resta es: %d", resta);
getch();/*Pausa*/
return 0;
}