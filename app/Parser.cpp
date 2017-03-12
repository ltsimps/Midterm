/**
 * @file   Parser.cpp
 * @date   Mar 11, 2017
 * @author Lamar Simpson
 * Copyright 2017 Lamar Simpson
 *@brief Class that handles all input and parses it out into a format that Semantics class can use.
 **@details implementation of PID_CONTROLLER class.
 */
#include <Parser.hpp>
#include <vector>
#include <string>
#include <iostream>

#include <algorithm>
#include <sstream>
#include <iterator>


using std::cin;
using std::string;

 Parser::Parser(){

 }


 void Parser::setInput(std::string input) {
  this->input = input;
}


std::string Parser::getInput() {

  string line;
  std::vector<string> file;

   while(getline(cin,line))
   {
       if (line.empty())
          break;
       file.push_back(line);
   }
   std::ostringstream oss;

   if (!file.empty())
   {
     // Convert all but the last element to avoid a trailing ","
     std::copy(file.begin(), file.end(),
               std::ostream_iterator<string>(oss, " "));

     // Now add the last element with no delimiter
    // oss << vec.back();
   }




  //return  std::string::str(file.begin(), file.end());
   return oss.str();
}