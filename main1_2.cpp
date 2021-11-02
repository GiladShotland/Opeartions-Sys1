#include<iostream>
#include <unistd.h>
int main(){
    std::cout<<"Parent process"<<std::endl;
    pid_t id = fork();
    if(id == 0){
        std::cout<<"First son"<<std::endl;
    }
    if(id != 0){
        id = fork();
        if(id == 0){
            std::cout<<"Second son"<<std::endl;

        }
        if(id != 0){
            id = fork();
            if(id == 0){
                std::cout<<"Third son" <<std::endl;
            }
        }
    }
}   