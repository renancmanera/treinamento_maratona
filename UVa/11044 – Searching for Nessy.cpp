#include <iostream>
using namespace std;

int main() {
    
    int contador, sonares, linhas, colunas, linha, coluna;
    
    cin >> contador;
    
    while(contador--){
        cin >> linha >> coluna;
        linhas = (linha - 2 + 2) / 3;
        colunas = (coluna - 2 + 2) / 3;
        cout << linhas * colunas << endl;
    }
    
   return 0;
}
