#include <iostream>
#include "ArrayQueue.h"

int main()
{
    int a;
    Queue<int> *q = new ArrayQueue<int>(5);
    q->enqueue(1);
    q->enqueue(2);
    q->enqueue(3);
    q->enqueue(4);
    q->front(a);
    std::cout << a << std::endl;
    q->dequeue(a);
    q->dequeue(a);
    std::cout << a << std::endl;
    q->back(a);
    std::cout << a << std::endl;
    q->front(a);
    std::cout << a << std::endl;
}