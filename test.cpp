

#include "rectangle.hpp"

#include "gtest/gtest.h"


TEST(Area, AreaFailure)
{
    Rectangle rect1(-2, 10);
    Rectangle rect2(5, -6);
    Rectangle rect3(0.5, 10);
    EXPECT_EQ(20, rect1.area());
    EXPECT_EQ(30, rect2.area());
    EXPECT_EQ(5, rect3.area());
}
// YOOOOOOOOOOOOOOOOOOOOOOOOOOOO
TEST(Perimeter, PerimeterFailure)
{
    Rectangle rect1(-1, -5);
    Rectangle rect2(5, -5);
    Rectangle rect3(0.25, 20);
    EXPECT_EQ(12, rect1.perimeter());
    EXPECT_EQ(20, rect2.perimeter());
    EXPECT_EQ(40.50, rect3.perimeter());
}


int main(int argc, char** argv) {
    ::testing::InitGoogleTest(&argc, argv);
    return RUN_ALL_TESTS();
}

