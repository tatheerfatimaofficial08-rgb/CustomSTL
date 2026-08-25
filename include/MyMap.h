#ifndef MYMAP_H
#define MYMAP_H

#include <cstddef>
#include <stdexcept>

template <typename K, typename V>
class MyMap
{
private:
    struct Entry
    {
        K key;
        V value;
    };

    Entry* data;
    std::size_t size;
    std::size_t capacity;

    void resize()
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

        Entry* newData = new Entry[newCapacity];

        for (std::size_t i = 0; i < size; i++)
        {
            newData[i] = data[i];
        }

        delete[] data;

        data = newData;
        capacity = newCapacity;
    }

    std::size_t findIndex(const K& key) const
    {
        for (std::size_t i = 0; i < size; i++)
        {
            if (data[i].key == key)
            {
                return i;
            }
        }

        return size;
    }

public:
    MyMap()
        : data(nullptr), size(0), capacity(0)
    {
    }

    ~MyMap()
    {
        delete[] data;
    }

    void insert(const K& key, const V& value)
    {
        std::size_t index = findIndex(key);

        if (index != size)
        {
            data[index].value = value;
            return;
        }

        if (size == capacity)
        {
            resize();
        }

        data[size].key = key;
        data[size].value = value;
        size++;
    }

    V& operator[](const K& key)
    {
        std::size_t index = findIndex(key);

        if (index != size)
        {
            return data[index].value;
        }

        if (size == capacity)
        {
            resize();
        }

        data[size].key = key;
        data[size].value = V();
        size++;

        return data[size - 1].value;
    }

    V& at(const K& key)
    {
        std::size_t index = findIndex(key);

        if (index == size)
        {
            throw std::out_of_range("MyMap key not found");
        }

        return data[index].value;
    }

    bool contains(const K& key) const
    {
        return findIndex(key) != size;
    }

    void erase(const K& key)
    {
        std::size_t index = findIndex(key);

        if (index == size)
        {
            return;
        }

        for (std::size_t i = index; i < size - 1; i++)
        {
            data[i] = data[i + 1];
        }

        size--;
    }

    std::size_t getSize() const
    {
        return size;
    }

    bool empty() const
    {
        return size == 0;
    }
};

#endif