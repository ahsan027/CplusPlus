#include <iostream>
#include <string>
using namespace std;
string removeConsecutiveDuplicates(const string& str) {
    string result;
    char prev = '\0';  // Initialize prev with a null character

    for (char ch : str) {
        if (ch != prev) {
            result.push_back(ch);
            prev = ch;
        }
    }

    return result;
}

int main() {
    string inputString;
    cout << "Enter a string: ";
    getline(cin, inputString);

    string result = removeConsecutiveDuplicates(inputString);
    cout << "String with consecutive duplicates removed: " << result << endl;

    return 0;
}
