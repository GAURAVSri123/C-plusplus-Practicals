#include <iostream>
using namespace std;

// Function to display the address of each character in the string
void showAddress(char *str) {
    cout << "Character addresses:\n";
    while (*str != '\0') {
        cout << *str << " - " << (void*)str << endl;
        str++;
    }
}

// Function to concatenate two strings
void concatenate(char *str1, char *str2, char *result) {
    while (*str1 != '\0') {
        *result = *str1;
        result++;
        str1++;
    }
    while (*str2 != '\0') {
        *result = *str2;
        result++;
        str2++;
    }
    *result = '\0';
}

// Function to compare two strings
int compareStrings(char *str1, char *str2) {
    while (*str1 != '\0' && *str2 != '\0') {
        if (*str1 != *str2)
            return (*str1 - *str2);
        str1++;
        str2++;
    }
    return (*str1 - *str2);
}

// Function to calculate the length of the string
int stringLength(char *str) {
    int length = 0;
    while (*str != '\0') {
        length++;
        str++;
    }
    return length;
}

// Function to convert lowercase characters to uppercase
void toUpperCase(char *str) {
    while (*str != '\0') {
        if (*str >= 'a' && *str <= 'z')
            *str -= 32;  // Convert to uppercase
        str++;
    }
}

// Function to reverse a string
void reverseString(char *str) {
    char *start = str;
    char *end = str;
    while (*end != '\0')  // Move end to last character
        end++;
    end--;  // Set end to last valid character

    // Swap characters from start and end
    while (start < end) {
        char temp = *start;
        *start = *end;
        *end = temp;
        start++;
        end--;
    }
}

int main() {
    char str1[100], str2[100], result[200];
    int choice;

    do {
        cout << "\nString Operations Menu:\n";
        cout << "1. Show address of each character\n";
        cout << "2. Concatenate two strings\n";
        cout << "3. Compare two strings\n";
        cout << "4. Calculate length of a string\n";
        cout << "5. Convert to uppercase\n";
        cout << "6. Reverse the string\n";
        cout << "7. Exit\n";
        cout << "Enter your choice: ";
        cin >> choice;
        cin.ignore();  // To ignore newline character

        switch (choice) {
            case 1:
                cout << "Enter a string: ";
                cin.getline(str1, 100);
                showAddress(str1);
                break;

            case 2:
                cout << "Enter first string: ";
                cin.getline(str1, 100);
                cout << "Enter second string: ";
                cin.getline(str2, 100);
                concatenate(str1, str2, result);
                cout << "Concatenated string: " << result << endl;
                break;

            case 3:
                cout << "Enter first string: ";
                cin.getline(str1, 100);
                cout << "Enter second string: ";
                cin.getline(str2, 100);
                if (compareStrings(str1, str2) == 0)
                    cout << "Strings are equal.\n";
                else
                    cout << "Strings are not equal.\n";
                break;

            case 4:
                cout << "Enter a string: ";
                cin.getline(str1, 100);
                cout << "Length of the string: " << stringLength(str1) << endl;
                break;

            case 5:
                cout << "Enter a string: ";
                cin.getline(str1, 100);
                toUpperCase(str1);
                cout << "Uppercase string: " << str1 << endl;
                break;

            case 6:
                cout << "Enter a string: ";
                cin.getline(str1, 100);
                reverseString(str1);
                cout << "Reversed string: " << str1 << endl;
                break;

            case 7:
                cout << "Exiting program...\n";
                break;

            default:
                cout << "Invalid choice! Please try again.\n";
        }
    } while (choice != 7);

    return 0;
}
