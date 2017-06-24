//
// Created by grabusr on 24.06.17.
//

#include <gtest/gtest.h>
#include <gmock/gmock.h>
#include <OnTheFlyPrimeTable.h>
#include <PreCalculatedPrimeTable.h>
#include <ostream>


std::ostream& operator <<(std::ostream& stream, const primesPair& value)
{
    stream<<"\nSmall: "<<value.small;
    stream<<"\tBig: "<<value.big;
    return stream;
}



namespace test
{
    using namespace testing;


    MATCHER_P(PrimePairEq, expected,"")
    {
        return arg.small == expected.small && arg.big == expected.big;
    }


    class OnTheFlyPrimeTableTest : public ::testing::Test
    {

    };

    TEST(OnTheFlyPrimeTableTest, PrimeTableGivesNearestSmallerPrimeAndNearestGreaterPrime)
    {
        //given
        OnTheFlyPrimeTable sut;
        const primesPair expected_result(7, 11);
        //when
        const auto result = sut.GetSmallerAndGreaterPrimes(10);

        //expected
        EXPECT_THAT(result, PrimePairEq(expected_result));


    }


} // namespace test