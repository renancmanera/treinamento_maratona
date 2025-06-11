#include <iostream>
#include <vector>
using namespace std;

int main() {
    
    int c, c2, alto, baixo, n, i, caso = 0;
    
    cin >> c;
    
    while(c--){
        cin >> c2;
        vector<int> pulos;
        caso++;
        
        while(c2--){
            cin >> n;
            pulos.push_back(n);
            alto = 0;
            baixo = 0;
        }
        
        for (i = 0; i < pulos.size() - 1; i++){
            if ((pulos[i + 1] - pulos[i]) > 0){
                alto++;
            } else if ((pulos[i + 1] - pulos[i]) == 0){
                
            } else {
                baixo++;
            }
        }
        
        cout << "Case " << caso << ": " << alto << " " << baixo << endl;
    }

    return 0;
}
