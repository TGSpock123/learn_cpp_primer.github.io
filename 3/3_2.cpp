#include <iostream>
#include <climits>

#define ZERO 0

int main ()
{
  short sam {SHRT_MAX};
  unsigned short sue = sam;

  std::cout << "Sam has " << sam << " dollars and Sue has " << sue;
  std::cout << " dollars deposited. " << std::endl;
  std::cout << "Add one dollar to each account. " << std::endl;

  sam ++;
  sue ++;

  std::cout << "Sam has " << sam << " dollars and Sue has " <<
  sue << " dollars deposited. " << std::endl << "Poor Sam! " << std::endl;

  sam = ZERO;
  sue = ZERO;

  std::cout << "Sam has " << sam << " dollars and Sue has " << sue;
  std::cout << " dollars deposited. " << std::endl;
  std::cout << "Take one dollar from each account. " << std::endl;

  sam --;
  sue --;

  std::cout << "Sam has " << sam << " dollars and Sue has " <<
  sue << " dollars deposited. " << std::endl << "Lucky Sue! " << std::endl;

  return 0;
}
