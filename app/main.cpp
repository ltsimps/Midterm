/**
 * @file   main.cpp
 * @date   Mar 09, 2017
 * @author Lamar Simpson
 * copyright 2017 Lamar Simpson
 *@brief Parsed input from the user.
 */

#include <iostream>
#include <fstream>
#include <vector>
#include <string>
#include  <Parser.hpp>

using std::string;
using std::cout;
using std::cin;
using std::endl;

int main() {
  Parser  p;
  // cout<<  p.getInput()<<endl;
  std::vector<string> vectorOutput = p.getFileInput();
  string strOutput = p.stringConversion(vectorOutput);
  cout<< strOutput << endl;
  p.generateHistogram(vectorOutput);

  return 0;
}
