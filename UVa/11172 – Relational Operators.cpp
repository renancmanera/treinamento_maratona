#include <iostream>
#include <cmath>
using namespace std;

int main() {
    
    int contador;
    long long x1, x2;
    
    cin >> contador;
    
    while(contador--){
        cin >> x1 >> x2;
        if(x1 > x2){
            cout << ">" << endl; 
        } else if(x1 < x2){
            cout << "<" << endl;
        } else{
            cout << "=" << endl;
        }
    }

    return 0;
}
