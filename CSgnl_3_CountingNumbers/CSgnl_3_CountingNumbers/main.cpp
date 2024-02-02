/*
Prompt: Modify your program to allow the user to enter multiple numbers until a zero is entered. After zero is entered, the program should print the count of positive and negative numbers entered.
*/
//  main.cpp
//  CSgnl_3_CountingNumbers
//
//  Created by İrem Ercan on 3.02.2024.
//

#include <iostream>
using namespace std;

int main(int argc, const char * argv[]) {
    int number, positiveCount = 0, negativeCount = 0;
    cout << "Please enter numbers. The program will give the output if the number 0 is entered. ";
    
    while (cin >> number && number != 0) {
        if (number > 0) {
            positiveCount++;
        } else {
            negativeCount++;
        }
    }
    cout << "Positive numbers: " << positiveCount << endl;
    cout << "Negative numbers: " << negativeCount << endl;
    return 0;
}


