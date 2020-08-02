#include <iostream>
using namespace std;

struct Rectangle
{
  int height, width;
};

int main()
{
  Rectangle rectangle[10000];
  int i = 0;
  do
  {
    cin >> rectangle[i].height >> rectangle[i].width;
    i++;
  } while (rectangle[i - 1].height != 0 || rectangle[i - 1].width != 0);

  for (int j = 0; j < i - 1; j++)
  {
    for (int k = 0; k < rectangle[j].height; k++)
    {
      for (int l = 0; l < rectangle[j].width; l++)
      {
        if (k % 2 == 0)
        {
          if (l % 2 == 0)
          {
            cout << "#";
          }
          else
          {
            cout << ".";
          }
        }
        else
        {
          if (l % 2 == 0)
          {
            cout << ".";
          }
          else
          {
            cout << "#";
          }
        }
      }
      cout << endl;
    }
    cout << endl;
  }

  return 0;
}