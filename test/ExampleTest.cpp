//
// Created by grabusr on 24.06.17.
//

#include <gtest/gtest.h>

#include <OnTheFlyPrimeTable.h>
#include <PreCalculatedPrimeTable.h>
#include <gmock/gmock-matchers.h>

using ::testing::Eq;

namespace test
{

TEST(OnTheFlyPrimeTable, ReturnsValidNextPrime)
{
    OnTheFlyPrimeTable sut;
    const auto result = sut.GetNextPrime(5);

    EXPECT_THAT(result, Eq(7));
}

TEST(OnTheFlyPrimeTable, ReturnsMinusOneWhenNumberIsNegative)
{
    OnTheFlyPrimeTable sut;
    const auto result = sut.GetNextPrime(-5);

    EXPECT_THAT(result, Eq(-1));
}

} // namespace test