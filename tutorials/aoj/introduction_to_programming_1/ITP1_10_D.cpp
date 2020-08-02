#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;

int main()
{
  int n, x[100], y[100];
  cin >> n;
  for (int i = 0; i < n; i++)
  {
    cin >> x[i];
  }
  for (int i = 0; i < n; i++)
  {
    cin >> y[i];
  }

  double manhattan = 0;
  double euclidean = 0;
  double mincowski_3 = 0;
  double mincowski_inf = 0;
  for (int i = 0; i < n; i++)
  {
    double d = abs(x[i] - y[i]);
    manhattan += d;
    euclidean += pow(d, 2);
    mincowski_3 += pow(d, 3);
    if (d > mincowski_inf)
    {
      mincowski_inf = d;
    }
  }

  cout << fixed << setprecision(10);
  cout << manhattan << endl;

  euclidean = pow(euclidean, (double)1 / 2);
  cout << euclidean << endl;

  mincowski_3 = pow(mincowski_3, (double)1 / 3);
  cout << mincowski_3 << endl;

  cout << mincowski_inf << endl;
}