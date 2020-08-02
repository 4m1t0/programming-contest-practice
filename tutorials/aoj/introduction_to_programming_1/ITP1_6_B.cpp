#include <iostream>
using namespace std;

int main()
{
  int n;
  cin >> n;

  char suit;
  int number;
  int cards[4][13] = {{0}};
  for (int i = 0; i < n; i++)
  {
    cin >> suit >> number;
    if (suit == 'S')
    {
      cards[0][number - 1] = 1;
    }
    else if (suit == 'H')
    {
      cards[1][number - 1] = 1;
    }
    else if (suit == 'C')
    {
      cards[2][number - 1] = 1;
    }
    else if (suit == 'D')
    {
      cards[3][number - 1] = 1;
    }
  }

  for (int i = 0; i < 4; i++)
  {
    if (i == 0)
    {
      suit = 'S';
    }
    else if (i == 1)
    {
      suit = 'H';
    }
    else if (i == 2)
    {
      suit = 'C';
    }
    else if (i == 3)
    {
      suit = 'D';
    }
    for (int j = 0; j < 13; j++)
    {
      if (cards[i][j] != 1)
      {
        cout << suit << " " << j + 1 << endl;
      }
    }
  }
  return 0;
}