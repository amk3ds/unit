#include "gtest/gtest.h"
#include "Power.h"

TEST(SquareTest, test1) 
{
    EXPECT_EQ (Power::square (2),  4);
}

TEST(CubeTest, test2) 
{
    EXPECT_EQ (Power::cube (2),  8);
}