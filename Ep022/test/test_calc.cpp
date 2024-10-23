// calculator_test.cpp
#include "calculator.h"
#include <gtest/gtest.h>

// Test fixture for Calculator
class CalculatorTest : public ::testing::Test {
protected:
    Calculator calc;
};

// Test for addition
TEST_F(CalculatorTest, AddTest) {
    EXPECT_EQ(calc.add(2, 3), 5);
    EXPECT_EQ(calc.add(-1, 1), 0);
    EXPECT_EQ(calc.add(-2, -3), -5);
}

// Test for subtraction
TEST_F(CalculatorTest, SubTest) {
    EXPECT_EQ(calc.sub(5, 3), 2);
    EXPECT_EQ(calc.sub(0, 5), -5);
    EXPECT_EQ(calc.sub(-5, -3), -2);
}

// Test for multiplication
TEST_F(CalculatorTest, MulTest) {
    EXPECT_EQ(calc.mul(2, 3), 6);
    EXPECT_EQ(calc.mul(-1, 5), -5);
    EXPECT_EQ(calc.mul(0, 10), 0);
}

// Test for division
TEST_F(CalculatorTest, DivTest) {
    EXPECT_EQ(calc.div(6, 3), 2);
    EXPECT_EQ(calc.div(-10, 2), -5);
    EXPECT_EQ(calc.div(5, 1), 5);
    // Handling division by zero
    EXPECT_THROW(calc.div(5, 0), std::runtime_error);
}

// Test for modulus
TEST_F(CalculatorTest, ModTest) {
    EXPECT_EQ(calc.mod(5, 3), 2);
    EXPECT_EQ(calc.mod(10, 2), 0);
    EXPECT_EQ(calc.mod(-10, 3), -1);
    // Handling modulus by zero
    EXPECT_THROW(calc.mod(5, 0), std::runtime_error);
}

int main(int argc, char **argv) {
    ::testing::InitGoogleTest(&argc, argv);
    return RUN_ALL_TESTS();
}

