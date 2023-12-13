#include <stdio.h>/*el es archivo de cabecera que contiene las definiciones de las macros, las constantes; las declaraciones de funciones de la biblioteca*/
#include <conio.h>/*incluye funciones especificas para el control de entrada y salida por consola de una determinada plataforma*/
main()/*sirve como punto de partida para la ejecucion del programa*/
{
	int cont=0, numero=0, may=0, men=0;/*es el tipo entero basico predetermindo*/
	do{/*sirve para marcar el inicio del ciclo*/
		printf("inserta un numero ");/*imprime un mensaje por pantalla utilizando una "cadena de formato"*/
		scanf("%d",&numero);/*lee los datos del flujo de entrada estandar stidin y escribe los datos en la ubicacion que se propociona en un argumento*/
		if(may <= numero){	/*estructura que nos posibilita definir las acciones a ejecutar si se cumple cierta condicion */
		}
		if(men >= numero){
			men = numero;
		}
		cont++;
	}while(cont<3);/*variable de tipo enetero que durante el proceso o ejecucion de un programa va aumentando su valor progresivamente*/
	printf("el numero mayor es: %d\n",may);
	printf("el numero menor es: %d",men);
	getch();/*retorna el caracter leido desde un teclado*/
	return 0;/*se utiliza para indicar que el programa se ha ejecutado de manera existosa*/
}