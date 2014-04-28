//
// Created by anjun on 4/26/14.
// Copyright (c) 2014 ___FULLUSERNAME___. All rights reserved.
//

#include "Trace.h"
   inline
Trace::Trace(const char *name) :theFunctionName(0){
       if(traceIsActive){
           cout<<"Enter function "<<name <<endl;
           theFunctionName = new string(name);
       }
   }
inline
void Trace::debug(const char *msg) {
    if(traceIsActive){
        cout<<msg<<endl;
    }
}
inline
Trace::~Trace() {
       if(traceIsActive){
           cout<<"Exit function"<<*theFunctionName<<endl;
           delete theFunctionName;
       }
}