#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
    
    int c1, c2, posicao, i;
    
    cin >> c1;
    
    while(c1--){
        vector<int> posicoes;
        posicoes.clear();
        cin >> c2;
        while(c2--){
            cin >> posicao;
            posicoes.push_back(posicao);
        }
        for(i = 1; i < posicoes.size() - 1; i++){
            if((posicoes[i]) - posicoes[i - 1] != 1){
                break;
            }
        }
        cout << i + 1 << endl;
    }
    
    return 0;
}
