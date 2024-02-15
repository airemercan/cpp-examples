//
//  main.cpp
//  GreatFactorProject
//
//  Created by İrem Ercan on 13.02.2024.
//

#include <iostream>
#include <algorithm>

int mathChallenge(int num1, int num2) {
    int gcd = 1;
    for (int i = 1; i <= std::min(num1, num2); ++i) {
        if (num1 % i == 0 && num2 % i == 0) {
            gcd = i;
        }
    }
    return gcd;
}

int main() {
    int num1 = 0;
    int num2 = 0;

    std::cout << "Enter the first number (between 1 and 1000): ";
    if (!(std::cin >> num1) || num1 < 1 || num1 > 1000) {
        std::cout << "Invalid input for the first number. Please enter a number between 1 and 1000." << std::endl;
        return 1;
    }

    std::cout << "Enter the second number (between 1 and 1000): ";
    if (!(std::cin >> num2) || num2 < 1 || num2 > 1000) {
        std::cout << "Invalid input for the second number. Please enter a number between 1 and 1000." << std::endl;
        return 1;
    }

    int result = mathChallenge(num1, num2);
    std::cout << "Greatest Common Factor of " << num1 << " and " << num2 << " is " << result << std::endl;

    return 0;
}

// bu projeyi tekrar incele
