//
//  HHClient.cpp
//  CallBackDemo
//
//  Created by Chris on 2017/10/9.
//  Copyright © 2017年 putao. All rights reserved.
//

#include <stdio.h>
#include "HHClient.hpp"
#include "HHClientImpl.hpp"

HHClientAPI* client = NULL;
HHClientAPI* HHClientNS::HHClientAPI_Create(HHlientCallback * callback){
    client = new HHClientImpl(callback);
    
    return client;
}

