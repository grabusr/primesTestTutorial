//
// Created by grabusr on 24.06.17.
//

#include <gtest/gtest.h>
#include <gmock/gmock.h>
#include <OnTheFlyPrimeTable.h>
#include <PreCalculatedPrimeTable.h>

#include <ostream>

std::ostream& operator<<(std::ostream& stream, const primesPair& value)
{
    stream << "Small: " << value.small << "\t";
    stream << "Big: " << value.big;

    return stream;

}  


namespace test
{
    class OnTheFlyPrimeTable: public ::testing::Test
    {

    };

    MATCHER_P(PrimePairEq, expected, "")
    {
        return arg.small == expected.small
                && arg.big == expected.big;
    }
TEST(OnTheFlyPrimeTable, SuccedTest)
{
    OnTheFlyPrimeTable sut;
    constexpr primesPair expectedPrimesPair = {7, 11};

    const auto result = sut.GetSmallAndGreaterPrimes(10);

    EXPECT_THAT(result, PrimePairEq(expectedPrimesPair));
}



} // namespace test