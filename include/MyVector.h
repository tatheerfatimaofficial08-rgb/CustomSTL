#ifndef MYVECTOR_H
#define MYVECTOR_H

#include <cstddef>
#include <stdexcept>

template <typename T>
class MyVector
{
private:
    T* data;
    std::size_t size;
    std::size_t capacity;

public:
    MyVector() : data(nullptr), size(0), capacity(0) {}

    MyVector(std::size_t initialCapacity)
        : data(nullptr), size(0), capacity(initialCapacity)
    {
        if (capacity > 0)
        {
            data = new T[capacity];
        }
    }

    ~MyVector()
    {
        delete[] data;
    }

    void push_back(const T& value)
    {
        if (size == capacity)
        {
            std::size_t newCapacity;

            if (capacity == 0)
            {
                newCapacity = 1;
            }
            else
            {
                newCapacity = capacity * 2;
            }

            T* newData = new T[newCapacity];

            for (std::size_t i = 0; i < size; i++)
            {
                newData[i] = data[i];
            }

            delete[] data;

            data = newData;
            capacity = newCapacity;
        }

        data[size] = value;
        size++;
    }

    T& operator[](std::size_t index)
    {
        if (index >= size)
        {
            throw std::out_of_range("MyVector index out of range");
        }

        return data[index];
    }

    std::size_t getSize() const
    {
        return size;
    }

    std::size_t getCapacity() const
    {
        return capacity;
    }

    bool empty() const
    {
        return size == 0;
    }
};

#endif