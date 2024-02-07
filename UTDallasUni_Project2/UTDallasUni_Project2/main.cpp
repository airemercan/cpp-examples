//
//  main.cpp
//  UTDallasUni_Project2
//
//  Created by İrem Ercan on 7.02.2024.
//

#include <iostream>

int main() {
    char ch;
    int num;
    float fnum;

    std::cout << "Input a single character, followed by : ";
    std::cin >> ch;

    std::cout << "Input an integer, followed by : ";
    std::cin >> num;

    std::cout << "Input a float, followed by : ";
    std::cin >> fnum;

    std::cout << "The character " << ch << " when cast to an int gives value " << static_cast<int>(ch) << std::endl;
    std::cout << "The character " << ch << " when cast to a float gives value " << static_cast<float>(ch) << std::endl;
    std::cout << "The integer " << num << " when cast to a char gives value " << static_cast<char>(num) << std::endl;
    std::cout << "The integer " << num << " when cast to a float gives value " << static_cast<float>(num) << std::endl;
    std::cout << "The float " << fnum << " when cast to a char gives value " << static_cast<char>(fnum) << std::endl;
    std::cout << "The float " << fnum << " when cast to an int gives value " << static_cast<int>(fnum) << std::endl;

    return 0;
}
