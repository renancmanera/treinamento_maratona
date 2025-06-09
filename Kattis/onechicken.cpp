#include <iostream>
#include <cmath>
using namespace std;

int main() {
    
    int n, m;
    
    cin >> n >> m;
    
    if (n < m){
        
        if( (abs(n - m) == 1)){
        cout << "Dr. Chaz will have 1 piece of chicken left over!" << endl;
        } else {
            cout << "Dr. Chaz will have " << abs(n - m) << " pieces of chicken left over!" << endl;
        }
    } 
    
    else {
        if(abs(m - n) == 1){
            cout << "Dr. Chaz needs 1 more piece of chicken!" << endl;
        } else {
            cout << "Dr. Chaz needs " << abs((m - n)) << " more pieces of chicken!" << endl;
        }
    }
    
    return 0;
}
