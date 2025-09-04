#include <iostream>
using namespace std;

int main() {
    int n = 4; // number of rows to print
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < 3; j++) {  // print 3 letters in each row
            char ch = 'a' + i + j;
            cout << ch;
        }
        cout << endl;
    }
    return 0;
}