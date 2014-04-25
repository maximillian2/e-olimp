//
//  santa_klaus.h
//  E-Olimp
//
//  Created by max on 4/24/14.
//  Copyright (c) 2014 max. All rights reserved.
//

#ifndef __E_Olimp__santa_klaus__
#define __E_Olimp__santa_klaus__

#include <iostream>
#include <fstream>
#include <vector>

class Santa {
private:
    std::ifstream inputFile;
    std::ofstream outputFile;
    
    unsigned int n;                             // number of kids
    unsigned int m, k;                          // number of presents in first and second bags
    std::vector<unsigned int> inputBag;         // vector to store first bag childrens' numbers
    unsigned int resultNum;                     // result to write in file
    std::vector<unsigned int> resultBag;        // result to write in file
    
public:
    Santa();
    ~Santa();
    void setInformation();
    
    unsigned int getNumKids();
    inline std::vector<unsigned int> getInputBag() { return inputBag; };
    inline std::vector<unsigned int> getResultBag() { return resultBag; };
    
    void makeMagic();
    void writeMagicToFile();
};

#endif /* defined(__E_Olimp__santa_klaus__) */
