// Alisson Camila Rivas. Ej7, P3
#include <iostream>
using namespace std;
int main(){
	int n1, n2, c;
	cout << "Ingrese el primer numero: ";
	cin >> n1;
	cout << "Ingrese el segundo numero: ";
	cin >> n2;
	c = n1;
	while (c > n2){
		cout<< c << endl;
		c--;
	}
	return 0;
}
