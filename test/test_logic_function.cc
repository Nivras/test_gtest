#include "src/logic_function.h"
#include "googletest/include/gtest/gtest.h"

TEST(test1, just_add) {
  EXPECT_EQ(3, just_add(1, 2));
}

TEST(test2, just_multi) {
  EXPECT_EQ(6, just_multi(2, 3));
}

GTEST_API_ int main(int argc, char** argv) {
  testing::InitGoogleTest(&argc, argv);
  return RUN_ALL_TESTS();
}