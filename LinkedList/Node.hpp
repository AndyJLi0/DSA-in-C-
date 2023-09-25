#pragma once

namespace LinkedList
{

    template <class ValueType>
    struct NodeSingle
    {
        ValueType data;
        NodeSingle *next;

        NodeSingle(ValueType ndata, NodeSingle *nx = nullptr) : data(ndata), next(nx) {}

        //TODO: Implement constructor and ability to change data
    };

    template <class ValueType>
    struct NodeDouble
    {
        ValueType data;
        NodeDouble *prev;
        NodeDouble *next;

        NodeDouble(ValueType ndata, NodeDouble *front = nullptr, NodeDouble *back = nullptr) : data(ndata), prev(back), next(front) {}
    };

}