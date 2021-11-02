#include<iostream>
#include <unistd.h>

int main(){ //starting parent process
    std::cout<<"Grandparent process "<<std::endl;
    pid_t pid = fork(); //child processs
    if(pid == 0){//child
        std::cout<<"Parent process" <<std::endl;
        pid = fork();
        if(pid == 0){
            std::cout<<"Child process"<<std::endl;
        }
    }
    return 0;
    
}