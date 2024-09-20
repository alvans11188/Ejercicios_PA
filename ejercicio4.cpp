#include <iostream>
using namespace std;

int invertido (int, int);
int main(){
	int numero, n, s, a;
	cout << "Ingrese el numero que quiere invertir: " << endl;
	cin >> numero;
	
	a = 0;
	
	s = invertido(numero, a);
	
	
	cout << "El numero sera: " << s << endl;
	
	return 0;
}

int invertido(int x, int y){
	
	
	if (x == 0){
		return y;
	}else{
		int t = x % 10;
		y = y*10 + t;
		return invertido(x / 10, y );
	}
}


