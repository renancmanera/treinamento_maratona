#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
    
    int c, c2, caso = 0, v;
    
    cin >> c;
    
    while(c--){
        caso++;
        vector<int> velocidades;
        cin >> c2;
        
        while(c2--){
            cin >> v;
            velocidades.push_back(v);
        }
        
        int maximo = *max_element(velocidades.begin(), velocidades.end());
        
        cout << "Case " << caso << ": " << maximo << endl;
    }
    
    return 0;
}
