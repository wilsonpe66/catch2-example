#include "fact.h"

unsigned factorial(unsigned n) noexcept {
  unsigned ret = 1;
  for (; n; ret *= n--)
    continue;
  return ret;
}
