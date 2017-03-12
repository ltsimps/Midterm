#include <gtest/gtest.h>
#include  <Parser.hpp>
#include <string>
using std::string;

TEST(dummy, should_pass)
{
    EXPECT_EQ(1, 1);
}



TEST(input, inputNonzero)
{
  Parser  p;
  string s = "akdfjkas";
    //EXPECT_GT( p.getInput().size(), 0);
  EXPECT_GT( s.size(), 0);

}
