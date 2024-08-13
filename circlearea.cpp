#include <iostream>
using namespace std;

double calculateCircleArea(double radius) {
   
    return 3.14 * radius * radius;
}

int main() {
    double radius;
    cout << "Enter the radius of the circle: ";
    cin >> radius;

    if (radius >= 0) {
        double area = calculateCircleArea(radius);
        cout << "The area of the circle with radius " << radius << " is " << area << std::endl;
    } else {
        cout << "Radius cannot be negative." << endl;
    }

    return 0;
}
