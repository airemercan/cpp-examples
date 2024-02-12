//
//  main.cpp
//  FibonacciExercise
//
//  Created by İrem Ercan on 12.02.2024.
//

#include <iostream>

void seriesFibonacci (int number) {
    int firstNum = 0;
    int secondNum = 1;
    int nextNum;
    
    for (int i = 0 ; i < number ; i++ ){
        if (i <= 1) {
            nextNum = 1 ;
        } else {
            nextNum = firstNum + secondNum;
            firstNum = secondNum;
            secondNum = nextNum;
        }
        std:: cout << nextNum << "\n";
    }
}
    int main(){
    
        int number;
        std::cout << "Enter a positive number to see its Fibonacci serie : \n";
        std::cin >> number;
        
        if (number <= 0){
            std::cout << "POSITIVE NUMBERS ONLY. \n";
            return 0;
        } else {
            seriesFibonacci(number);
            return 0;
        }
    }
