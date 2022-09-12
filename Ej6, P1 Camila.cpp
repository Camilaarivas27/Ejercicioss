//Realiza un programa que muestre únicamente, los números pares en el rango del 1 al 100.
// Alisson Camila Rivas. Ej6, P1
#include<iostream>
using namespace std;

int main(){
	int numero = 0;
	while (numero <= 100){
		if (numero % 2 == 0){
			cout << numero << endl;
		}
		numero = numero + 1;
	}
}
