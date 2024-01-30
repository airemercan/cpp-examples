//
//  main.cpp
//  HW_3_TotalSum
//
//  Created by İrem Ercan on 19.01.2024.
//

#include <iostream>

int main(int argc, const char * argv[]) {
    int number;
    int total = 0;
    
    std::cout << "Please enter a number that not is less than 0.";
    std::cin >> number;
    
    if (number < 0) {
        std::cout << "Please enter a valid number.";
    } else {
        for (int i =1; i<= number ; i++) {
            total += i ;
            //total = total + i //
        }
    }
    std::cout << "Total is " << total << "\n";
    
    return 0;
}
