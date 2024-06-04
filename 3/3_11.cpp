#include <iostream>

int main ()
{
  float hats, heads;

  std::cout.setf (std::ios_base::fixed, std::ios_base::floatfield);

  std::cout << "Enter a number: \n";
  std::cin >> hats;
  std::cout << "Enter another number: \n";
  std::cin >> heads;

  std::cout << "hats: " << hats << std::endl;
  std::cout << "heads: " << heads << std::endl;
  std::cout << "hats + heads: " << hats + heads << std::endl;
  std::cout << "hats - heads: " << hats - heads << std::endl;
  std::cout << "hats * heads: " << hats * heads << std::endl;
  std::cout << "hats / heads: " << hats / heads << std::endl;

  return 0;
}

//下两个略;
