//
//  main.cpp
//  CallBackDemo
//
//  Created by Chris on 2017/10/9.
//  Copyright © 2017年 putao. All rights reserved.
//

#include <iostream>
#include <stdio.h>

#include "HHClient.hpp"


using namespace HHClientNS;

class HHCallback: public HHlientCallback{
     void onAlarm(const HHAlarm &alarm) {
         printf("%s\n", alarm.bz.c_str());
     }
};

int main(int argc, const char * argv[]) {
    
    HHCallback *callback = new HHCallback();
    
    HHClientAPI* client = HHClientAPI_Create(callback);
    client->Login("192.168.1.1", 80000);
    
    return 0;
}
