//Escribir una funci�n que reciba por valor los catetos de un tri�ngulo rect�ngulo y devuelva la hipotenusa del mismo.
// Alisson Camila Rivas. Ej3 P2
#include <iostream>
#include<cmath>
using namespace std;

float pitagoras(float,float);

int main(){
	float cat1,cat2,hipo=0;
	cout << "Ingrese cateto 1: ";
	cin >> cat1;
	cout << "Ingrese cateto 2: ";
	cin >> cat2;
	hipo = pitagoras(cat1,cat2);
	cout<<"La hipotenusa del triangulo es: ";
	cout << hipo;
	return 0;
}

float pitagoras(float x, float y){
	float result =0;
	result = sqrt(pow(x,2)+pow(y,2));
	return result;
}