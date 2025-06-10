#include <iostream>
#include <cmath>
using namespace std;

int main() {
    
    string palavra;
    int contador = 0;
    
    while(cin >> palavra && palavra != "#"){
        contador += 1;
        if(palavra == "HELLO"){
            cout << "Case " << contador << ": " << "ENGLISH" << endl;
        } else if(palavra == "HOLA"){
            cout << "Case " << contador << ": " << "SPANISH" << endl;
        } else if(palavra == "HALLO"){
            cout << "Case " << contador << ": " << "GERMAN" << endl;
        } else if(palavra == "BONJOUR"){
            cout << "Case " << contador << ": " << "FRENCH" << endl;
        } else if(palavra == "CIAO"){
            cout << "Case " << contador << ": " << "ITALIAN" << endl;
        } else if(palavra == "ZDRAVSTVUJTE") {
            cout << "Case " << contador << ": " << "RUSSIAN" << endl;
        } else {
            cout << "Case " << contador << ": " << "UNKNOWN" << endl;
        }
    }

    return 0;
}
