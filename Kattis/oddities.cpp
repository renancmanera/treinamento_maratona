#include <iostream>
#include <cmath>
using namespace std;

int main() {
    
    int contador, x;
    
    cin >> contador;
    
    while(contador--){
        cin >> x;
        if(x % 2 == 0){
            cout << x << " is even" << endl;
        } else {
            cout << x << " is odd" << endl;
        }
    }

    return 0;
}
