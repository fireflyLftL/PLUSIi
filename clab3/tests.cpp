#include "clab3.h"
#include <catch2/catch_all.hpp>

TEST_CASE("Проверка") {
    REQUIRE(newton(1.0) == 1.41);
}

TEST_CASE("Проверка0") {
    REQUIRE(newton(5.0) > 1);
}

TEST_CASE("Проверка1") {
    REQUIRE(newton(-7.0) < -10);
}