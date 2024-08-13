#include <iostream>
using namespace std;

void printSquares(int n) {
    for (int i = 1; i <= n; ++i) {
        cout << i * i << " ";
    }
    cout << endl; 
}

int main() {
    int n;
    cout << "Enter a positive integer: ";
    cin >> n;
if (n > 0) {
        printSquares(n);
    } else {
        cout << "Please enter a positive integer." <<endl;
    }

    return 0;
}
