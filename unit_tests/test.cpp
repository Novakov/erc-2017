#include "gtest/gtest.h"
#include "gmock/gmock.h"

using testing::Eq;

TEST(MyTest, TestCase1)
{
    ASSERT_THAT(1 + 1, Eq(2));
}