#include <iostream>
#include <stdio.h>
using namespace std;

int main()
{
  int input[10000];
  int i = 0;

  do
  {
    cin >> input[i];
    i++;
  } while (input[i - 1] != 0);

  for (int j = 0; j < i - 1; j++)
  {
    printf("Case %d: %d\n", j + 1, input[j]);
  }

  return 0;
}