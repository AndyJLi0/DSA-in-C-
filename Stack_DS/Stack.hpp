#pragma once

#include "../LinkedList/Node.hpp"

namespace Stack_DS
{
    template <class ValueType>
    class Stack
    {
    public:
        Stack();
        ~Stack();
        bool IsEmpty() const;
        void Push(const ValueType &value);
        ValueType Pop();
        ValueType Peek() const;

    private:
        LinkedList::NodeSingle<ValueType> *topPtr = nullptr;
        int size = 0;
    };

    template <class ValueType>
    Stack<ValueType>::Stack()
    {
    }

    template <class ValueType>
    Stack<ValueType>::~Stack()
    {
        while (!IsEmpty())
        {
            Pop();
        }
    }

    template <class ValueType>
    bool Stack<ValueType>::IsEmpty() const
    {
        return topPtr == nullptr;
    }

    template <class ValueType>
    void Stack<ValueType>::Push(const ValueType &value)
    {
        LinkedList::NodeSingle<ValueType> *newPtr = new LinkedList::NodeSingle<ValueType>(value);
        newPtr->next = topPtr;
        topPtr = newPtr;
        size++;
    }

    template <class ValueType>
    ValueType Stack<ValueType>::Pop()
    {
        if (IsEmpty())
        {
            throw "Stack is empty";
        }
        else
        {
            LinkedList::NodeSingle<ValueType> *tempPtr = topPtr;
            topPtr = topPtr->next;
            ValueType popValue = tempPtr->data;
            delete tempPtr;
            size--;
            return popValue;
        }
    }

    template <class ValueType>
    ValueType Stack<ValueType>::Peek() const
    {
        if (IsEmpty())
        {
            throw "Stack is empty";
        }
        else
        {
            return topPtr->data;
        }
    }
}
