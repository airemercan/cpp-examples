//
//  main.cpp
//  UTDallasUni_Project1
//
//  Created by İrem Ercan on 7.02.2024.
//

#include <iostream>
int main() {
    char c;
    short s;
    int i;
    unsigned int ui;
    unsigned long int ul;
    float f;
    double d;
    long double ld;

    std::cout << std::endl
              << "The storage space for each variable type is:"
              << std::endl;
    std::cout << std::endl << "char: \t\t\t" << sizeof(c)*8 << " bits";
    std::cout << std::endl << "short: \t\t\t" << sizeof(s)*8 << " bits";
    std::cout << std::endl << "int: \t\t\t" << sizeof(i)*8 << " bits";
    std::cout << std::endl << "unsigned int: \t\t" << sizeof(ui)*8 << " bits";
    std::cout << std::endl << "unsigned long int: \t" << sizeof(ul)*8 << " bits";
    std::cout << std::endl << "float: \t\t\t" << sizeof(f)*8 << " bits";
    std::cout << std::endl << "double: \t\t" << sizeof(d)*8 << " bits";
    std::cout << std::endl << "long double: \t\t" << sizeof(ld)*8 << " bits";

    return 0;
}
