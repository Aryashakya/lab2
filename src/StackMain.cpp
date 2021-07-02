#include <iostream>
#include "ArrayStack.h"

int main()
{
    int a;
    Stack<int> *s = new ArrayStack<int>(7);
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
    s->display();
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
    s->display();

    std::string c;
    Stack<std::string> *stack = new ArrayStack<std::string>(5);
    stack->push("1a");
    stack->push("2b");
    stack->push("3c");
    stack->push("4d");
    stack->pop(c);
    std::cout << c << std::endl;
    stack->push("5e");
    stack->top(c);
    std::cout << c << std::endl;
    stack->push("6f");
    stack->pop(c);
    std::cout << c << std::endl;
    stack->push("7g");
    stack->top(c);
    stack->push("8h");
    std::cout << c << std::endl;
    stack->top(c);
    stack->push("9i");
    std::cout << c << std::endl;
    stack->push("10j");
    stack->pop(c);
    stack->push("11k");
    std::cout << c << std::endl;
    stack->display();
};