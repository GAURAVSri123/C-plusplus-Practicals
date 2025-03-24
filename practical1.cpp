#include <iostream>
#include <cmath>  // For pow function
#include <cstdlib> // For atoi (to convert command line input)

using namespace std;  

double sumSeries(int n) {
    double sum = 0.0; // Initialize sum

    // Loop to calculate the sum of the series
    for (int i = 1; i <= n; i++) {
        double term = 1.0 / pow(i, i); // Calculate 1 / (i^i)

        // Alternate addition and subtraction
        if (i % 2 == 0) {
            sum -= term;
        } else {
            sum += term;
        }
    }
    return sum;
}

int main(int argc, char *argv[]) {
    int n;

    // Check if the command-line argument is provided
    if (argc > 1) {
        n = atoi(argv[1]); // Convert argument to integer
    } else {
        //  enter the value
        cout << "Enter the number of terms (n): ";
        cin >> n;
    }

    // Check for valid input
    if (n <= 0) {
        cout << "Please enter a positive integer value for n." << endl;
        return 1; // Exit with error
    }

    // Compute the sum of the series
    double result = sumSeries(n);

    // Display the result
    cout << "Sum of the series up to " << n << " terms: " << result << endl;

    return 0;
}
