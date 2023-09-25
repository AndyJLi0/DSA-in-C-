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
        LinkedListSingle() : head(nullptr), length(0) {}
        ~LinkedListSingle();

        void append(NodeSingle *node)
        {
            //TODO: implement append for single node
    
        }
    };

    //TODO: implement linkedlist double
}