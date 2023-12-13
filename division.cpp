/*este programe divicion dos numeros enteros*/
#include <conio.h>
#include <stdio.h>
int main()
{
int n1,n2,producto,divicion;
printf("\n Introduzca primer numero (entero):");
scanf("%d",&n1);
printf("\n Introduzca el segundo numero (entero):");
scanf("%d",&n2);
divicion=n1/n2;
printf("\n La divicion es: %d",divicion);
getch();/*pausa*/
return 0;
}