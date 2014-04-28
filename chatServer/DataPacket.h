//
// Created by anjun on 4/26/14.
// Copyright (c) 2014 ___FULLUSERNAME___. All rights reserved.
//


#ifndef __DataPacket_H_
#define __DataPacket_H_


class DataPacket {
public:
    DataPacket(char*data, int sz){
        buffer = new char[sz];
    }
    ~DataPacket(){
        delete []buffer;
    }

private:
    char* buffer;
};


#endif //__DataPacket_H_
