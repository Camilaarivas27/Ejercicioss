// Escribir un programa que solicite la carga de un valor positivo y nos muestre desde 1 hasta el valor ingresado de uno en uno.
// Alisson Camila Rivas. Ej4 P1
#include <iostream>
using namespace std;

int main(){
	float limite, contador;
	cout << "Ingrese el limite ";
	cin >> limite;
	while (contador < limite){
		contador = contador + 1;
		cout << "Contador " << contador << endl;
	}
}
