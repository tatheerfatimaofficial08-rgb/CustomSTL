#include <iostream>
#include <string>
#include "../include/MyMap.h"

int main()
{
    MyMap<std::string, int> marks;

    std::cout << "Empty at start: "
              << (marks.empty() ? "Yes" : "No") << std::endl;

    marks.insert("Ali", 90);
    marks.insert("Sara", 85);
    marks.insert("Ahmed", 95);

    std::cout << "Ali: " << marks["Ali"] << std::endl;
    std::cout << "Sara: " << marks["Sara"] << std::endl;
    std::cout << "Ahmed: " << marks["Ahmed"] << std::endl;

    std::cout << "Size: "
              << marks.getSize() << std::endl;

    std::cout << "Contains Ali: "
              << (marks.contains("Ali") ? "Yes" : "No") << std::endl;

    std::cout << "Contains Hamza: "
              << (marks.contains("Hamza") ? "Yes" : "No") << std::endl;

    marks.erase("Sara");

    std::cout << "After erasing Sara:" << std::endl;

    std::cout << "Contains Sara: "
              << (marks.contains("Sara") ? "Yes" : "No") << std::endl;

    std::cout << "Size: "
              << marks.getSize() << std::endl;

    marks.insert("Ali", 100);

    std::cout << "Updated Ali: "
              << marks["Ali"] << std::endl;

    return 0;
}