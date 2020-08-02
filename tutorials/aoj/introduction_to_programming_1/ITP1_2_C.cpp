#include <iostream>
using namespace std;

void bubbleSort(int array[], int n)
{
  int i = 0;
  bool flag = 1;
  while (flag)
  {
    flag = 0;
    for (int j = n - 1; j >= i + 1; j--)
    {
      if (array[j] < array[j - 1])
      {
        swap(array[j], array[j - 1]);
        flag = 1;
      }
    }
    i++;
  }

  return;
}

int main()
{
  int array[3];
  int n = 3;
  for (int i = 0; i < n; i++)
  {
    cin >> array[i];
  }

  bubbleSort(array, n);
  for (int i = 0; i < n; i++)
  {
    if (i != n - 1)
    {
      cout << array[i] << " ";
    }
    else
    {
      cout << array[i] << endl;
    }
  }

  return 0;
}