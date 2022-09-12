//El siguiente programa calcula el cubo de los números del 1 al 5 utilizando una función definida por el usuario.
// Alisson Camila Rivas. Ej7, P1 Camila
#include <iostream>
using namespace std;
int cubo (int base);
main()
{
	int numero;
	for (numero=1; numero<=5; numero++)
	{
		cout<< " El cubo de " << numero << " es :" <<cubo(numero) <<endl;
	}
	return 0;
}

int cubo (int base)
{
	int potencia;
	potencia = base * base * base;
	return potencia;
}
