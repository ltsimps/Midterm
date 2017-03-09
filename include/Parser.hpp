#pragma once

#include<iostream>
#include<string>

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
  void getInput();

 private:
  std::string input;
};
