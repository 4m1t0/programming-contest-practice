#include <iostream>
using namespace std;

int main()
{
  int n, array[100];
  cin >> n;
  for (int i = 0; i < n; i++)
  {
    cin >> array[i];
  }

  for (int i = n - 1; 0 <= i; --i)
  {
    cout << array[i];
    if (i != 0)
    {
      cout << " ";
    }
  }
  cout << endl;
  return 0;
}