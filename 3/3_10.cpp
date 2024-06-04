#include <iostream>

int main ()
{
  float j = 2.34e22f, p = j + 1.0;

  std::cout << "j = " << j << std::endl;
  std::cout << "p - j = " << p - j << std::endl;

  return 0;
}
