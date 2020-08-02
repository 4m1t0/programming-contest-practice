#include <iostream>
using namespace std;

struct Data
{
  int a, b;
  char op;
};

int main()
{
  Data d[10000];
  int i = 0;

  do
  {
    cin >> d[i].a >> d[i].op >> d[i].b;
    i++;
  } while (d[i - 1].op != '?');

  for (int j = 0; j < i - 1; j++)
  {
    if (d[j].op == '+')
    {
      cout << d[j].a + d[j].b << endl;
    }
    else if (d[j].op == '-')
    {
      cout << d[j].a - d[j].b << endl;
    }
    else if (d[j].op == '*')
    {
      cout << d[j].a * d[j].b << endl;
    }
    else if (d[j].op == '/')
    {
      cout << d[j].a / d[j].b << endl;
    }
  }

  return 0;
}