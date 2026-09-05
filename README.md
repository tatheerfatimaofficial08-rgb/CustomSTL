# Custom STL Libraries

A beginner-friendly C++ project that recreates basic versions of commonly used STL-style data structures from scratch.

This project was developed as part of an internship task to understand how generic data structures work internally instead of directly using the C++ Standard Template Library.

## Project Overview

The goal of this project is to build custom versions of common data structures using C++ templates, dynamic memory allocation, and basic data structure concepts.

For this task, two custom containers were implemented:

- MyVector
- MyMap

The project also includes separate test programs to verify that each container works correctly.

---

# 1. MyVector

`MyVector` is a custom dynamic array similar to the idea of `std::vector`.

A normal array has a fixed size:

```cpp
int numbers[5];
A normal array has a fixed size:

```cpp
int numbers[5];

Once the size of a normal array is decided, it cannot automatically grow when more elements are needed.

MyVector solves this problem by using dynamic memory allocation.

It can:

Store elements dynamically
Add new elements
Automatically increase its capacity when needed
Access elements using an index
Keep track of its current size and capacity
Example
MyVector<int> numbers;

numbers.push_back(10);
numbers.push_back(20);
numbers.push_back(30);

The vector stores these values dynamically:

MyVector
+----+----+----+
| 10 | 20 | 30 |
+----+----+----+

The important idea is that the container manages its own memory instead of using a fixed-size array.

2. MyMap

MyMap is a custom key-value container inspired by the idea of std::map.

A map stores information in pairs:

Key → Value

For example:

MyMap<std::string, int> students;

students.insert("Ali", 90);
students.insert("Sara", 85);
students.insert("Ahmed", 95);

The data can be understood as:

Ali    → 90
Sara   → 85
Ahmed  → 95

The key is used to identify the associated value.

In this project, MyMap is implemented from scratch instead of directly using std::map.

Why Were MyVector and MyMap Created?

The purpose of this task was not simply to use existing STL containers.

Instead, the project recreates basic STL-style containers to understand what happens internally.

By implementing these containers manually, the project demonstrates concepts such as:

Templates
Dynamic memory allocation
Pointers
Arrays
Data structures
Classes
Encapsulation
Generic programming
C++ Templates

Both containers are designed to work with different data types.

For example, MyVector can store integers:

MyVector<int> numbers;

It can also store strings:

MyVector<std::string> names;

This is possible because the container is implemented using C++ templates.

Templates allow the same class to work with different data types without rewriting the entire class.

Dynamic Memory Allocation

One of the important concepts used in MyVector is dynamic memory allocation.

Instead of deciding the complete size of the container at compile time, memory can be allocated during program execution.

The container keeps track of:

Size
Capacity
Data

Conceptually:

Size     → Number of elements currently stored

Capacity → Amount of allocated space

Data     → Dynamically allocated memory

When the available capacity becomes full, the container can allocate a larger block of memory and move the existing elements into it.

Testing

The project contains separate test programs for the custom containers.

The tests are used to check whether the implemented functions behave correctly.

MyVector Tests

The MyVector tests verify operations such as:

Creating a vector
Adding elements
Accessing elements
Checking size
Checking capacity
Testing dynamic growth
MyMap Tests

The MyMap tests verify operations such as:

Creating a map
Adding key-value pairs
Searching for keys
Accessing associated values
Checking whether the container behaves correctly

Testing each container separately makes it easier to find problems before combining or using the components together.

Project Structure
CustomSTL/
│
├── include/
│   ├── MyVector.h
│   └── MyMap.h
│
├── src/
│   └── ...
│
├── test/
│   ├── MyVectorTest.cpp
│   └── MyMapTest.cpp
│
├── .gitignore
└── README.md

The exact files may depend on the final project structure.

Concepts Demonstrated

This project demonstrates practical use of:

1. C++ Classes

The containers are implemented as custom classes.

2. Templates

Templates allow the containers to work with different data types.

3. Dynamic Memory

Memory is allocated dynamically instead of relying only on fixed-size arrays.

4. Pointers

Pointers are used to work with dynamically allocated memory.

5. Data Structures

The project demonstrates how container-like data structures can be created from basic programming concepts.

6. Encapsulation

The internal implementation of the containers is kept inside the classes while users interact with their public functions.

What I Learned

This project helped me understand that STL containers are not simply built-in magic.

By implementing MyVector and MyMap from scratch, I practiced:

How templates work
How dynamic memory allocation works
How pointers can manage dynamically allocated data
How a dynamic array can grow
How key-value data can be organized
How classes can represent data structures
How to separate implementation into different files
How to write tests for custom data structures
How to use Git and GitHub for version control
Project Status

The custom STL-style containers have been implemented and tested as part of the internship task.

The project currently includes:

Custom MyVector
Custom MyMap
Template-based implementation
Dynamic memory management
Separate test programs
Git/GitHub version control