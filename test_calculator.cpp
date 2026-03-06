#include <gtest/gtest.h>
#include "calculator.h"

TEST(CalculatorTest, SquareRootTest) {
    EXPECT_DOUBLE_EQ(squareRoot(25), 5);
}

TEST(CalculatorTest, FactorialTest) {
    EXPECT_EQ(factorial(5), 120);
}

TEST(CalculatorTest, NaturalLogTest) {
    EXPECT_NEAR(naturalLog(1), 0, 0.001);
}

TEST(CalculatorTest, PowerTest) {
    EXPECT_DOUBLE_EQ(power(2, 3), 8);
}

TEST(CalculatorTest, NegativeSquareRootTest) {
    EXPECT_THROW(squareRoot(-4), std::invalid_argument);
}

TEST(CalculatorTest, NegativeFactorialTest) {
    EXPECT_THROW(factorial(-3), std::invalid_argument);
}

TEST(CalculatorTest, InvalidLogTest) {
    EXPECT_THROW(naturalLog(0), std::invalid_argument);
}

int main(int argc, char **argv) {
    testing::InitGoogleTest(&argc, argv);
    return RUN_ALL_TESTS();
}
