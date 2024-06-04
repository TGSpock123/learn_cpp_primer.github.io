//Too simple to use multifile;
#include <iostream>
void show_words (int n);
double c_2_f (double c);
double ly_2_au (double ly);
void tim_cat (int hour, int min);

int main ()
{
  std::cout << "T G Spock. " << std::endl << "Oregon, Coos Bay. " << std::endl;

  int how_long;

  std::cout << "Please enter how many longs. " << std::endl;
  std::cin >> how_long;
  std::cout << how_long << " longs is " << how_long * 220 << " yards. " << std::endl;

  show_words (2);

  int age, month;

  std::cout << "Please enter your age: " << std::endl;
  std::cin >> age;
  month = age * 12;
  std::cout << "You have past " << month << " month. " << std::endl;

  double c;

  std::cout << "Please enter a Celsius value: " << std::endl;
  std::cin >> c;
  std::cout << c << " degrees Celsius is " << c_2_f (c)
   << " degrees Fahrenheit. " << std::endl;

  double l_y;

  std::cout << "Please enter number of lightyears: " << std::endl;
  std::cin >> l_y;
  std::cout << l_y << " lightyears = " << ly_2_au (l_y)
  << " astronomical units. " << std::endl;

  int hour, min;

  std::cout << "Please enter the number of hours: " << std::endl;
  std::cin >> hour;
  std::cout << "Please enter the number of minutes: " << std::endl;
  std::cin >> min;
  std::cout << "Time: ";
  tim_cat (hour, min);

  return 0;
}

void show_words (int n)
{
  std::cout << "Three blind mice. " << std::endl;

  if (n > 1)
  {
    show_words (n - 1);
  }

  std::cout << "See how they run. " << std::endl;
}

double c_2_f (double c)
{
  return c * 1.8 + 32.0;
}

double ly_2_au (double ly)
{
  return ly * 63240;
}

void tim_cat (int hour, int min)
{
  char colon = ':';
  char period = '.';

  std::cout << hour << colon << min << period << std::endl;
}
