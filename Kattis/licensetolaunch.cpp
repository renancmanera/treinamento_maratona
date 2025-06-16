#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
    
    long long ndias, lixo, i;
    vector<long long> dias;
    
    while(cin >> ndias){
        dias.clear();
        for(i = 0; i < ndias; i++){
            cin >> lixo;
            dias.push_back(lixo);
        }
         long long minimo = *min_element(dias.begin(), dias.end());
         long long indice = find(dias.begin(), dias.end(), minimo) - dias.begin(); //para achar o indice
         cout << indice << endl;
    }
    
    return 0;
}
