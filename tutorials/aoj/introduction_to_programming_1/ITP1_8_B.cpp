#include <iostream>
using namespace std;

int main()
{
  string s[10000];
  int answer[10000];

  int i = 0;
  while (true)
  {
    getline(cin, s[i]);
    if (s[i].compare("0") == 0)
      break;

    int j = 0;
    for (size_t k = 0; k < s[i].size(); k++)
    {
      j += s[i][k] - '0';
    }
    answer[i] = j;
    i++;
  }

  for (int j = 0; j < i; j++)
  {
    cout << answer[j] << endl;
  }

  return 0;
}