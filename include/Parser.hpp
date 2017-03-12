#pragma once
#include <iostream>
#include <string>
#include <map>
#include <vector>

/**
 *
 *  @copyright GNU Public License.
 *  @file      Parser.hpp
 *  @brief     Parser Class Definition. Class designed to process user input.
 *  @author    Lamar Simpson ( https://github.com/ltsimps )
 *  @date      02/20/2017
 *
 */

class Parser {
 public:
  Parser();

  std::vector<std::string> getInput();
  std::vector<std::string> getFileInput();
  std::map<std::string, int> generateHistogram(std::vector<std::string> input);
  std::string stringConversion(std::vector<std::string> input);
  //std::string stringConversion(std::map<std::string, int> input);



  void setInput(std::string input);


 private:
  std::string input;
};
