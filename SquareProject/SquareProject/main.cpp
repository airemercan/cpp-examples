//
//  main.cpp
//  SquareProject
//
//  Created by İrem Ercan on 5.02.2024.
//

#include <iostream>
using namespace std;

int quareRoot(int number) {
    return number*number;
}

int main() {
    int number;
    cout << "Please enter a number : \n";
    cin >> number;
    
    int square = quareRoot(number);
    cout << "Your square of the number is : " << square << "\n";
    return 0;
}
