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

int main() {
  Parser  p;
  PositiveSentiment ps;
  NegativeSentiment ns;

  Sentiment *sp;
  sp = &ps;

  std::vector<string> vectorOutput = p.getFileInput();
  string strOutput = p.stringConversion(vectorOutput);

  cout<< strOutput << endl;
  std::map<string, int> histogram =  p.generateHistogram(vectorOutput);


  cout << "\033[1;31mbold red text\033[0m\n";


 sp->loadWordlist();
 sp->analysis(histogram);
 int positiveScore = sp->getEmotionScore();

 sp  = &ns;
 sp->loadWordlist();
 sp->analysis(histogram);
 int negativeScore = sp->getEmotionScore();


 (positiveScore > negativeScore)?std::cout<<"POSITIVE":std::cout<<"NEGATIVE"<std::endl;





  return 0;
}
