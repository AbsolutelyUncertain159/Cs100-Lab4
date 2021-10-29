#include "rectangle.hpp"
#include "gtest/gtest.h"

    TEST(AreaTest, functionalityTest)
    {
        Rectangle r1;

        r1.set_width(5);
        r1.set_height(6);

        int finalArea = r1.area();

        EXPECT_EQ(30, finalArea);
    }



    TEST(AreaTest, defaultTestArea)
    {
        Rectangle r1;

        r1.set_width(1);
        r1.set_height(1);

        int finalArea = r1.area();

        EXPECT_EQ(1, finalArea);
    }


    TEST(AreaTest, multipleRectangles)
    {
        Rectangle r1, r2, r3;

        r1.set_width(5);
        r1.set_height(6);
        r2.set_width(8);
        r2.set_height(2);
        r3.set_width(12);
        r3.set_height(10);

        int finalArea1 = r1.area();
        int finalArea2 = r2.area();
        int finalArea3 = r3.area();


        EXPECT_EQ(30, finalArea1);
        EXPECT_EQ(16, finalArea2);
        EXPECT_EQ(120, finalArea3);
    }

    TEST(ConstructorTest, defaultTest)
    {
        Rectangle r1;

        int finalArea = r1.area();

        EXPECT_EQ(1, finalArea);
    }

    TEST(ConstructorTest, usingOneDefault)
    {
        Rectangle r1;

        r1.set_width(5);

        int finalArea = r1.area();

        EXPECT_EQ(5, finalArea);
    }

    TEST(ConstructorTest, usingTwoDefaults)
    {
        Rectangle r1, r2;

        r1.set_width(5);
        r2.set_height(7);
        int finalArea1 = r1.area();
        int finalArea2 = r2.area();
        EXPECT_EQ(5, finalArea1);
        EXPECT_EQ(7, finalArea2);
    }


    TEST(PerimeterTest, defaultPerim)
    {
        Rectangle r1;

        int finalPerim = r1.perimeter();

        EXPECT_EQ(4, finalPerim);
    }

    TEST(PerimeterTest, nonExistentRect)
    {
        Rectangle r1;

        r1.set_width(0);
        r1.set_height(0);

        int finalPerim = r1.perimeter();

        EXPECT_EQ(0, finalPerim);
    }

    TEST(PerimeterTest, perimTest)
    {
        Rectangle r1;

        r1.set_width(7);
        r1.set_height(6);

        int finalPerim = r1.perimeter();

        EXPECT_EQ(26, finalPerim);
    }

    int main(int argc, char** argv)
    {
        ::testing::InitGoogleTest(&argc, argv);
        return RUN_ALL_TESTS();
    }
