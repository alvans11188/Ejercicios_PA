#include <iostream>
using namespace std;

int potencia(double x, int n); 

int main(){ 
    int e, b, s;
    
    cout << "\tPrograma para calcular la potencia de un numero" << endl;
    cout << "Introduce la base (numero real): "; 
    cin >> b;
    cout << "Introduce el exponente (numero entero): "; 
    cin >> e;
    s = potencia(b, e);
    
    cout << "\nResultado: " << b << " elevado a " << e << " es: " << s << endl;
    
    return 0;
}


int potencia(double x, int n){
    if(n == 0) {
    	return 1;
	} else {
		return x * potencia(x, n-1);
	}   
}


