//
//  main.cpp
//  E-Olimp
//
//  Created by max on 4/24/14.
//  Copyright (c) 2014 max. All rights reserved.
//

#include <iostream>
#include "santa_klaus.h"

using namespace std;

int main(int argc, const char * argv[])
{

    cout << "Available projects from e-olimp:" << endl;
    cout << "Santa Claus." << endl;
    
    Santa object;
    object.setInformation();
    object.makeMagic();
    object.writeMagicToFile();
    
    return 0;
}

