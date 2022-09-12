// Alisson Camila Rivas. Ej2 P3
#include <iostream>
using namespace std;

int main(){
	int opcion = 0;
	do
	{
		cout << "Ingrese 1 para mostrar mensaje\n";
		cout << "Ingrese 2 para mostrar algo mas\n";
		cout << "Ingrese 0 para salir\n";
		
		cout << "Ingrese una opcion a ejecutar\n";
		cin >> opcion;
	}
	while(opcion !=0);
	system("Pause");
	return 0;
}
