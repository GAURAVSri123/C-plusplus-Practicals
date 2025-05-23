// write the occurence of alphabets ...
#include <iostream>
# inlcude <string>
using namespace std;

int main() {
    string text;
    int freq[26] = {0}; // Array to store count of alphabets

    //  user input
    cout << "Enter a line of text: ";
    getline(cin, text);

    // Count frequency of each alphabet
    for (int i = 0; i < text.length(); i++) {
        char ch = text[i];

        // Check if it's an alphabet (ignores spaces and numbers)
        if (ch >= 'A' && ch <= 'Z') {
            freq[ch - 'A']++; // Convert uppercase to array index
        } else if (ch >= 'a' && ch <= 'z') {
            freq[ch - 'a']++; // Convert lowercase to array index
        }
    }

    // Display the frequency of each alphabet
    cout << "Alphabet Frequencies:\n";
    for (int i = 0; i < 26; i++) {
        if (freq[i] > 0) {
            cout << char(i + 'a') << " : " << freq[i] << endl;
        }
    }

    return 0;
}
