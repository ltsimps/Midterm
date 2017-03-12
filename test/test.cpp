#include <gtest/gtest.h>
#include  <Parser.hpp>

TEST(dummy, should_pass)
{
    EXPECT_EQ(1, 1);
}



TEST(input, inputNonzero)
{
  Parser  p;

    EXPECT_GT( p.getInput().size(), 0);
}
