//
//  main.cpp
//  test01
//
//  Created by 王冬晖 on 2021/1/20.
//  Copyright © 2021 Alex. All rights reserved.
//


//本demo演示使用线程将nSum加到240，做法和课件上的不一样，因为他用Windows。
#include <iostream>
#include <thread>

using namespace std;

int nSum = 0;
int NUMBER = 80;

void Accumulate(){
    for(int i=0;i<NUMBER;i++){
        int iCopy = nSum;
        nSum = iCopy+1;
    }
}

int main(int argc, const char * argv[]) {
    thread thread_01(Accumulate);
    thread thread_02(Accumulate);
    thread thread_03(Accumulate);
    thread_01.join();
    thread_02.join();
    thread_03.join();
    printf("%d\n",nSum);
    return 0;
}
