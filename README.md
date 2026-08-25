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