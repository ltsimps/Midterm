#include <gtest/gtest.h>
#include  <Parser.hpp>
#include <string>
#include <map>
#include <vector>
using std::string;

TEST(dummy, should_pass)
{
    EXPECT_EQ(1, 1);
}

/**
 * @brief Test the input function on file input to make sure it returns nonzero values when reading files
 */

TEST(input, inputNonzero)
{
  Parser  p;
  std::vector<string> testInput = p.getFileInput();
  EXPECT_GT( testInput.size(), 0);

}

/**
 * @brief Test the histogram function to make sure it returns words and frequencies.
 *
 */
TEST(input, histogram)
{
  Parser  p;
  std::vector<string> words;
  words.push_back("GUESS");
  words.push_back("HANGMAN");
  words.push_back("DIFFICULT");
  words.push_back("TOM");
  words.push_back("JOB");
  words.push_back("HELLO");
  words.push_back("HELLO");
  words.push_back("HELLO");
  words.push_back("GUESS");

  std::map<string ,int > testMap = p.generateHistogram(words);
  EXPECT_EQ(testMap["GUESS"] , 2);
  EXPECT_EQ(testMap["HANGMAN"] , 1);
  EXPECT_EQ(testMap["DIFFICULT"] , 1);
  EXPECT_EQ(testMap["TOM"] , 1);
  EXPECT_EQ(testMap["JOB"] , 1);
  EXPECT_EQ(testMap["HELLO"] , 3);
}
