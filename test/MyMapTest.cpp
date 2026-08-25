#include <iostream>
#include <string>
#include "../include/MyMap.h"

int main()
{
    MyMap<std::string, int> marks;

    marks.insert("Ali", 90);
    marks.insert("Sara", 85);
    marks.insert("Ahmed", 95);

    std::cout << "Ali using at(): "
              << marks.at("Ali") << std::endl;

    try
    {
        std::cout << "Hamza using at(): "
                  << marks.at("Hamza") << std::endl;
    }
    catch (const std::out_of_range& error)
    {
        std::cout << "Caught error: "
                  << error.what() << std::endl;
    }

    std::cout << "Size after failed lookup: "
              << marks.getSize() << std::endl;

    return 0;
}