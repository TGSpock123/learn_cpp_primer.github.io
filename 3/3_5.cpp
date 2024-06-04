#include <iostream>

int main ()
{
  char ch {'M'};
  int i {ch};

  std::cout << "The ASCII code for " <<ch << " is " << i << std::endl;

  ch ++;
  i = ch;
  std::cout << "The ASCII code for " <<ch << " is " << i << std::endl;

  std::cout << "Displaying char ch using cout.put ('N'): ";
  std::cout.put ('N');
  std::cout.put ('\n');

  return 0;
}
