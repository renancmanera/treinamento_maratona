#include <iostream>
#include <iomanip>
using namespace std;

int main() {
    
    int a,b,c,n;
    
    cin >> a;
    cin >> b;
    cin >> c;
    cin >> n;
    
    if(a > 0 && b > 0 && c > 0 && a + b + c >= n && n >= 3){
        cout << "YES" << endl;
    } else {
        cout << "NO" << endl;
    }
        
    return 0;
}
