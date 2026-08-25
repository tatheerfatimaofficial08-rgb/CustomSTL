#include <iostream>
#include <string>
#include "../include/MyMap.h"

void testStringIntegerMap()
{
    std::cout << "=== String-Integer Map Test ===" << std::endl;

    MyMap<std::string, int> marks;

    std::cout << "Initially empty: "
              << (marks.empty() ? "Yes" : "No") << std::endl;

    marks.insert("Ali", 90);
    marks.insert("Sara", 85);
    marks.insert("Ahmed", 95);

    std::cout << "Size: "
              << marks.getSize() << std::endl;

    std::cout << "Ali: "
              << marks["Ali"] << std::endl;

    std::cout << "Sara: "
              << marks["Sara"] << std::endl;

    std::cout << "Ahmed: "
              << marks["Ahmed"] << std::endl;

    std::cout << "Contains Ali: "
              << (marks.contains("Ali") ? "Yes" : "No") << std::endl;

    std::cout << "Contains Hamza: "
              << (marks.contains("Hamza") ? "Yes" : "No") << std::endl;
}

void testDuplicateKey()
{
    std::cout << "\n=== Duplicate Key Test ===" << std::endl;

    MyMap<std::string, int> marks;

    marks.insert("Ali", 90);
    marks.insert("Ali", 100);

    std::cout << "Updated Ali: "
              << marks["Ali"] << std::endl;

    std::cout << "Size: "
              << marks.getSize() << std::endl;
}

void testAt()
{
    std::cout << "\n=== at() Test ===" << std::endl;

    MyMap<std::string, int> marks;

    marks.insert("Ali", 90);
    marks.insert("Sara", 85);

    std::cout << "Ali using at(): "
              << marks.at("Ali") << std::endl;

    try
    {
        marks.at("Hamza");
    }
    catch (const std::out_of_range& error)
    {
        std::cout << "Caught error: "
                  << error.what() << std::endl;
    }

    std::cout << "Size after failed lookup: "
              << marks.getSize() << std::endl;
}

void testErase()
{
    std::cout << "\n=== Erase Test ===" << std::endl;

    MyMap<std::string, int> marks;

    marks.insert("Ali", 90);
    marks.insert("Sara", 85);
    marks.insert("Ahmed", 95);

    std::cout << "Size before erase: "
              << marks.getSize() << std::endl;

    marks.erase("Sara");

    std::cout << "Contains Sara after erase: "
              << (marks.contains("Sara") ? "Yes" : "No") << std::endl;

    std::cout << "Size after erase: "
              << marks.getSize() << std::endl;
}

void testIntegerStringMap()
{
    std::cout << "\n=== Integer-String Map Test ===" << std::endl;

    MyMap<int, std::string> students;

    students.insert(1, "Ali");
    students.insert(2, "Sara");
    students.insert(3, "Ahmed");

    std::cout << "Student 1: "
              << students[1] << std::endl;

    std::cout << "Student 2: "
              << students[2] << std::endl;

    std::cout << "Student 3: "
              << students[3] << std::endl;

    std::cout << "Size: "
              << students.getSize() << std::endl;
}

int main()
{
    testStringIntegerMap();
    testDuplicateKey();
    testAt();
    testErase();
    testIntegerStringMap();

    std::cout << "\nAll MyMap tests completed." << std::endl;

    return 0;
}