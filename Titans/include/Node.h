#ifndef NODE_H
#define NODE_H

template<class T>
class Node
{
public:
    T item;
    Node *prevece,*next;
};

#endif // NODE_H
