#include <iostream>
void simon (int n);

int main ()
{
  int count;

  simon (3);
  std::cout << "Please choose an integer. " << std::endl;
  std::cin >> count;
  simon (count);
  std::cout << "Thank you for using. " << std::endl;

  return 0;
}

void simon (int n)
{
  std::cout << "Simon said touch your toes " << n << " times. " << std::endl;
}
