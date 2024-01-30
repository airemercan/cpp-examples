//
//  main.cpp
//  HW_4_StarNumbers
//
//  Created by İrem Ercan on 19.01.2024.
//

#include <iostream>

int main() {
    int number;

    std::cout << "Please enter the number";
    std::cin >> number;
    for (int i = 1; i <= number; i++) {
        for (int j = 1; j <= i; j++) {
            std::cout << "*";
        }
        std::cout << "\n";
    }
    return 0;
}
