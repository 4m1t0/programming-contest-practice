#include <iostream>
#include <stdio.h>
using namespace std;

int main()
{
  int n, a[10000], min, max;
  min = 1000001;
  max = -1000001;
  long long sum = 0;
  cin >> n;
  for (int i = 0; i < n; i++)
  {
    cin >> a[i];
    if (a[i] < min)
    {
      min = a[i];
    }
    if (max < a[i])
    {
      max = a[i];
    }
    sum += a[i];
  }

  printf("%d %d %lld\n", min, max, sum);

  return 0;
}