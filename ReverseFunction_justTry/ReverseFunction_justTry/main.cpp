//
//  main.cpp
//  ReverseFunction_justTry
//
//  Created by İrem Ercan on 6.02.2024.
// try to reverse the text. let's gooo

#include <iostream>
#include <string>
using namespace std;

string reverseIt (string text){
    string reverseText = "";
    for (int i = text.length() - 1; i >=0; i--){
        reverseText+= text[i];
    }
    return reverseText;
}
int main (){
    cout << "Please enter a text or word: \n";
    string text;
    getline(cin, text);
    string reverseText = reverseIt(text);
    cout << "The reverse of the text is: " << reverseText << "\n";
}
