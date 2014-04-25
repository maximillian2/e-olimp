//
//  santa_klaus.cpp
//  E-Olimp
//
//  Created by max on 4/24/14.
//  Copyright (c) 2014 max. All rights reserved.
//

#include "santa_klaus.h"
#include <algorithm>

Santa::Santa()
{
    inputFile.open("input.txt", std::ifstream::in);
    outputFile.open("output.txt", std::ifstream::out);
}

Santa::~Santa()
{
    inputFile.close();
    outputFile.close();
}

void Santa::setInformation()
{
    if(inputFile.is_open())
    {
        // get kid number
        inputFile >> n;
        
        // get numbers of presents in each bag
        inputFile >> m;
        inputFile >> k;
    
        // get numbers of first bag
        for(int i = 0; i < m+k; i++)
        {
            int num;
            inputFile >> num;
            inputBag.push_back(num);
        }
    } else {
        std::cout << "Something wrong with file." << std::endl;
    }
}

void Santa::makeMagic()
{
    resultNum = n - ( m + k );
    
    for(unsigned int i = 1; i <= n; i++)
    {
        if(std::find(inputBag.begin(), inputBag.end(), i) == inputBag.end())
            resultBag.push_back(i);
        else
            continue;
    }
}

void Santa::writeMagicToFile()
{
    outputFile << resultNum << std::endl;
    
    for(int i : resultBag)
        outputFile << i << " ";
}