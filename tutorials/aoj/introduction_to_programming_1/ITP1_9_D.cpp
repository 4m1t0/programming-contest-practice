#include <iostream>
#include <string>
using namespace std;

int main()
{
  string str, function;
  cin >> str;

  int q, a, b;
  cin >> q;

  for (int i = 0; i < q; i++)
  {
    cin >> function;

    if (function == "print")
    {
      cin >> a >> b;
      for (int j = a; j <= b; j++)
      {
        cout << str[j];
      }
      cout << endl;
    }
    else if (function == "reverse")
    {
      cin >> a >> b;

      string s;
      for (int j = a; j <= b; j++)
      {
        s[j] = str[a + b - j];
      }
      for (int j = a; j <= b; j++)
      {
        str[j] = s[j];
      }
    }
    else if (function == "replace")
    {
      string target;
      cin >> a >> b >> target;
      for (int j = a; j <= b; j++)
      {
        str[j] = target[j - a];
      }
    }
  }
}