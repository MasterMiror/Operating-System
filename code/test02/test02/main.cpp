//
//  main.cpp
//  test02
//
//  Created by 王冬晖 on 2021/1/20.
//  Copyright © 2021 Alex. All rights reserved.
//

//本Demo用于演示Unix类系统下运行的环境
//需要引用<sys./types.h> <unistd.h>两个头文件分别对应pid_t和fork()
#include <iostream>
#include <sys/types.h>
#include <unistd.h>
using namespace std;


int main(int argc, const char * argv[]) {
    int a=2,b=-1,c=2;
    if(a<b)
        if(b<0)
            c=0;
        else c+=1;
    cout<<c<<endl;
    return 0;

        }
