//  CSgnl_2_OddoEven
//
//  Created by İrem Ercan on 2.02.2024.
// Aim :  Write a C++ program that asks the user to input an integer and then prints whether the number is even or odd.

#include <iostream>
using namespace std;
int main(int argc, const char * argv[]) {
    int number;
    cout << "Enter a number \n";
    cin >> number;
    if ( number % 2 == 0){
        cout << number << " is an even number. \n";
    } else {
        cout << number << " is an odd number. \n";
    }
    return 0;
}
