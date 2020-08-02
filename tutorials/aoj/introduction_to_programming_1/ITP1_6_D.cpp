#include <iostream>
using namespace std;

int main()
{
  int n, m;
  cin >> n >> m;

  int matrix[100][100] = {{0}};
  for (int i = 0; i < n; i++)
  {
    for (int j = 0; j < m; j++)
    {
      cin >> matrix[i][j];
    }
  }

  int vector[100] = {0};
  for (int i = 0; i < m; i++)
  {
    cin >> vector[i];
  }

  int result[100] = {0};
  for (int i = 0; i < n; i++)
  {
    for (int j = 0; j < m; j++)
    {
      result[i] += matrix[i][j] * vector[j];
    }
  }

  for (int i = 0; i < n; i++)
  {
    cout << result[i] << endl;
  }

  return 0;
}