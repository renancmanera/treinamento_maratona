#include <iostream>
using namespace std;

int main() {
    
    int x, y, n, i;
    
    while(cin >> x >> y >> n){
       for(i = 1; i <= n; i++){
            if((i % x == 0) && (i % y == 0)){
                cout << "FizzBuzz" << endl;
            } else if(i % y == 0){
                cout << "Buzz" << endl;
                
            } else if(i % x == 0){
                cout << "Fizz" << endl;
            } else{
                cout << i << endl;
            }
        }
    }

    return 0;
}
