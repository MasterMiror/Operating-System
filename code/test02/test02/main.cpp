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
    pid_t pid, pid_1, pid_2;
    pid = fork();
    
    if(pid == 0){
        pid_1 = getpid();
        printf("pid_1 = %d \n",pid_1);
        sleep(10);
    }
    if(pid > 0){
        pid_2 = wait(NULL);
        printf("pid_2 = %d \n",pid_2);
    }
    exit(0);
    
}
