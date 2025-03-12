// using recursion...
#include <iostream>
using namespace std;

// Recursive function to find GCD
int gcdRecursive(int a, int b) {
    if (b == 0)
        return a;  // Base case
    return gcdRecursive(b, a % b);  // Recursive call
}

int main() {
    int num1, num2;

    cout << "Enter two numbers: ";
    cin >> num1 >> num2;

    cout << "GCD (using recursion) of " << num1 << " and " << num2 << " is: " << gcdRecursive(num1, num2) << endl;

    return 0;
}


//without resursion 
#include <iostream>
using namespace std;

// Function to find GCD using a loop
int gcdNonRecursive(int a, int b) {
    while (b != 0) {
        int temp = b;
        b = a % b;  // Update b to remainder
        a = temp;   // Swap values
    }
    return a;  // When b becomes 0, a is the GCD
}

int main() {
    int num1, num2;

    cout << "Enter two numbers: ";
    cin >> num1 >> num2;

    cout << "GCD (without recursion) of " << num1 << " and " << num2 << " is: " << gcdNonRecursive(num1, num2) << endl;

    return 0;
}
