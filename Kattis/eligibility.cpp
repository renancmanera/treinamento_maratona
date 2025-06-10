#include <iostream>
#include <sstream>
using namespace std;

int main() {
    
    int contador;
    string nome, data1, data2;
    int dia1, mes1, ano1, dia2, mes2, ano2, disciplinas;
    char barra1, barra2;
    
    cin >> contador;
    
    while(contador--) {
        
        cin >> nome >> data1 >> data2 >> disciplinas;
        
        stringstream dt1(data1);
        stringstream dt2(data2);
        
        dt1 >> ano1 >> barra1 >> mes1 >> barra2 >> dia1;
        dt2 >> ano2 >> barra1 >> mes2 >> barra2 >> dia2;
        
        if (ano1 >= 2010) {
            cout << nome << " eligible" << endl;
        } else if (ano2 >= 1991) {
            cout << nome << " eligible" << endl;
        } else if (disciplinas > 40) {
            cout << nome << " ineligible" << endl;
        } else {
            cout << nome << " coach petitions" << endl;
        }
    }

    return 0;
}
