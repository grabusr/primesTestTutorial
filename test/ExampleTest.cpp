//
// Created by grabusr on 24.06.17.
//

#include <gtest/gtest.h>

#include <OnTheFlyPrimeTable.h>
#include <PreCalculatedPrimeTable.h>
#include <gmock/gmock-matchers.h>
#include <gmock/gmock-generated-matchers.h>


#include <ostream>

std::ostream& operator << (std::ostream& stream, const primesPair& value)
{
    stream << "Small: " << value.small << "\t";
    stream << "Big: " << value.big;

    return stream;
}


namespace test
{

    using namespace testing;

    class OnTheFlyPrimeTableTest : public ::testing::Test {

    };

    MATCHER_P(PrimePairEq, expected, "")
    {
        return arg.small == expected.small && arg.big == expected.big;
    }

    TEST_F(OnTheFlyPrimeTableTest, PrimeTableGivesNearestSmallerPrimeAndNearestGreaterPrime) {

        // given:
        OnTheFlyPrimeTable sut;
        constexpr primesPair expectedPrimesPair = {7, 11};

        // when:
        const auto result = sut.GetSmallerAndGreaterPrimes(10);

        //expected:
        EXPECT_THAT(result, PrimePairEq(expectedPrimesPair));
    }
} // namespace test