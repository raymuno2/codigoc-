#include <iostream>/* incluye la biblioteca de entrada/salida estándar.*/
/*La biblioteca contiene dos objetos principales: y .iostream,cin,cout*/
using namespace std;/*permite tener un alcance directoa o todas las funciones declaradas en un espacio de nombre "stad"*/
int main()/*se usa para ejecutar o llamar a ala ejecucion de un programa*/
{
	int n;/*puede representa todos los numeros enteros en un intervalo especifico de la implementacion*/
	cout<<"numero -->";/*permite mostrar en la pantalla cualquier tipo de dato*/
	cin>>n;/*flujo de entrada estandar que normalmente es el teclado*/
	for(int i =1; i<=n; i++){/*bucle que dice, está bien, por cada vez que i sea menor que un numero */
		if(i % 2 ==0){/*estructura que nos posibilita definir las acciones a ejecutar si se cumple cierta condicion*/
		cout<<endl;/*imprime un carácter de nueva línea en la consola.*/
		cout<<"el numero"<<i<<"es par"<<endl;
			}
	else{/*indica la accion o conjunto de acciones a llevar a cabo*/
		cout<<"el numeror "<<i<<" no es par"<<endl;
	}
	}
	return 0;/*se utiliza para indicar que el programa se ha ejecutado de manera exitosa*/
}