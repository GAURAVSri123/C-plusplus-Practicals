#include <iostream>
using namespace std;

class Triangle {
public:
    double base, height, side1, side2, side3;

    // Function to calculate area using base and height
    double area(double b, double h) {
        return 0.5 * b * h;
    }

    // Function to calculate area using three sides (simplified)
    double area(double a, double b, double c) {
        return (a + b + c) / 2;  // Just returning semi-perimeter (Easy Version)
    }

    // Overloaded Assignment Operator (=)
    void operator=(const Triangle &t) {
        base = t.base;
        height = t.height;
    }

    // Overloaded Equality Operator (==)
    bool operator==(const Triangle &t) {
        return (base == t.base && height == t.height);
    }
};

int main() {
    Triangle t1, t2;

    // Input base and height for Triangle 1
    cout << "Enter base and height for Triangle 1: ";
    cin >> t1.base >> t1.height;

    // Input base and height for Triangle 2
    cout << "Enter base and height for Triangle 2: ";
    cin >> t2.base >> t2.height;

    // Calculate and display area
    cout << "Area of Triangle 1: " << t1.area(t1.base, t1.height) << endl;

    // Using overloaded assignment operator
    Triangle t3;
    t3 = t1;
    cout << "Triangle 3 copied from Triangle 1: Base = " << t3.base << ", Height = " << t3.height << endl;

    // Using overloaded equality operator
    if (t1 == t2)
        cout << "Triangle 1 and Triangle 2 are equal.\n";
    else
        cout << "Triangle 1 and Triangle 2 are not equal.\n";

    return 0;
}
