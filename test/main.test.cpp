#include <gtest/gtest.h>

TEST(MainTests, DemonstrateBooleans) {
    EXPECT_TRUE(true);
    EXPECT_FALSE(false);
}

TEST(MainTests, DemonstrateEquals) {
    EXPECT_EQ(12, 12);
    EXPECT_EQ(1, 2);
}
 