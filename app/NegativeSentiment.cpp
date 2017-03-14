#include <NegativeSentiment.hpp>

void NegativeSentiment::loadWordlist()  {
    std::cout<<" testing  Negative loadWordList" <<std::endl;

    std::ifstream inputFile{"../negative_words.txt"};

    std::set<string> wordlist;


    // test file open
    if (inputFile) {
        string value;

        // read the elements in the file into a vector
        while ( inputFile >> value ) {
            wordlist.insert(value);
        }
    }
    // close the file
    for(auto token : wordlist){
      std::cout<< token << std::endl;
    }

    setWordlist(wordlist);
 }




std::string NegativeSentiment::analysis( std::map<string, int> histogram){
     int score = 1;



      for (const auto & p : histogram)
      {
          //std::cout << "Word '" << p.first << "' occurs " << p.second << " times.\n";
          if(wordlist.find(p.first) != wordlist.end() ){
            std::cout << " set contains " <<p.first <<  " " <<p.second <<std::endl;
            score +=p.second;

            std::cout << "Score " <<score <<std::endl;

          }
      }

    setEmotionScore(score);

  return " ";
}
