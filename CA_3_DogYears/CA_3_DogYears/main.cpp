#include <iostream>

int main() {
  //Haydut is 9 years old
  int dog_age = 9;
  int early_years;
  int later_years;
  int human_years;
//The first two years
early_years = 21;
// The following years
later_years = (dog_age - 2) * 4;
// Haydut's age in human years
human_years= early_years + later_years;
std::cout << "My name is Haydut! Ruff ruff, I am " << human_years << " years old in human years.\n";

}
