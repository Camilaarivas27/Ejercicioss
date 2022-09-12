// Alisson Camila Rivas. Ej4, P3
#include <iostream>
using namespace std;

int main(){
	int number = 0;
	int sum = 0;
	
	do{
		sum += number;
		
		cout << " Enter a number: "; 
		cin >> number;
	}
	while (number >= 0);
	cout << " \n The sum is: " << sum << endl; 
	
	return 0;
}
