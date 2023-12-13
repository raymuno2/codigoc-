#include <stdio.h>/*DEVUELVE UN CARACTER DESDE UN FICHERO*/
int main ()
{
	int numero,i;
	long factorial(long numero);
	printf("ingresa un numero\n");
	scanf("%d",&numero);
	for(int i = 0;i<=numero; ++i)
	{
		printf("%d! = %11u\n",i, factorial(i));
	}
	
	return 0;
}
long factorial(long numero)
{
	if(numero <= 0)
	{
		return 1;
	}else{
		return(numero * factorial(numero-1));
		
	}
}
