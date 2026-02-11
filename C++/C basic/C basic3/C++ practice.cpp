#include <iostream>
using namespace std;

int main() {
    int a = 0;
    for (a = 0; a < 5; a++) {
        for(int j = 0; j < a; j++) {
            cout << "*";        
        }
        cout << endl;
    }
}