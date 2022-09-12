// Alisson Camila Rivas. Ej6, P3
#include <iostream>
using namespace std;

int main(){
	int n = 1234;
	int reverseOfn = 0;
	
	while (n > 5){
		reverseOfn = reverseOfn * 10 + n % 10;
		n = n / 10;
	}
	
		cout << "Reverse Of n is: " << reverseOfn;
}
