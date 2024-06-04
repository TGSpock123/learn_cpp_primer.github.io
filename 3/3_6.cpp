#include <iostream>

int main ()
{
  long code;

  std::cout << "\007Operation \"HyperHype\" now activated. \n";
  std::cout << "Enter your agent code: ________\b\b\b\b\b\b\b\b";
  std::cin >> code;
  std::cout << "\007Your entered " << code << "... \n";
  std::cout << "\aCode verified! Proceed with Plan Z3. \n";

  return 0;
}
