#include <iostream>
using namespace std;

int main()
{
  int r, c, n;
  cin >> r >> c;

  int matrix[101][101];
  int total = 0;
  for (int i = 0; i < r; i++)
  {
    for (int j = 0; j < c; j++)
    {
      cin >> n;
      matrix[i][j] = n;
      total += n;
      if (j == c - 1)
      {
        int sum = 0;
        for (int k = 0; k < c; k++)
        {
          sum += matrix[i][k];
        }
        matrix[i][c] = sum;
      }
    }

    if (i == r - 1)
    {
      for (int k = 0; k < c; k++)
      {
        int sum = 0;
        for (int l = 0; l < r; l++)
        {
          sum += matrix[l][k];
        }
        matrix[r][k] = sum;
      }
    }
  }
  matrix[r][c] = total;

  for (int i = 0; i <= r; i++)
  {
    for (int j = 0; j <= c; j++)
    {
      if (j == c)
      {
        cout << matrix[i][j] << endl;
      }
      else
      {
        cout << matrix[i][j] << " ";
      }
    }
  }

  return 0;
}