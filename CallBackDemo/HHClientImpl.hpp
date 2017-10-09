//
//  HHClientImpl.cpp
//  CallBackDemo
//
//  Created by Chris on 2017/10/9.
//  Copyright © 2017年 putao. All rights reserved.
//

#include <stdio.h>
#include "HHClient.hpp"

using namespace HHClientNS;

class HHClientImpl: public HHClientAPI {
    
public:
    HHClientImpl(HHlientCallback * callback) {
        m_callback = callback;
    }
    
    HHResult Login(std::string ip, int port) {
        if (m_callback) {
            HHAlarm alarm;
            alarm.bz = "12345678";
            m_callback->onAlarm(alarm);
        }
        return OK;
    }
private:
    HHlientCallback * m_callback;
};
