#include <iostream>
using namespace std;

int main() {
    
    long long numero1, numero2, resultado;
    
    while(cin >> numero1 >> numero2) {
    
    resultado = numero1 - numero2;
    
    if (resultado < 0) {
        resultado = resultado * (-1);
    }
    
    cout << resultado << endl;
    }
    
    return 0;
}
