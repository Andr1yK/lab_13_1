#pragma once

#ifndef _DOD_
#define _DOD_

#include "dod.h"
#include "var.h"
#include "math.h"


using namespace nsVar;

void nsDod::dod()
{
  a *= -1 * (2 * n - 1) / (x * x * (2 * n + 1));
}

#endif // !_DOD_
