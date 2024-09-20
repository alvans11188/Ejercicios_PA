#include <iostream>
using namespace std;

string buscar(int x, int y, int arreglo[]) {
    if (y < 0) {
        return "Valor no encontrado";
    } else {
        if (x == arreglo[y]) {
            return "Valor encontrador";
        } else {
            return buscar(x, y - 1, arreglo);
        }
    }
}

int main() {
    string s;
    int a;
    int arreglo[5] = {1, 2, 3, 4, 5}; 
    int b = 5; 
    cout << "Ingresa el numero que deseas buscar: ";
    cin >> a;
    
 
    s = buscar(a, b - 1, arreglo); 
    cout << s << endl;
    
    return 0; 
}



