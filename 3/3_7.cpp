#include <iostream>
#include <io.h>
#include <fcntl.h>

int main ()
{
  wchar_t ch;
  int i;

  _setmode(_fileno(stdout), _O_U16TEXT);
  _setmode(_fileno(stdin), _O_U16TEXT);

  std::wcin >> ch;
  i = ch;
  std::wcout << ch << ' ' << i << std::endl;

  return 0;
}
