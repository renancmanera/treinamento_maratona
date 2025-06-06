#include <iostream>
#include <iomanip>
using namespace std;

int main() {
    
    string mes_dia;
    
    getline(cin, mes_dia);
    
    if((mes_dia == "OCT 31") || (mes_dia == "DEC 25")){
        cout << "yup" << endl;
    } else {
        cout << "nope" << endl;
    }
    
    return 0;
}
