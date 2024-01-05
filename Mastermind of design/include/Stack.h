#ifndef STACK_H
#define STACK_H
#include <SubLinkedList.h>
template<typename T>
class Stack
{
private:
    SubLinkedList<T>elements;
public:
    T top()
    {
        return elements.back();
    }
    bool empty()
    {
        return elements.empty();
    }
    void push(T element)
    {
        elements.push(element);
    }
    void pop()
    {
        elements.pop_back();
    }
    int size()
    {
        return elements.size();
    }
};

#endif // STACK_H
