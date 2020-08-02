#include <iostream>
using namespace std;

int main()
{
  string s, result[10];
  int m, h;

  int index = 0;
  while (true)
  {
    cin >> s;
    if (s == "-")
      break;

    cin >> m;

    result[index] = s;
    for (int i = 0; i < m; i++)
    {
      cin >> h;
      result[index] = result[index].substr(h) + result[index].substr(0, h);
    }
    index++;
  }

  for (int i = 0; i < index; i++)
  {
    cout << result[i] << endl;
  }

  return 0;
}