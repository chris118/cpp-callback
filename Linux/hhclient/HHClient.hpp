//
//  HHClient.hpp
//  CallBackDemo
//
//  Created by Chris on 2017/10/9.
//  Copyright © 2017年 putao. All rights reserved.
//

#ifndef HHClient_hpp
#define HHClient_hpp

#include <string>
#include <vector>

namespace HHClientNS
{
    enum HHResult                       //接口返回值
    {
        OK = 0,                         //OK
        LOGIN_DUPLICATE = 1,            //重复登录
        NET_ERROR      = 2,             //网络错误
        NOT_LOGIN      = 3,             //未登录
    };

    enum HHAlarmType{
        NONE = 0,
        CAP = 1,
        JACKET = 2,
        CAR = 3
    };
    
    struct HHAlarm
    {
        int id;
        HHAlarmType arlarm_type;    //报警类型
        long timestamp;             //报警时间
        int coordinate[4];           //x,y,with,heihgt
        long start_timestamp;        //报警开始时间
        long end_timestamp;          //报警结束时间  
        float credibility;           //得分        
        long alarm_pic_size;        
        char* alarm_pic;            //报警图片
        long alarm_vid_size;        
        char* alarm_vid;            //报警视频
        long src_image_size;        
        char* src_image;            //原图
    };
    
    class HHlientCallback
    {
    public:
        //第三步: 实现onAarm函数获得报警信息
        virtual void onAlarm(const HHAlarm &alarm) {}
    };
    
    class HHClientAPI
    {
    public:
        // 第二步: 登录到服务器
        virtual HHResult Login(std::string ip, int port) = 0;
    };
    
    // 第一步: 创建HHClientAPI
    HHClientAPI* HHClientAPI_Create(HHlientCallback *);
    
    //第四步: 销毁实例，断开于服务链接
    void HHClient_Destroy(HHClientAPI*);
}

#endif
