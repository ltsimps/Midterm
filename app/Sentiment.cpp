#include <Sentiment.hpp>
#include <iostream>
#include <string>

using std::string;

 int Sentiment::getEmotionScore() const  {
    return emotionScore;
  }

  void Sentiment::setEmotionScore(int emotionScore) {
    this->emotionScore = emotionScore;
  }

  std::set<std::string> Sentiment::getWordlist() const {
    return wordlist;
  }

  void Sentiment::setWordlist(std::set<std::string> wordlist) {
    this->wordlist = wordlist;
    std::cout <<"word list set "<<std::endl;
  }


   void Sentiment::loadWordlist()  {

    std::cout<<"Base class word list "<<std::endl;

  }

   std::string Sentiment::analysis(std::map<std::string, int> histogram){

     for (const auto & p : histogram)
     {
         std::cout << "Word '" << p.first << "' occurs " << p.second << " times.\n";
     }


        return " ";
      }

