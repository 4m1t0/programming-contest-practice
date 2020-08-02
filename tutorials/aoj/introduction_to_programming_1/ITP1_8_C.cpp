#include <iostream>
#include <stdio.h>
using namespace std;

int main()
{
  char c;
  int count[26] = {0};
  // ASCIIコード表におけるアルファベット a の10進数表現
  int offset = 97;

  while (true)
  {
    c = getchar();
    if (c == EOF)
      break;

    if (isalpha(c))
    {
      if (isupper(c))
        c = tolower(c);

      count[c - offset] += 1;
    }
  }

  for (int i = 0; i < 26; i++)
  {
    printf("%c : %d\n", i + offset, count[i]);
  }

  return 0;
}