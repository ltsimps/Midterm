/**
 * @file   Parser.cpp
 * @date   Mar 11, 2017
 * @author Lamar Simpson
 * Copyright 2017 Lamar Simpson
 *@brief Class that handles all input and parses it out into a format that Semantics class can use.
 **@details implementation of Parser class.
 */
#include <Parser.hpp>
#include <vector>
#include <string>
#include <iostream>
#include <algorithm>
#include <sstream>
#include <iterator>
#include<fstream>


using std::cin;
using std::string;

Parser::Parser() {
  this->input = "";
}



void Parser::setInput(std::string input) {
this->input = input;
}

 /**
  * @brief  stringCoversion takes an input vector and returns string output
  * @param  input  std::vector<std::string>
  * @return string
*/
std::string Parser::stringConversion(std::vector<std::string> input) {
std::ostringstream oss;

if(!input.empty()) {
std::copy(input.begin(), input.end(),
std::ostream_iterator<string>(oss, " "));
}
  return oss.str();
}


  /**
   * @brief Handles getting input from File exemplars or user specified files.
   * @return std::vector<std::string> that contains all input from files specified by the user or file exemplars.
  */

std::vector<std::string> Parser::getInput() {
  string line;
  std::vector<string> file;

  while ( getline(cin, line) ) {
       if (line.empty())
          break;
       file.push_back(line);
  }

  return file;
}


/**
   * @brief Handles getting input from File exemplars or user specified files.
   * @return std::vector<std::string> that contains all input from files specified by the user or file exemplars.
  */
std::vector<std::string> Parser::getFileInput() {
  std::ifstream inputFile{"../Positive_Examples/Positive_Example_1.txt"};

  std::vector<string> file;


  // test file open
  if (inputFile) {
      string value;

      // read the elements in the file into a vector
      while ( inputFile >> value ) {
          file.push_back(value);
      }
  }
  // close the file


  return file;
}



  /**
   * @brief  generateHistogram takes a input vector and counts the frequency of words in that input and return a map
   * @param  input  std::vector<std::string>
   * @return map<std::string, int>
   */
std::map<string, int> Parser::generateHistogram(std::vector<string> input) {
std::map<string, int> histogram;

  for (const string & s : input) { ++histogram[s]; }

/*
  for (const auto & p : histogram)
  {
      std::cout << "Word '" << p.first << "' occurs " << p.second << " times.\n";
  }
  */

  return histogram;
}


