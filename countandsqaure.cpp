#include <iostream>
#include <cmath>

using namespace std;
int countDigits(int number) {
    
    if (number == 0) return 1;
    
    int count = 0;
    int temp = number;
    
    while (temp != 0) {
        temp /= 10; 
        ++count;   
    }
    
    return count;
}


void printSquareOfDigitsCount(int number) {
    int digitsCount = countDigits(number);
    int square = digitsCount * digitsCount;
    cout << "Number of digits: " << digitsCount << endl;
    cout << "Square of the number of digits: " << square << endl;
}

int main() {
    int number;
    cout << "Enter a number: ";
    cin >> number;

    printSquareOfDigitsCount(number);

    return 0;
}
