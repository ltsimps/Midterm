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
