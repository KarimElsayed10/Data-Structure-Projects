#ifndef QUEUE_H
#define QUEUE_H
#include <SubLinkedList.h>
template<typename T>
class Queue
{
private:
    SubLinkedList<T>elements;
public:
    T front()
    {
        return elements.front();
    }
    bool empty()
    {
        return elements.empty();
    }
    void pop()
    {
        elements.pop_front();
    }
    void push(T element)
    {
        elements.push(element);
    }
    int size()
    {
        return elements.size();
    }
};

#endif // QUEUE_H
