//
//  main.cpp
//  PalindromeExercise
//
//  Created by İrem Ercan on 8.02.2024.
/* Similar to a palindrome number, a palindrome string is a string that is equal to its reverse. You have to write a program to check whether the given string is a palindrome string or not.
 example: naman --> reverse --> naman
 so naman is a palindrome string. */

#include <iostream>
#include <string>
using namespace std;

bool isPalindrome(string word){
    string reverseWord = "";
    for (int i = word.length()-1;i >= 0; i--){
        reverseWord += word[i];
    }
    return word == reverseWord;
}
int main() {
    string word;
    cout << "Please enter a word to define whether it is a palindrome word or not : \n";
    cin >> word;
    
    if (isPalindrome(word)){
        cout << "Your word " << word << " is a palindrome word. \n";
    } else {
        cout << "Your word " << word << " is not a palindrome word. \n";
    }
    return 0;
}
