#include <iostream>
#include <math.h>
#include <iomanip>

#include "./extends/dod.h"
#include "./extends/sum.h"
#include "./extends/var.h"

using namespace std;
using namespace nsDod;
using namespace nsSum;
using namespace nsVar;

int main()
{
  cout << "x_p = ";
  cin >> x_p;
  cout << "x_k = ";
  cin >> x_k;
  cout << "dx =";
  cin >> dx;
  cout << "e =";
  cin >> e;
  cout << endl;
  x = x_p;
  while (x <= x_k)
  {
    sum();
    cout << x << " " << s << " ";
    x += dx;
  }
  cout << endl;
  cin.get();
  return 0;
}