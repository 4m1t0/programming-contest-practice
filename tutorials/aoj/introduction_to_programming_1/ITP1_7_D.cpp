#include <iostream>
using namespace std;

int main()
{
  int n, m, l;
  cin >> n >> m >> l;

  int a[100][100], b[100][100], x;
  long long int c[100][100];
  for (int i = 0; i < n; i++)
  {
    for (int j = 0; j < m; j++)
    {
      cin >> x;
      a[i][j] = x;
    }
  }
  for (int i = 0; i < m; i++)
  {
    for (int j = 0; j < l; j++)
    {
      cin >> x;
      b[i][j] = x;
    }
  }

  for (int i = 0; i < n; i++)
  {
    for (int j = 0; j < l; j++)
    {
      long long int value = 0;
      for (int k = 0; k < m; k++)
      {
        value += a[i][k] * b[k][j];
      }
      c[i][j] = value;
    }
  }

  for (int i = 0; i < n; i++)
  {
    for (int j = 0; j < l; j++)
    {
      if (j != l - 1)
      {
        cout << c[i][j] << " ";
      }
      else
      {
        cout << c[i][j] << endl;
      }
    }
  }

  return 0;
}