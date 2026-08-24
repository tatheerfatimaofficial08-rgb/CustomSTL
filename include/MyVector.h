#ifndef MYVECTOR_H
#define MYVECTOR_H

#include <cstddef>

template <typename T>
class MyVector
{
private:
    T* data;
    std::size_t size;
    std::size_t capacity;

public:
    MyVector() : data(nullptr), size(0), capacity(0) {}

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
        return data[index];
    }
};

#endif