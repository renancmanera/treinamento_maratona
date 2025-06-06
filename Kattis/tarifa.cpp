#include <iostream>
#include <iomanip>
using namespace std;

int main() {
    
    int mb_disp, n_mes, uso, sobra;
    
    cin >> mb_disp;
    
    cin >> n_mes;
    
    while(n_mes--){
        cin >> uso,
        sobra += (mb_disp - uso);
    }
    
    cout << mb_disp + sobra << endl;
    
    return 0;
}
