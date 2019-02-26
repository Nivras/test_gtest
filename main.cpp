#include <iostream>

#include "./googletest/include/gtest/gtest.h"

int add(int a, int b) {
  return a + b;
}

TEST(test1, c1) {
  EXPECT_EQ(3, add(1, 2));
}

TEST(test2, c2) {
  EXPECT_NE(3, add(1, 3));
}

GTEST_API_ int main(int argc, char** argv) {
  testing::InitGoogleTest(&argc, argv);
  return RUN_ALL_TESTS();
}
