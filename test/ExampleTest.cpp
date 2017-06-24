//
// Created by grabusr on 24.06.17.
//

#include <gtest/gtest.h>
#include <gmock/gmock.h>
#include <OnTheFlyPrimeTable.h>
#include <PreCalculatedPrimeTable.h>

#include <ostream>

std::ostream& operator<<(std::ostream& stream, const primesPair& value){
    stream<<"Small: "<<value.small<<" Big: "<<value.big;
    return stream;
}

namespace test {
    using namespace testing;
    class OnTheFlyPrimeTableTest : public ::testing::Test {

    };

    MATCHER_P(PrimePairEq, pairExpected, ""){
        return arg.small==pairExpected.small
                && arg.big==pairExpected.big;
    }

    TEST_F(OnTheFlyPrimeTableTest, PrimeTableGivesNearestSmallerPrimesAndNearestGreaterPrime) {
        //given:
        OnTheFlyPrimeTable sut;
        constexpr primesPair expectedPrimesPair = {7,11};
        //when:
        const auto result = sut.GetSmallerAndGreaterPrimes(10);
        //expected:
        EXPECT_THAT(result, PrimePairEq(expectedPrimesPair));
    }
} // namespace test