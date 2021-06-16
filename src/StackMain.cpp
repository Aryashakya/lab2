#include <iostream>
#include "ArrayStack.h"

int main()
{
    int a;
    Stack<int> *s = new ArrayStack<int>(5);
    s->push(1);
    s->push(2);
    s->push(3);
    s->push(4);
    s->pop(a);
    std::cout << a << std::endl;
    s->push(5);
    s->top(a);
    std::cout << a << std::endl;
    s->push(6);
    s->pop(a);
    std::cout << a << std::endl;
    s->push(7);
    s->top(a);
    s->push(8);
    std::cout << a << std::endl;
    s->top(a);
    s->push(9);
    std::cout << a << std::endl;
    s->push(10);
    s->pop(a);
    s->push(11);
    std::cout << a << std::endl;
    s->top(a);
    std::cout << a << std::endl;
};