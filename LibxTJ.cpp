#include "ComplexxTJ.h"
#include <iostream>

int main() {
    complex com1;
    complex com2(4, 6);
    std::cout << com1.size();
    std::cout << com2.size();
    std::cout << com2.r + com2.i;
    return 0;
}