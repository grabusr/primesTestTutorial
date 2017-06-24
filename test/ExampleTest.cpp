//
// Created by grabusr on 24.06.17.
//

#include <gtest/gtest.h>

#include <OnTheFlyPrimeTable.h>
#include <PreCalculatedPrimeTable.h>

namespace test
{

TEST(ExampleTestSuite, SuccedTest)
{
    OnTheFlyPrimeTable table;
    SUCCEED();
}

TEST(ExampleTestSuite, FailingTest)
{
    PreCalculatedPrimeTable sut(100);
    FAIL();
}

} // namespace test