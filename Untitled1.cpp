#include <iostream>
#include <math.h>
using namespace std;

int long factorial(int long n){
	int factorial;
	factorial = n;
	for(int long i = n-1; i > 0; i--){
		factorial *= i;
	}
	return factorial;
}

int main(){
	double long e = 1, x, potencial;
	short precision;
	int long fact;
	cout << "Escribe la potencia del e: ";
	cin >> x;
	cout<< "Nivel de precision: ";
	cin >> precision;
	
	e += x;
	for(int long r = 2; r < precision; r++){
		potencial = pow(x, r);
		fact = factorial(r);
		e += (potencial/(double long)fact);
	} 
	cout << "El resultado es: " << e;
}
