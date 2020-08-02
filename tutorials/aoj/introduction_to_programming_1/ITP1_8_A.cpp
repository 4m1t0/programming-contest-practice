#include <iostream>
using namespace std;

int main()
{
  string str;
  getline(cin, str);

  char c;
  for (size_t i = 0; i < str.size(); i++)
  {
    if (isalpha(str[i]))
    {
      if (islower(str[i]))
      {
        c = toupper(str[i]);
      }
      else
      {
        c = tolower(str[i]);
      }
      cout << c;
    }
    else
    {
      cout << str[i];
    }
  }
  cout << endl;

  return 0;
}