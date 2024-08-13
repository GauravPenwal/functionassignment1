#include <iostream>
using namespace std;


void printOddNumbersBetween(int a, int b) {
    if (a > b) {
        swap(a, b); 
    }
    
    
    for (int i = a + 1; i < b; ++i) {
        if (i % 2 != 0) { 
            cout << i << " ";
        }
    }
    cout << endl; 
}

int main() {
    int a, b;
    cout << "Enter the first number (a): ";
    cin >> a;
    cout << "Enter the second number (b): ";
    cin >> b;

    printOddNumbersBetween(a, b);

    return 0;
}
