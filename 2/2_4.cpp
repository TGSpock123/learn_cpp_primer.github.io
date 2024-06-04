#include "2_4"

int main ()
{
  int stone, pounds;

  std::cout << "Please enter the weight in stone. " << std::endl;
  std::cin >> stone;
  pounds = stone_to_lb (stone);
  std::cout << stone << " stone is: " << pounds << " pounds. " << std::endl;

  return 0;
}

int stone_to_lb (int sts)
{
  return sts * 14;
}
