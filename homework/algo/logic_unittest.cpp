#include "include/logic.h"
#include <gtest/gtest.h>

TEST(FibTests, PositiveNat)
{
    EXPECT_EQ(5, fibbonacci(5));
    EXPECT_EQ(55, fibbonacci(10));
    EXPECT_EQ(0, fibbonacci(1000));
}

TEST(PrimeTests, PositiveNat)
{
    EXPECT_EQ(0, is_prime(10));
    EXPECT_EQ(1, is_prime(3));
}

TEST(FactorialTests, PostiveNat)
{
    EXPECT_EQ(120, factorial(5));
    EXPECT_EQ(6, factorial(3));
    EXPECT_EQ(0, factorial(100));
}

TEST(ReverseTests, Nat)
{
    EXPECT_EQ(123, reverse(321));
    EXPECT_EQ(0, reverse(-123));
}
