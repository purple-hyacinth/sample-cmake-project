#include <iostream>
#include <future>

int main(int argc, const char* argv[])
{
    auto asyncPrint = std::async(std::launch::async, [] {
        std::cout << "Hello, netconf client!!" << std::endl;
    });

    asyncPrint.get();
}
