//
//  main.cpp
//  testCPP
//
//  Created by Hughie on 16/6/3.
//  Copyright © 2016年 Hughie. All rights reserved.
//

#include <iostream>
#include "testInlineNS.h"

namespace
{
    void testUnNamedSpace()
    {
        std::cout<<"testUnNamedSpace() called"<<std::endl;
    }
    void testAnonymousSpace()
    {
        std::cout<<"testAnonymousSpace() called"<<std::endl;
    }
}


int main(int argc, const char * argv[])
{
    // insert code here...
    std::cout << "Hello, World!\n";
    
    
    testInlineNS::inlineNS1::call();
    testInlineNS::inlineNS1::callNS1();

//    testInlineNS::callNS1();
//    testInlineNS::callNS2();

//    testInlineNS::call();
    testUnNamedSpace();
    testAnonymousSpace();
    
    
    return 0;
}
