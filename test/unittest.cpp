#include <gtest/gtest.h>
#include <cmath>
#include "../src/extends/sum.h"
#include "../src/extends/dod.h"
#include "../src/extends/var.h"

using namespace nsDod;
using namespace nsSum;
using namespace nsVar;

TEST(TESTS, test1)
{
  double res, arctan;
  s = 0;
  x = -10;
  e = 0.001;
  int n = 0;

  sum();
  res = round(s / e) * e;

  arctan = round(atan(x) / e) * e;

  EXPECT_EQ(res, arctan);
}