#include <iostream>
#include <cmath>
using namespace std;

int main() {
    
    int ng, ns, nc, custo, poder_de_compra;
    
    cin >> ng >> ns >> nc;
    
    poder_de_compra = 3 * ng + 2 * ns + nc;
    
    if(poder_de_compra <= 1){
        cout << "Copper" << endl;
    } else if(poder_de_compra  == 2) {
        cout << "Estate or Copper" << endl;
    } else if((poder_de_compra  == 3) || (poder_de_compra == 4)) {
        cout << "Estate or Silver" << endl;
    } else if(poder_de_compra  == 5) {
        cout << "Duchy or Silver" << endl;
    } else if((poder_de_compra  == 6) || (poder_de_compra == 7)) {
        cout << "Duchy or Gold" << endl;
    } else {
        cout << "Province or Gold" << endl;
    }
    
    return 0;
}
