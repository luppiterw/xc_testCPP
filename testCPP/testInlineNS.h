//
//  testInlineNS.h
//  testCPP
//
//  Created by Hughie on 16/6/3.
//  Copyright © 2016年 Hughie. All rights reserved.
//

#ifndef testInlineNS_h
#define testInlineNS_h

namespace testInlineNS
{
    
    namespace NS0
    {
        
        void call()
        {
            std::cout<<"NS0.call() called"<<std::endl;
        }
        
        void callNS0()
        {
            std::cout<<"inlineNS1.callNS1() called"<<std::endl;
        }
    }
    
    inline namespace inlineNS1
    {
        
        void call()
        {
            std::cout<<"inlineNS1.call() called"<<std::endl;
            
        }
        
        void callNS1()
        {
            std::cout<<"inlineNS1.callNS1() called"<<std::endl;
        }
        
        class classNS
        {
        public:
            classNS()
            {
                
            }
        private:
            int a = 2;
        };
        
        
    }
    
    inline namespace inlineNS2
    {
        void call()
        {
            inlineNS1::call();
            std::cout<<"inlineNS2.call() called"<<std::endl;
        }
        
        void callNS1()
        {
            std::cout<<"inlineNS1.callNS2() called"<<std::endl;
        }
    }
}

namespace outerInline
{
    inline namespace myOuterInline
    {
        void call()
        {
            std::cout<<"outerInline.myOuterInline.call() called"<<std::endl;
        }
    }
}


#endif /* testInlineNS_h */
