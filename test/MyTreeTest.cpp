#include <iostream>
#include "../include/MyTree.h"

int main()
{
    MyTree<int> tree;

    std::cout << "=== MyTree Test ===\n";

    std::cout << "Tree empty: "
              << (tree.empty() ? "Yes" : "No") << "\n";

    tree.insert(50);
    tree.insert(30);
    tree.insert(70);
    tree.insert(20);
    tree.insert(40);
    tree.insert(60);
    tree.insert(80);

    std::cout << "Tree empty after insert: "
              << (tree.empty() ? "Yes" : "No") << "\n";

    std::cout << "Contains 50: "
              << (tree.contains(50) ? "Yes" : "No") << "\n";

    std::cout << "Contains 40: "
              << (tree.contains(40) ? "Yes" : "No") << "\n";

    std::cout << "Contains 90: "
              << (tree.contains(90) ? "Yes" : "No") << "\n";

    tree.insert(40);

    std::cout << "Contains duplicate 40: "
              << (tree.contains(40) ? "Yes" : "No") << "\n";

    MyTree<std::string> names;

    names.insert("Sara");
    names.insert("Ali");
    names.insert("Zara");

    std::cout << "Contains Ali: "
              << (names.contains("Ali") ? "Yes" : "No") << "\n";

    std::cout << "Contains Ahmed: "
              << (names.contains("Ahmed") ? "Yes" : "No") << "\n";

    std::cout << "All MyTree tests completed.\n";

    return 0;
}