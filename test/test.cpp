/**
 * @file   tets.cpp
 * @date   Mar 09, 2017
 * @author Lamar Simpson
 * copyright 2017 Lamar Simpson
 *@brief Test file for Metis Program.
 */

#include <gtest/gtest.h>
#include <map>
#include <vector>
#include <iostream>
#include<fstream>
#include <string>
#include <set>

#include<PositiveSentiment.hpp>
#include <NegativeSentiment.hpp>
#include  <Parser.hpp>

using std::string;



/**
 * @brief Test the input function on file input to make sure it returns nonzero values when reading files
 */

TEST(input, inputNonzero) {
Parser  p;
std::vector<string> testInput;
testInput = p.getFileInput("../Positive_Examples/Positive_Example_1.txt");
EXPECT_GT(testInput.size(), 0);
}

/**
 * @brief Test the histogram function to make sure it returns words and frequencies.
 *
 */
TEST(input, histogram) {
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

  std::map<string , int > testMap = p.generateHistogram(words);
  EXPECT_EQ(testMap["GUESS"] , 2);
  EXPECT_EQ(testMap["HANGMAN"] , 1);
  EXPECT_EQ(testMap["DIFFICULT"] , 1);
  EXPECT_EQ(testMap["TOM"] , 1);
  EXPECT_EQ(testMap["JOB"] , 1);
  EXPECT_EQ(testMap["HELLO"] , 3);
}

TEST(file_test, NegLoadWordlist) {
  NegativeSentiment ns;
  Sentiment *sp;
  sp = &ns;
  sp->loadWordlist();

  EXPECT_GT(sp->getWordlist().size(), 0);
}

TEST(file_test, posLoadWordlist) {
  PositiveSentiment ps;
  Sentiment *sp;
  sp = &ps;
  sp->loadWordlist();

  EXPECT_GT(sp->getWordlist().size(), 0);
}




