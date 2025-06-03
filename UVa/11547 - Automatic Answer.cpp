#include <iostream>
#include <vector>
#include <cmath>
using namespace std;

int main() {
    
    int contador;
    int n, resultado, digito_dezena;
    
    vector<int> resultados = {};
    
    cin >> contador;
    
    while(contador--){
        cin >> n;
        resultado = n * 567;
        resultado = resultado / 9;
        resultado = resultado + 7492;
        resultado = resultado * 235;
        resultado = resultado / 47;
        resultado = resultado -498;
        digito_dezena = abs((resultado/10) % 10);
        resultados.push_back(digito_dezena);
    }
    
    for (int numero = 0; numero < resultados.size(); numero++){
    cout << resultados[numero] << endl;
    }
    
   return 0;
}
