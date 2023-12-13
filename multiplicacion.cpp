/*Este programe multiplicacion dos numeros enteros*/
#include <conio.h>
#include <stdio.h>
int main()
{
int n1,n2,producto, multiplicacion;
printf("\n Introduzca el primer numero (entero):");
scanf("%d",&n1);
printf("\n Introduzca el segundo numero (entero):");
scanf("%d",&n2);
multiplicacion=n1*n2;
printf("\n La multiplicacion es: %d", multiplicacion);
getch();
return 0;
}