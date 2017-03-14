#include <iostream>
#include<PositiveSentiment.hpp>
#include<fstream>
#include <string>
#include <vector>
#include <set>

using std::cin;
using std::string;



 void PositiveSentiment::loadWordlist()  {
    std::cout<<" testing PositiveSentiment loadWordList" <<std::endl;

    std::ifstream inputFile{"../positive_words.txt"};

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
