#pragma once
#include <string>
#include <set>

/**
 * @file   Sentitment.cpp
 * @date   Mar 13, 2017
 * @author Lamar Simpson
 *@brief Class that analyzes text and returns perceived sentiment.
 *Copyright 2017 Lamar Simpson
 */

class Sentiment{
public:
    std::string analysis();
  virtual void loadWordlist();
  void setEmotionScore(int emotionScore);
  void setWordlist(std::set<std::string> wordlist);

  int getEmotionScore() const;
  std::set<std::string> getWordlist() const;


protected:
  int emotionScore;
  enum Emotions {Positive = 1, Negative = -1 };
  enum color {Blue = 1, Red = -1};
  std::set<std::string>wordlist;

};
