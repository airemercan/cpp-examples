//
//  main.cpp
//  HW_5_LeapYear
//
//  Created by İrem Ercan on 19.01.2024.
//

#include <iostream>

int main(int argc, const char * argv[]) {
    int year;
    
    std::cout << "Please enter a year: " ;
    std::cin >> year;
    
    if ((year % 400 == 0) || (year % 4 == 0 && year % 100 !=0)){
        std::cout << year << " is a leap year. \n";
    } else {
    std::cout << year << " is not a leap year. \n";
    }
    
    return 0;
}
