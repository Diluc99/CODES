#include <iostream>
using namespace std;

void printPattern(int rows) {
    int n = (rows - 1) / 2;  // Calculate the midpoint

    // Upper part of the pattern
    for (int i = 0; i <= n; i++) {
        for (char ch = 'A'; ch <= 'A' + 2 * i; ch++) {
            cout << ch;
        }
        cout << endl;
    }

    // Lower part of the pattern
    for (int i = n - 1; i >= 0; i--) {
        for (char ch = 'A'; ch <= 'A' + 2 * i; ch++) {
            cout << ch;
        }
        cout << endl;
    }
}

int main() {
    int rows = 9;  // Total number of rows
    printPattern(rows);
    return 0;
}
