#include <iostream>
using namespace std;

int main() {
    
    int n1, n2;
    
    cin >> n1 >> n2;
    
    if( n1 == n2 && n1 > 0 && n2 > 0 ){
        cout << "Even " << n1 + n2 << endl;
    } else if( n1 != n2 ) {
        cout << "Odd " << (max(n1,n2)) * 2 << endl;
    } else {
        cout << "Not a moose" << endl;
    }
  
    return 0;
}
