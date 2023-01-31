#include <gtest/gtest.h>
#include <libA.hpp>

using namespace std;

TEST(libA, simpleTest) {
int res = cmake_template::libA::getNumber();
EXPECT_TRUE(res == 1);
}

TEST(DISABLED_libA, simpleTest) {
int res = cmake_template::libA::getNumber();
EXPECT_TRUE(res == 1);
}