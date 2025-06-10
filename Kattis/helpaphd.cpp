#include <iostream>
#include <sstream>
using namespace std;

int main() {
    
    int a, b, contador;
    string linha;
    char operador;
    
    cin >> contador;
    
    while(contador--){
        cin >> linha;
        stringstream l(linha);
        l >> a >> operador >> b;
        
        if(linha == "P=NP"){
            cout << "skipped" << endl;
        } else {
            cout << a + b << endl;
        }
    }
    
    return 0;
}
