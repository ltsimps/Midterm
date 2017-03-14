#include <string>
#include <set>

/**
 * @file   Sentitment.cpp
 * @date   Feb 20, 2017
 * @author Lamar Simpson
 *@brief Class that analyzes text and returns perceived sentiment.
 *Copyright 2017 Lamar Simpson
 */
;
class Sentiment{

public:

  Sentiment();
  std::string analysis();
  enum returnEmotion(int score);


protected:
  int emotionScore;
  enum Emotions{"Positive", "Negative" };

  std::set<string>wordlist;
};

