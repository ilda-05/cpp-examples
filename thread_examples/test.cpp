#include<iostream>
#include<thread>

void hello_thread(){

    for(int i=0;i<10;i++)
        std::cout<<"Hello\n";

}

void world_thread(){

    std::thread t1(hello_thread);

    t1.join();

    for(int i=0;i<10;i++)
        std::cout<<"World\n";

}

/*
*   In this case the main thread will wait for the thread t2 to end its execution,
*   And the thread t2 will wait for the thread t1 to end its execution.
*   so the output, theoretically, should be always ten 'Hello' first, then
*   ten 'World', and followed by 'terminated' of the output
*/

int main(){

    std::thread t2(world_thread);

    t2.join();

    std::cout<<"\nTerminated";

}