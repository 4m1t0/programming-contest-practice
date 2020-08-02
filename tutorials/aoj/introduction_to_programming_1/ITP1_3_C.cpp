#include <iostream>
#include <stdio.h>
using namespace std;

struct Data
{
  int x, y;
};

int main()
{
  Data d[3000];
  int i = 0;
  do
  {
    cin >> d[i].x >> d[i].y;
    i++;
  } while (d[i - 1].x != 0 || d[i - 1].y != 0);

  for (int j = 0; j < i - 1; j++)
  {
    if (d[j].x < d[j].y)
    {
      printf("%d %d\n", d[j].x, d[j].y);
    }
    else
    {
      printf("%d %d\n", d[j].y, d[j].x);
    }
  }

  return 0;
}