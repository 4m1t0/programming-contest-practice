#include <iostream>
using namespace std;

int main()
{
  int n;
  cin >> n;

  int tenants[4][3][10] = {{{0}}};
  int building, floor, room, persons;
  for (int i = 0; i < n; i++)
  {
    cin >> building >> floor >> room >> persons;
    tenants[building - 1][floor - 1][room - 1] += persons;
  }

  for (int i = 0; i < 4; i++)
  {
    for (int j = 0; j < 3; j++)
    {
      for (int k = 0; k < 10; k++)
      {
        cout << " " << tenants[i][j][k];
        if (k == 9)
        {
          cout << endl;
        }
      }
    }
    if (i != 3)
    {
      cout << "####################" << endl;
    }
  }

  return 0;
}