#include <iostream>
#include <iomanip>
#include <math.h>
using namespace std;

int main()
{
  int n, s[1000];
  double standard_deviation[1000];

  int index = 0;
  while (true)
  {
    cin >> n;
    if (n == 0)
    {
      break;
    }

    for (int i = 0; i < n; i++)
    {
      cin >> s[i];
    }

    int sum = 0;
    for (int i = 0; i < n; i++)
    {
      sum += s[i];
    }
    double mean = sum / (double)n;

    double d = 0;
    for (int i = 0; i < n; i++)
    {
      d += pow(s[i] - mean, 2);
    }
    double variance = d / (double)n;
    standard_deviation[index] = sqrt(variance);
    index++;
  }

  cout << fixed << setprecision(15);
  for (int i = 0; i < index; i++)
  {
    cout << standard_deviation[i] << endl;
  }

  return 0;
}