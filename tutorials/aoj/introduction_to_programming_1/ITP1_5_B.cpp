#include <iostream>
using namespace std;

struct Frame
{
  int height, width;
};

int main()
{
  Frame frame[10000];
  int i = 0;

  do
  {
    cin >> frame[i].height >> frame[i].width;
    i++;
  } while (frame[i - 1].height != 0 || frame[i - 1].width != 0);

  for (int j = 0; j < i - 1; j++)
  {
    for (int k = 0; k < frame[j].height; k++)
    {
      for (int l = 0; l < frame[j].width; l++)
      {
        if (k == 0 || k == frame[j].height - 1)
        {
          cout << "#";
        }
        else
        {
          if (l == 0 || l == frame[j].width - 1)
          {
            cout << "#";
          }
          else
          {
            cout << ".";
          }
        }
      }
      cout << endl;
    }
    cout << endl;
  }

  return 0;
}