#include <iostream>
using namespace std;

int main()
{
  int n, x, result[10000];

  int length = 0;
  while (true)
  {
    cin >> n >> x;
    if (n == 0 && x == 0)
      break;

    int count = 0;
    for (int i = 1; i <= n - 2; i++)
    {
      for (int j = i + 1; j <= n - 1; j++)
      {
        for (int k = j + 1; k <= n; k++)
        {
          if (i + j + k == x)
          {
            count++;
          }
        }
      }
    }
    result[length++] = count;
  }

  for (int i = 0; i < length; i++)
  {
    cout << result[i] << endl;
  }

  return 0;
}