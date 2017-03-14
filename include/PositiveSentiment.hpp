#include <Sentiment.hpp>

class PositiveSentiment:public Sentiment {
public:
  std::string analysis(std::map<std::string, int> histogram) override;
  void loadWordlist() override;

private:

};
