#include "../src/closest_pair_tonum.h"
#include "gtest/gtest.h"

TEST(ClosestPairTest, ValidPairs) {
    
    auto result1 = closest_pair_tonum(10);
    EXPECT_EQ(result1.first, 5);
    EXPECT_EQ(result1.second, 4);
    
    auto result2 = closest_pair_tonum(30);
    EXPECT_EQ(result2.first, 29);
    EXPECT_EQ(result2.second, 20);

    auto result3 = closest_pair_tonum(50);
    EXPECT_EQ(result3.first, 45);
    EXPECT_EQ(result3.second, 36);
}

TEST(ClosestPairTest, SmallNumbers) {
    
    auto result1 = closest_pair_tonum(5);
    EXPECT_EQ(result1.first, 0);
    EXPECT_EQ(result1.second, 0);
    
    auto result2 = closest_pair_tonum(3);
    EXPECT_EQ(result2.first, 0);
    EXPECT_EQ(result2.second, 0);
    
    auto result3 = closest_pair_tonum(4);
    EXPECT_EQ(result3.first, 0);
    EXPECT_EQ(result3.second, 0);
}
