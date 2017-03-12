#include <iostream>
#include <fstream>
#include <vector>
#include <string>

#include  <Parser.hpp>


/**
 * @file   main.cpp
 * @date   Mar 09, 2017
 * @author Lamar Simpson
 * Copyright 2017 Lamar Simpson
 *@brief Parsed input from the user.
 */
using std::string;
using std::cout;
using std::cin;
using std::endl;

int main() {
    /*ofstream myfile;
    myfile.open ("example.txt");
    myfile << "Writing this to a file.\n";
    myfile.close();*/

   Parser  p;
   //cout<<  p.getInput()<<endl;
   std::vector<string> vectorOutput = p.getFileInput();
   string strOutput = p.stringConversion(vectorOutput);
   cout<< strOutput << endl;
   p.generateHistogram(vectorOutput);


  // p.setInput("hddjfas");
   //cout << "testing1 " << p << std::endl;



  std::cout<<"hello oworld "<<std::endl;
    return 0;
}
