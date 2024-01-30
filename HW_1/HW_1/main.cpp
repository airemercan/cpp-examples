//
//  main.cpp
//  HW_1
//
//  Created by İrem Ercan on 19.01.2024.
//

#include <iostream>
#include <cmath>
int main(int argc, const char * argv[]) {
    int num1, num2;
    char opt;
    
    std::cout <<"Please enter the operation you want to make (Use symbols such as +,-, / or * )";
    std::cin >> opt;
    std::cout <<"Please enter your first number: \n";
    std::cin >> num1;
    std::cout <<"Please enter your second number: \n";
    std::cin >> num2;
    
    int result = 0;
    if (opt == '+') {
        result = num1 + num2;
    } else if (opt == '-') {
        result = num1 - num2;
    } else if (opt == '*') {
        result = num1 * num2;
    } else if (opt == '/') {
        result = num1 / num2;
    } else {
        std::cout << "Invalid operation. Please enter a valid operation.";
    }
    std::cout << result << "\n";
        return 0;
}
