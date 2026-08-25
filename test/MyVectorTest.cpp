#include <iostream>
#include "../include/MyVector.h"

int main()
{
    MyVector<int> numbers;

    numbers.push_back(10);
    numbers.push_back(20);
    numbers.push_back(30);

    std::cout << "Element 0: " << numbers[0] << std::endl;
    std::cout << "Element 1: " << numbers[1] << std::endl;
    std::cout << "Element 2: " << numbers[2] << std::endl;

    std::cout << "Size: " << numbers.getSize() << std::endl;
    std::cout << "Capacity: " << numbers.getCapacity() << std::endl;

    return 0;
}