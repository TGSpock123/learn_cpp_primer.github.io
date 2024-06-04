#include <iostream>
#include <climits>

int main ()
{
  int n_int {INT_MAX};
  short n_short {SHRT_MAX};
  long n_long {LONG_MAX};
  long long n_llong {LONG_LONG_MAX};

  std::cout << "int is " << sizeof (int) << " bytes. " << std::endl;
  std::cout << "short is " << sizeof (short) << " bytes. " << std::endl;
  std::cout << "long is " << sizeof (long) << " bytes. " << std::endl;
  std::cout << "long long is " << sizeof (long long) << " bytes. " << std::endl;

  std::cout << std::endl;

  std::cout << "Maximum values: " << std::endl;
  std::cout << "Max int: " << n_int << ". " << std::endl;
  std::cout << "Max short: " << n_short << ". " << std::endl;
  std::cout << "Max long: " << n_long << ". " << std::endl;
  std::cout << "Max long long: " << n_llong << ". " << std::endl;
  std::cout << "Minim values: " << std::endl;
  std::cout << "Min int: " << INT_MIN << ". " << std::endl;
  std::cout << "Min short: " << SHRT_MIN << ". " << std::endl;
  std::cout << "Min long: " << LONG_MIN << ". " << std::endl;
  std::cout << "Min long long: " << LONG_LONG_MIN << ". " << std::endl;

  std::cout << std::endl;

  std::cout << "Bits per byte: " << CHAR_BIT << ". " << std::endl;

  return 0;
}
