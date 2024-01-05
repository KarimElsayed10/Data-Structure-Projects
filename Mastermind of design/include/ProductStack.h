#ifndef PRODUCTSTACK_H
#define PRODUCTSTACK_H
#include <Stack.h>
template<typename T>
class ProductStack
{
private:
    Stack<T>product;
public:
    void add_operation(T operation)
    {
        product.push(operation);
    }
    void pop_operation(T operation)
    {
        product.pop();
    }
    int number_of_orders()
    {
        return product.size();
    }
    bool empty()
    {
        return product.empty();
    }
};

#endif // PRODUCTSTACK_H
