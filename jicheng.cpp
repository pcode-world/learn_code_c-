/*********************************************************************************
 *      Copyright:  (C) 2019 wujinlong<547124558@qq.com>
 *                  All rights reserved.
 *
 *       Filename:  jicheng.cpp
 *    Description:  This file test A member of the same name when inherited
 *                 
 *        Version:  1.0.0(2019年07月26日)
 *         Author:  wujinlong <547124558@qq.com>
 *      ChangeLog:  1, Release initial version on "2019年07月26日 14时47分32秒"
 *                 
 ********************************************************************************/

#include <iostream>
#include <stdio.h>
using namespace std;

class A
{
    public:
        int _a;

        A()
        {
            _a = 1;
        }
        void print()
        {
            printf("%d\n",_a);
        }
};

class B :public A
{
    public:
        int _a;
        B()
        {
            _a = 2;
        }
        void print()
        {
            A::print();
            printf("%d\n",_a);
        }
};


int main()
{
    B b;
    b.print();
    printf("b._a = %d\n",b._a);
    return 0;
}

