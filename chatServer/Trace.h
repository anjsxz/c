//
// Created by anjun on 4/26/14.
// Copyright (c) 2014 ___FULLUSERNAME___. All rights reserved.
//


#ifndef __Trace_H_
#define __Trace_H_

#include "stdInclude.h"
               using namespace std;
class Trace {
public:
    Trace(const char* name);
    ~Trace();
    void debug(const char* msg);
    static bool traceIsActive;
private:
    string *theFunctionName;
};


#endif //__Trace_H_
