#include "ComplexxTJ.h"
#include <iostream>

int main() {
    complex com1;
    com1.r = (real) 1.0;
    complex com2(4, 6);
    std::cout << com1.size() << '\n';
    std::cout << com2.size() << '\n';
    return 0;
}