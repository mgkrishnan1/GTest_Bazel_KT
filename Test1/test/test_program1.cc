#include "gtest/gtest.h"
#include "lib/function1.h"

TEST(AdditionTest, Test1) {
  EXPECT_EQ(addition(1,4), 5);
}