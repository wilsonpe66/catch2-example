#define CATCH_CONFIG_MAIN
#include "../../vendors/Catch2/single_include/catch2/catch.hpp"
#include "../main/fact.h"

TEST_CASE("factorials are computed", "[factorial]") {
  REQUIRE(factorial(1) == 1);
  REQUIRE(factorial(2) == 2);
  REQUIRE(factorial(3) == 6);
  REQUIRE(factorial(10) == 3628800);
}
