#include <iostream>
using namespace std;

int main() {
    
    int participantes, resolvidos, contador;
    string descricao;
    
    cin >> participantes;
    cin >> resolvidos;
    
    contador = participantes;
    
    while(contador--){
        cin >> descricao;
    }
    
    cout << resolvidos << endl;
    
   return 0;
}
