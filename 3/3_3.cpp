#include <iostream>

int main ()
{
  int chest = 42, waist = 0x42, inseam = 042;

  std::cout << "Monsieur cuts a striking figure. " << std::endl;
  std::cout << "chest: " << chest << std::endl;
  std::cout << "waist: " << waist << std::endl;
  std::cout << "inseam: " << inseam <<std::endl;

  chest = 42, waist = 42, inseam = 42;

  std::cout << "Monsieur cuts a striking figure. " << std::endl;
  std::cout << "chest: " << chest << std::endl;
  std::cout << std::hex;
  std::cout << "waist: " << waist << std::endl;
  std::cout << std::oct;
  std::cout << "inseam: " << inseam <<std::endl;

  return 0;
}
