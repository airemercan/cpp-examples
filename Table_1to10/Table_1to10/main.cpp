//
//  main.cpp
//  Table_1to10
//
//  Created by İrem Ercan on 10.02.2024.
//
/* Write a C++ program that prompts the user to enter an integer and then prints the multiplication table for that number from 1 to 10. Use a loop to generate and display the multiplication table.
 */
#include <iostream>

int main() {
    int number;
    std::cout << "Please enter a number between 1 - 10: \n";
    std::cin >> number;
    
    for (int i = 1 ; i <= 10 ;i++){
        std::cout << "Multiplication table for " << number << " is " << number << " * " << i << " = " << number * i << ". \n";
    }
    return 0;
}
