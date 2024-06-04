#include <iostream>

int main ()
{
  const int con {6};

  *(int *)(&con) = 5;   //不知道为什么不管用;
  std::cout << con << std::endl;

  return 0;
}
