#include <iostream>
#include <vector>
#include <algorithm> // min_element (inicio, fim)
using namespace std;

int main() {
    
    int c, n, caso = 0;
    
    while (cin >> c){
        
        vector<int> numeros;
        
        while (c--){
            cin >> n;
            numeros.push_back(n);
        }
    
    int maximo = *max_element(numeros.begin(), numeros.end());
    int minimo = *min_element(numeros.begin(), numeros.end());
    
    caso++;
        
    cout << "Case " << caso << ": " << minimo << " " << maximo << " " << maximo - minimo << endl;
        
    }

    return 0;
}
