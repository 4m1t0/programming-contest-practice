#include <iostream>
using namespace std;

int main()
{
  int W, H, x, y, r;
  cin >> W >> H >> x >> y >> r;

  if (x + r > W || x < r || y + r > H || y < r)
  {
    cout << "No" << endl;
  }
  else
  {
    cout << "Yes" << endl;
  }

  return 0;
}