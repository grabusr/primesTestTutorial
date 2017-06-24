//
// Created by grabusr on 24.06.17.
//

#include <gtest/gtest.h>
#include <gmock/gmock-matchers.h>
#include <OnTheFlyPrimeTable.h>
#include <PreCalculatedPrimeTable.h>
#include <limits>

namespace test
{
using namespace testing;

    TEST(TestGetNextPrime, TestNextPrimeNumberAfterZero)
    {
        //given:
        OnTheFlyPrimeTable sut;

        //when:
        const auto Result= sut.GetNextPrime(0);

        //exoected:
        EXPECT_THAT(Result,Eq(2));
    }

    TEST(TestGetNextPrime, TestNextPrimeNumberAfterMinusTwo)
    {
        OnTheFlyPrimeTable sut;
        const auto Result= sut.GetNextPrime(-2);
        EXPECT_THAT(Result,Eq(-1));
    }

    TEST(TestGetNextPrime, TestNextPrimeNumberAfterTwo)
    {
        OnTheFlyPrimeTable sut;
        const auto Result= sut.GetNextPrime(2);
       EXPECT_THAT(Result,Eq(3));
    }

    TEST(TestGetNextPrime, TestNextPrimeNumberAfterThree)
    {
        OnTheFlyPrimeTable sut;
        const auto Result= sut.GetNextPrime(3);
        EXPECT_THAT(Result,Eq(5));
    }

    TEST(TestGetNextPrime, TestNextPrimeNumberAfterTheBiggestNumberThatContainsInt)
    {
        OnTheFlyPrimeTable sut;
        const auto Result= sut.GetNextPrime(std::numeric_limits<int>::max());
        EXPECT_THAT(Result,Eq(-1));
    }

    TEST(TestGetNextPrime, TestIfNumberReturnedByNextPrimeNumberIsPrimeNumber)
    {
        OnTheFlyPrimeTable sut;
        const auto Result= sut.GetNextPrime(10);
        const auto ifPrimeNumber = sut.IsPrime(Result);
        EXPECT_THAT(ifPrimeNumber,Eq(true));
    }


} // namespace test