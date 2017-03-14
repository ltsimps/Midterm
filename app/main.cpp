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
#include <map>
#include <memory>
#include <Parser.hpp>
#include <Sentiment.hpp>
#include <PositiveSentiment.hpp>
#include <NegativeSentiment.hpp>

using std::string;
using std::cout;
using std::cin;
using std::endl;

/**
  * @brief continueProgram is a helper function that allows the user to continue with the application
  * @return boolean value denoting the user's desire to continue the program.
 */

bool continueProgram() {
  char response = 'n';
  std::cout << "Enter y or Y if you wish to continue " << std::endl;
  std::cin >> response;

  if (response == 'y'  || response == 'Y')
    return true;

  return false;
}

std::string demo() {
  string response = "";

std::cout << "For file processing enter the word file otherwise input will"
      "come from the command line" << std::endl;
  std::cin >> response;

return response;
}

int main() {
  Parser  p;
  PositiveSentiment ps;
  NegativeSentiment ns;
  Sentiment *sp;
  sp = &ps;
  std::vector<string> vectorOutput;
  string path = " ";
  string response =  "Y";
  string strOutput = " ";
  std::map<string, int> histogram;

  // while (response == "Y" ||  response == "y") {


 /*
  if(demo() != "file") {
   std::cout <<"Please Enter text to be analyzed " << std::endl;
   vectorOutput = p.getInput();

  }else {
   vectorOutput = p.getFileInput("../Positive_Examples/Positive_Example_1.txt");


  } */
  std::cout << "Enter Text to be analyzed. ";
  std::cout << "Press enter when done on the next line." << std::endl;
  vectorOutput =  p.getInput();


  strOutput = p.stringConversion(vectorOutput);
  cout<< "INPUT Below \n" << strOutput << endl;
  histogram =  p.generateHistogram(vectorOutput);


sp->loadWordlist();
sp->analysis(histogram);
int positiveScore = sp->getEmotionScore();

sp  = &ns;
sp->loadWordlist();
sp->analysis(histogram);
int negativeScore = sp->getEmotionScore();

(positiveScore >= negativeScore)?std::cout << "\033[1;34mPOSITIVE\033[0m\n"
     << std::endl : std::cout << "\033[1;31mNEGATIVE\033[0m\n" << std::endl;

std::cout << "Enter y or Y if you wish to continue " << std::endl;
std::cin >> response;

// }


  return 0;
}
