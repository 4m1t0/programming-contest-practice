#include <iostream>
using namespace std;

int main()
{
  string s, p;
  getline(cin, s);
  getline(cin, p);

  for (size_t i = 0; i < s.size(); i++)
  {
    string new_string = s.substr(i).append(s.substr(0, i));
    if (new_string.find(p) != string::npos)
    {
      cout << "Yes" << endl;
      return 0;
    }
  }

  cout << "No" << endl;
  return 0;
}