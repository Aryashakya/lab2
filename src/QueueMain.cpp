#include <iostream>
#include "ArrayQueue.h"

int main()
{
    int a;
    Queue<int> *q = new ArrayQueue<int>(7);
    q->enqueue(1);
    q->enqueue(2);
    q->enqueue(3);
    q->enqueue(4);
    q->front(a);
    std::cout << a << std::endl;
    q->back(a);
    std::cout << a << std::endl;
    q->dequeue(a);
    q->dequeue(a);
    std::cout << a << std::endl;
    q->display();
    q->back(a);
    std::cout << a << std::endl;
    q->front(a);
    std::cout << a << std::endl;
    q->enqueue(45);
    q->enqueue(46);
    q->enqueue(47);
    q->front(a);
    std::cout << a << std::endl;
    q->dequeue(a);
    q->dequeue(a);
    q->front(a);
    std::cout << a << std::endl;
    q->display();

    std::string s;
    Queue<std::string> *string = new ArrayQueue<std::string>(5);
    string->enqueue("Hello");
    string->enqueue("My");
    string->enqueue("Name");
    string->enqueue("is");
    string->front(s);
    std::cout << s << std::endl;
    string->back(s);
    std::cout << s << std::endl;
    string->dequeue(s);
    string->dequeue(s);
    std::cout << s << std::endl;
    string->display();
    string->back(s);
    std::cout << s << std::endl;
    string->front(s);
    std::cout << s << std::endl;
    string->enqueue("Arya");
    string->enqueue("Shakya");
    string->enqueue("Hi");
    string->front(s);
    std::cout << s << std::endl;
    string->dequeue(s);
    string->dequeue(s);
    string->front(s);
    std::cout << s << std::endl;
    string->display();
}