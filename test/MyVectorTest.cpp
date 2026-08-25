#include <iostream>
#include <string>
#include "../include/MyVector.h"

void testIntegerVector()
{
    std::cout << "=== Integer Vector Test ===" << std::endl;

    MyVector<int> numbers;

    std::cout << "Initially empty: "
              << (numbers.empty() ? "Yes" : "No") << std::endl;

    for (int i = 1; i <= 8; i++)
    {
        numbers.push_back(i * 10);
    }

    std::cout << "Size: " << numbers.getSize() << std::endl;
    std::cout << "Capacity: " << numbers.getCapacity() << std::endl;

    std::cout << "Elements: ";

    for (std::size_t i = 0; i < numbers.getSize(); i++)
    {
        std::cout << numbers[i] << " ";
    }

    std::cout << std::endl;
}

void testStringVector()
{
    std::cout << "\n=== String Vector Test ===" << std::endl;

    MyVector<std::string> names;

    names.push_back("Ali");
    names.push_back("Sara");
    names.push_back("Ahmed");

    std::cout << "Size: " << names.getSize() << std::endl;

    std::cout << "Elements: ";

    for (std::size_t i = 0; i < names.getSize(); i++)
    {
        std::cout << names[i] << " ";
    }

    std::cout << std::endl;
}

void testReservedVector()
{
    std::cout << "\n=== Reserved Capacity Test ===" << std::endl;

    MyVector<int> numbers(10);

    std::cout << "Initial size: "
              << numbers.getSize() << std::endl;

    std::cout << "Initial capacity: "
              << numbers.getCapacity() << std::endl;

    numbers.push_back(100);
    numbers.push_back(200);

    std::cout << "Size after adding elements: "
              << numbers.getSize() << std::endl;

    std::cout << "Capacity after adding elements: "
              << numbers.getCapacity() << std::endl;
}

void testInvalidIndex()
{
    std::cout << "\n=== Bounds Checking Test ===" << std::endl;

    MyVector<int> numbers;

    numbers.push_back(10);
    numbers.push_back(20);

    try
    {
        std::cout << numbers[5] << std::endl;
    }
    catch (const std::out_of_range& error)
    {
        std::cout << "Caught error: "
                  << error.what() << std::endl;
    }
}

int main()
{
    testIntegerVector();
    testStringVector();
    testReservedVector();
    testInvalidIndex();

    std::cout << "\nAll MyVector tests completed." << std::endl;

    return 0;
}