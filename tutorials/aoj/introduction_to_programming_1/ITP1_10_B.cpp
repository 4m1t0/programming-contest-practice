#include <iostream>
#include <iomanip>
#include <math.h>
#define PI 3.14159265359
using namespace std;

int main()
{
  int a, b, c;
  cin >> a >> b >> c;

  cout << fixed << setprecision(15);

  double S = (a * b * sin(PI * c / 180)) / 2;
  cout << S << endl;

  double L = a + b + sqrt(pow(a, 2) + pow(b, 2) - 2 * a * b * cos(PI * c / 180));
  cout << L << endl;

  double h = b * sin(PI * c / 180);
  cout << h << endl;

  return 0;
}