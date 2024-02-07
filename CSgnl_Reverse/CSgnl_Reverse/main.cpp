//
//  main.cpp
//  CSgnl_Reverse
//
//  Created by İrem Ercan on 7.02.2024.
// Write a C++ program that prompts the user to enter a string, and then prints the reverse of the string.

#include <iostream>
#include <string>
using namespace std;

void reverseString(string &str) {
    int n = str.length();
    for (int i = 0; i < n / 2; i++) {
        swap(str[i], str[n - i - 1]);
    }
}

int main() {
    string input;
    cout << "Enter a string: ";
    getline(cin, input);

    reverseString(input);

    cout << "Reversed string: " << input << endl;
    return 0;
}
