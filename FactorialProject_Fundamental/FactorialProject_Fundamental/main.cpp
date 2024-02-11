//
//  main.cpp
//  FactorialProject_Fundamental
//
//  Created by İrem Ercan on 11.02.2024.
//
/* Write a C++ program that prompts the user to enter a non-negative integer and calculates its factorial. The factorial of a non-negative integer n is the product of all positive integers less than or equal to n. For example, the factorial of 5 (denoted as 5!) is 5 * 4 * 3 * 2 * 1. */
#include <iostream>
using namespace std;

int main() {
    int num;
    int fact = 1;
    
    cout << "Enter a non-negative integer: \n";
    cin >> num;
    
    while (num < 0){
        cout << "Please enter a NON-NEGATIVE INTEGER. \n";
        cout << "Enter a valid integer: \n";
        cin >> num;
    }
    /*
    if (num < 0){
        cout << "Please enter a NON-NEGATIVE INTEGER. \n";
        return 0;
    } else {
     */
        for (int i = 1; i <= num; i++){
            fact *= i;
        }
    // }
    cout << "Factorial of " << num << " is : " << fact << " . \n";
    return 0;
}
/*
 Burada iki opsiyon var. While ile değerin küçük olduğu durumda hep hata verip kullanıcının pozitif değer girene kadar değer sormasını sağlayabiliriz.
 ya da if kullanıp fonksiyonu orada durdurabiliriz.
*/
