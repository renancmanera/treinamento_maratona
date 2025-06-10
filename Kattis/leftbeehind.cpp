#include <iostream>
#include <sstream>
using namespace std;

int main() {
    
    int d, a;
    int contador = 0;
    
    while(cin >> d >> a){
        if (a + d == 13){
            cout << "Never speak again." << endl;
        } else if(d > a){
            cout << "To the convention." << endl;
        } else if(d < a){
            cout << "Left beehind." << endl;
        } else if(d == 0 && a == 0) {
            return 0;
        } else {
            cout << "Undecided." << endl;
        }
    }
    return 0;
}
