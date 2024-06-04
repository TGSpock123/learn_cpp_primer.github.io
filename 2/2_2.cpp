#include <iostream>
#include <cmath>
#include <iomanip>

int main ()
{
  double area, side;

  std::cout << "Please enter the floor area of your home. " << std::endl;
  std::cin >> area;
  side = sqrt (area);
  std::cout << "That's the equivalent of a square " << std::setiosflags (std::ios::fixed)
  << std::setprecision (3) << side << " feet to the side. " << std::endl;
  std::cout << "Thank you for using. " << std::endl;

  return 0;
}
