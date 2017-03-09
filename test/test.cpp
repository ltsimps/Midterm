#include <gtest/gtest.h>
#include "lib.hpp"

TEST(dummy, should_pass)
{
    EXPECT_EQ(1, 1);
}

TEST(testfunction, should_pass)
{
    EXPECT_GT(testfunction(), 0 );

}
