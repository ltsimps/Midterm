#pragma once
#include <Sentiment.hpp>
#include <iostream>
#include <fstream>
#include <string>
#include <vector>
#include <set>

using std::cin;
using std::string;


class NegativeSentiment:public Sentiment {
public:
std::string analysis(std::map<std::string, int> histogram) override;
void loadWordlist() override;

private:

};
