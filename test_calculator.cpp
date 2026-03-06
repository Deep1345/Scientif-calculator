#include <gtest/gtest.h>
#include "calculator.h"

TEST(CalculatorTest, SquareRootTest) {
    EXPECT_EQ(squareRoot(25),5);
}

TEST(CalculatorTest, FactorialTest) {
    EXPECT_EQ(factorial(5),120);
}

TEST(CalculatorTest, LogTest) {
    EXPECT_NEAR(naturalLog(1),0,0.001);
}

TEST(CalculatorTest, PowerTest) {
    EXPECT_EQ(power(2,3),8);
}

int main(int argc,char **argv){
    testing::InitGoogleTest(&argc,argv);
    return RUN_ALL_TESTS();
}
