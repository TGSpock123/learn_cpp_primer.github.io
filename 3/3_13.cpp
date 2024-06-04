#include <iostream>

int main ()
{
  int auks, bats, coots;
  char ch {'Z'};

  auks = 19.99 + 11.99;
  bats = (int) 19.99 + (int) 11.99;
  coots = int (19.99) + int (11.99);

  std::cout << "auks: " << auks << std::endl;
  std::cout << "bats: " << bats << std::endl;
  std::cout << "coots: " << coots << std::endl;

  std::cout << "The code for " << ch << " is " << (int) ch <<
  ", also " << static_cast <int> (ch)<< std::endl;

  return 0;
}