//
//  main.cpp
//  test01
//
//  Created by 王冬晖 on 2021/1/20.
//  Copyright © 2021 Alex. All rights reserved.
//

//
//  main.cpp
//  test01
//
//  Created by 王冬晖 on 2021/1/20.
//  Copyright © 2021 Alex. All rights reserved.
//
#include <stdio.h>
#include <iostream>
#include <thread>

using namespace std;
//课程demo
//实现方法和课件上不同是因为使用Mac不是Windows

int nSum = 0 ;
int NUMBER = 80;

void Accumulate(){
  for (int i = 0 ; i < NUMBER ; i++){
    int iCopy = nSum;
    nSum = iCopy+1;
  }
}

int main(int argc, char* argv[]){
  thread thread01(Accumulate);
  thread thread02(Accumulate);
  thread thread03(Accumulate);

  thread01.join();
  thread02.join();
  thread03.join();

  printf("%d\n",nSum);
  return 0;
}
