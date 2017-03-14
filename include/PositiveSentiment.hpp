#include <Sentiment.hpp>

class PositiveSentiment:public Sentiment {
public:
  std::string analysis();
  void loadWordlist() override;

private:

};
