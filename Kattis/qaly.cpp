#include <iostream>
#include <iomanip>
using namespace std;

int main() {
    
    int contador;
    float numero1, numero2, resultado, resultadoTotal;
    
    cin >> contador;
    
    while (contador--){
        cin >> numero1;
        cin >> numero2;
        
        resultado = numero1 * numero2;
        resultadoTotal = resultadoTotal + resultado;
    }
    
    cout << fixed << setprecision(3) << resultadoTotal << endl;
    
    return 0;
}
