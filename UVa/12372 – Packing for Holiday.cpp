#include <iostream>
#include <cmath>
using namespace std;

int main() {
    
    int contador, l, w, h;
    int caso = 0;
    
    cin >> contador;
    
    while(contador--){
        caso++;
        cin >> l >> w >> h;
        if(l <= 20 && w <= 20 && h <= 20){
        cout << "Case " << caso << ": good" << endl;
        } else {
            cout << "Case " << caso << ": bad" << endl;
        }
    }
    
    return 0;
}
