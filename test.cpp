#include <iostream>
#include <Windows.h>
#include <future>
#include <deque>

void task(){
    srand (6);
    auto x = (((rand() % 5)+1));
    //Sleep(x);
    std::cout << "slept for " << x << "\n";
}
int main(void) {
    srand (6);
    std::deque<std::future<void>> Container;
    for (int x = 0; x < 30; x++){
        Container.push_back(std::async(task));
    }
    
    while (!Container.empty()){
        Container.front().get();
        Container.pop_front();
    }
      return 0;
}