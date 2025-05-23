#include <iostream>
#include <set>
using namespace std;

int main() {
    int arr[] = {4, 2, 4, 3, 2, 1, 5};
    int n = sizeof(arr) / sizeof(arr[0]);

    set<int> s;  // Set automatically removes duplicates
    for (int i = 0; i < n; i++) {
        s.insert(arr[i]);
    }

    cout << "Array after removing duplicates: ";
    for (int x : s) {
        cout << x << " ";
    }
    cout << endl;
    return 0;
}
