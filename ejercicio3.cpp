#include <iostream>
using namespace std;

int mayor(int x, int y, int arreglo[]) {
	int resto;
    if (x == y) {
        return arreglo[x];
    } else {
       
       	resto = mayor(x + 1, y, arreglo);
      
                
        if (arreglo[x] > resto) {
            return arreglo[x];
        } else {
            return resto;	
        }
    }
}
int main() {
    int s, a;
    int arreglo[5] = {1, 8, 3, 4, 5}; 
    int b = 5; 
    a=0;
    s = mayor(a, b - 1, arreglo);
    
    cout << "El maximo elemento en el arreglo es: " << s << endl;
    
    return 0; 
}



