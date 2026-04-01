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

    /* 
    *   In this case the main thread will not wait 
    *   for the execution of the first and the second thread
    *   to end, so the main thread could finish first
    */
    t1.detach();
    t2.detach();

    std::cout<<"\nTerminated";

}