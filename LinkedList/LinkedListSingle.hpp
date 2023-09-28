#pragma once

#include "Node.hpp"

namespace LinkedList
{
    template <class ValueType>
    class LinkedListSingle
    {
    private:
        NodeSingle<ValueType> *head;
        int length;

    public:
        LinkedListSingle();
        ~LinkedListSingle();

        void append(NodeSingle<ValueType> *node)
        {
            // ... your append implementation
        }
    };

    template <class ValueType>
    LinkedListSingle<ValueType>::LinkedListSingle() : head(nullptr), length(0) {}

    template <class ValueType>
    LinkedListSingle<ValueType>::~LinkedListSingle()
    {
        NodeSingle<ValueType> *current = head;
        NodeSingle<ValueType> *next = nullptr;

        while (current != nullptr)
        {
            next = current->next;
            delete current;
            current = next;
        }
    }

    // TODO: implement LinkedListDouble
}
