#include <iostream>
#include "../include/MyVector.h"

int main()
{
    MyVector<int> numbers;

    std::cout << "Empty at start: "
              << (numbers.empty() ? "Yes" : "No") << std::endl;

    numbers.push_back(10);
    numbers.push_back(20);
    numbers.push_back(30);

    std::cout << "Element 0: " << numbers[0] << std::endl;
    std::cout << "Element 1: " << numbers[1] << std::endl;
    std::cout << "Element 2: " << numbers[2] << std::endl;

    std::cout << "Size: " << numbers.getSize() << std::endl;
    std::cout << "Capacity: " << numbers.getCapacity() << std::endl;

    std::cout << "Empty after adding elements: "
              << (numbers.empty() ? "Yes" : "No") << std::endl;

    MyVector<int> reservedNumbers(5);

    std::cout << "Reserved vector size: "
              << reservedNumbers.getSize() << std::endl;

    std::cout << "Reserved vector capacity: "
              << reservedNumbers.getCapacity() << std::endl;

    return 0;
}