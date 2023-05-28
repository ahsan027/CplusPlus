#include <iostream>
#include <string>
#include <sstream>
using namespace std;
bool isString(const string& input) {
    istringstream iss(input);
    string word;
    
    // Check if the input contains only alphabetic characters
    while (iss >> word) {
        for (char c : word) {
            if (!isalpha(c))
                return false;
        }
    }
    
    return true;
}

int main() {
    string userInput;
    cout << "Enter a string: ";
    getline(cin, userInput);

    if (isString(userInput)) {
        cout << "Input is a string." << endl;
    } else {
        cout << "Input is not a string." << endl;
    }

    return 0;
}
