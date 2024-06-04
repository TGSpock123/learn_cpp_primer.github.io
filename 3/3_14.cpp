#include <iostream>

void trans (long long int * j, long long int * p, int tran);

int main ()
{
  long long int j, p;

  std::cout << "Please enter time in seconds: \n";
  std::cin >> j;

  std::cout << j << " seconds = ";
  trans (&j, &p, (24 * 60 * 60));
  std::cout << p << " days, ";
  trans (&j, &p, (60 * 60));
  std::cout << p << " hours, ";
  trans (&j, &p, 60);
  std::cout << p << " minutes, " << j << " seconds. \n";

  return 0;
}

void trans (long long int * j, long long int * p, int tran)
{
  *p = *j / tran;
  *j = *j % tran;
}
