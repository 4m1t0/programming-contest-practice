#include <iostream>
#include <algorithm> // std::transform
using namespace std;

int main()
{
  string W, T;
  getline(cin, W);
  transform(W.begin(), W.end(), W.begin(), ::tolower);

  int count = 0;
  string word;
  while (true)
  {
    getline(cin, T);
    if (T == "END_OF_TEXT")
      break;

    transform(T.begin(), T.end(), T.begin(), ::tolower);
    for (size_t i = 0; i < T.size(); i++)
    {
      if (!isspace(T[i]) && T[i] != '\n')
      {
        word += T[i];
      }
      else
      {
        if (W == word)
          count++;
        word = "";
      }
    }
    if (W == word)
      count++;
    word = "";
  }

  cout << count << endl;

  return 0;
}