//
// Created by grabusr on 24.06.17.
//

#include <gtest/gtest.h>
#include <gmock/gmock.h>
#include <ostream>

#include "OnTheFlyPrimeTable.h"
#include <PreCalculatedPrimeTable.h>

using namespace testing;

std::ostream& operator << (std::ostream& stream, const PrimesPair& givenPair) {
    stream << "Small: " << givenPair.small <<"\t";
    stream << "Big: " << givenPair.big;

    return stream;
}

namespace test
{
    MATCHER_P(PrimePairEq, givenPair, "") {
        return arg.small == givenPair.small
                && arg.big == givenPair.big;
    }

    class OnTheFlyPrimeTableTest : public ::testing::Test {

    };


    TEST_F(OnTheFlyPrimeTableTest, PrimeTableGivesNearestSmallerPrimeAndNearestGreaterPrime) {
        //given:
        OnTheFlyPrimeTable sut;
        constexpr PrimesPair expectedPrimesPair = {7, 11};

        //when:
        const auto result = sut.GetSmallerAndGreaterPrimes(10);

        //expected:
        EXPECT_THAT(result, PrimePairEq(expectedPrimesPair));
    }
} // namespace test