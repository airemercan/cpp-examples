#include <iostream>

int main() {

  double weight;
  
  // Ask the user
  std::cout << "Enter your weight in Earth: ";
  
  std::cin >> weight;
  
  weight = (weight * 10) /0.6;
  
  std::cout << "Your weight is " << weight << " kg in Moon.\n";
  
}
