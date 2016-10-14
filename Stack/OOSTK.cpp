//
//  OOSTK.cpp
//  Stack
//
//  Created by fanaticheng on 2016/10/14.
//  Copyright © 2016年 fanaticheng. All rights reserved.
//

#include "OOSTK.hpp"
OOSTK::OOSTK(int m): elems(0), max(0){
    *(int **)&elems=new int[* (int*)&max=m];
    pos=0;
}
OOSTK::OOSTK(const OOSTK&s): elems(0), max(0){
    delete elems;
    * (int **)&elems=new int[s.max];
    * (int *)&max=s.max;
    pos =0;
}
int OOSTK::size () const{
    return max;
}
int OOSTK::howMany() const{
    return pos;
}
int OOSTK::getelem(int x) const{
    return elems[x];
}
OOSTK& OOSTK::push(int e){
    elems[pos++]=e;
    return *this;
}
OOSTK& OOSTK::pop(int &e){
    e=elems[pos--];
    return *this;
}

OOSTK& OOSTK::assign(const OOSTK&s){
    delete elems;
    * (int **)&elems=new int[s.max];
    * (int *)&max=s.max;
    return *this;
}
void OOSTK::print() const{
    if(pos==0)
        std::cout<<"该栈为空栈！";
    else{
        for(int i=0;i<=pos;i++)
            std::cout<<"第"<<i<<"个字符为:"<<elems[i]<<std::endl;
    }
}
OOSTK::~OOSTK(){
    free(elems);
    * (int *)&max=0;
    pos=0;
}
