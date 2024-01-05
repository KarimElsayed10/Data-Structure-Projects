#ifndef SMARTFACTORYQUEUE_H
#define SMARTFACTORYQUEUE_H
#include <Queue.h>
#include <ProductStack.h>
template<typename T>
class SmartFactoryQueue
{
private:
    Queue<ProductStack<T>>smart_factory;
public:
    void add_product(ProductStack<T> product)
    {
        smart_factory.push(product);
    }
    void pop_product()
    {
        smart_factory.pop();
    }
    int size()
    {
        return smart_factory.size();
    }
    bool empty()
    {
        return smart_factory.empty();
    }
};

#endif // SMARTFACTORYQUEUE_H
