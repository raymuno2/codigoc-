#include <iostream>/* incluye la biblioteca de entrada/salida estándar.*/
using namespace std;/*permite tener un alcance directoa o todas las funciones declaradas en un espacio de nombre "stad"*/
int main()/*sirve como punto de entrada*/
{
	int numero;/*puede representa todos los numeros enteros en un intervalo especifico de la implementacion*/
	cout<<"teclea un numero (0 para salir):";/*permite mostrar por pantalla cualquier tipo de dato, pues el operador << está sobrecargado para ello.*/
	cin >> numero;/*flujo de entrada estándar que normalmente es el teclado*/
	while (numero!=0)/*permite repetir una instrucción hasta que una expresión especificada sea false.*/
	{
		if (numero > 0)/*es una estructura que nos posibilita definir las acciones a ejecutar*/
		    cout<<"es positivo"<<endl;
		else/*indica la accion o conjunto de acciones a llevar a cabo*/
		     cout<<"es negativo"<<endl;
		cout<<"tecla otro numero(0 para salir):";
		cin >> numero;
	}
	return 0;/*/*indica que el programa se ha ejecutado correctamente,*/*/
	}