#include <iostream>
#include <stdio.h>
using namespace std;

int main()
{
  int seconds;
  cin >> seconds;
  printf("%d:%d:%d\n", seconds / 3600, seconds % 3600 / 60, seconds % 60);
  return 0;
}