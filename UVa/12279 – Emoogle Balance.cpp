#include <iostream>
using namespace std;

int main() {
    
    int contador, caso = 0, i, ofereceu, deveria, n;

    while (cin >> contador && contador != 0) {
        ofereceu = 0, deveria = 0;
        for (i = 0; i < contador; i++) {
            cin >> n;
            if (n > 0) {
                deveria++;
            } else {
                ofereceu++;
            }
        }
        caso++;
        cout << "Case " << caso << ": " << deveria - ofereceu << endl;
    }

    return 0;
}
