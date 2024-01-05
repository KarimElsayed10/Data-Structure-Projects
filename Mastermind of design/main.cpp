#include <bits/stdc++.h>
#include <SmartFactoryQueue.h>
#include <ProductStack.h>
using namespace std;
int main()
{
    SmartFactoryQueue<int>smart;
    ProductStack<int> product;
    product.add_operation(1);
    product.add_operation(2);
    product.add_operation(1);
    product.add_operation(2);
    smart.add_product(product);
    cout<<smart.size()<<'\n';
    smart.pop_product();
    cout<<smart.size()<<'\n';
    return 0 ;
}
