#pragma once

#ifndef _SUM_
#define _SUM_

#include <cmath>
#include "dod.h"
#include "sum.h"
#include "var.h"

using namespace nsDod;
using namespace nsVar;

void nsSum::sum()
{
  n = 0;
  a = pow(-1, n + 1) / ((2 * n + 1) * pow(x, 2 * n + 1));;
  s = (-M_PI / 2) + a;

  do
  {
    n++;
    dod();
    s += a;
  } while (abs(a) >= e);
}

#endif // !_SUM_H_