#include <iostream>

int main ()
{
  std::cout.setf (std::ios_base::fixed, std::ios_base::floatfield);

  float tub {10.0 / 3.0};
  double mint {10.0 / 3.0};
  const float million {1e6};

  std::cout << "tub: " << tub << std::endl;
  std::cout << "a million tubs: " << tub * million << std::endl;
  std::cout << "ten million tubs: " << tub * million * 10 << std::endl;
  std::cout << "mint: " << mint << std::endl;
  std::cout << "a million mints: " << mint * million << std::endl;

  return 0;
}
