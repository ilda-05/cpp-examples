#include<iostream>
#include<thread>

void hello_thread(){

    for(int i=0;i<10;i++)
        std::cout<<"Hello\n";

}

void world_thread(){

    for(int i=0;i<10;i++)
        std::cout<<"World\n";

}

int main(){

    std::thread t1(hello_thread);
    std::thread t2(world_thread);

    t1.detach();
    t2.detach();

    std::cout<<"\nTerminated";

}