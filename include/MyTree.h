#ifndef MYTREE_H
#define MYTREE_H

#include <stdexcept>

template <typename T>
class MyTree
{
private:
    struct Node
    {
        T data;
        Node* left;
        Node* right;

        Node(const T& value)
            : data(value), left(nullptr), right(nullptr)
        {
        }
    };

    Node* root;

    Node* insert(Node* node, const T& value)
    {
        if (node == nullptr)
        {
            return new Node(value);
        }

        if (value < node->data)
        {
            node->left = insert(node->left, value);
        }
        else if (value > node->data)
        {
            node->right = insert(node->right, value);
        }

        return node;
    }

    bool contains(Node* node, const T& value) const
    {
        if (node == nullptr)
        {
            return false;
        }

        if (value == node->data)
        {
            return true;
        }

        if (value < node->data)
        {
            return contains(node->left, value);
        }

        return contains(node->right, value);
    }

    void destroy(Node* node)
    {
        if (node == nullptr)
        {
            return;
        }

        destroy(node->left);
        destroy(node->right);

        delete node;
    }

public:
    MyTree()
        : root(nullptr)
    {
    }

    ~MyTree()
    {
        destroy(root);
    }

    void insert(const T& value)
    {
        root = insert(root, value);
    }

    bool contains(const T& value) const
    {
        return contains(root, value);
    }

    bool empty() const
    {
        return root == nullptr;
    }
};

#endif