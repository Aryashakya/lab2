#include "ArrayStack.h"

template <typename T>
ArrayStack<T>::ArrayStack(int size) : size(size), data(new T[size]), topIndex(-1){};

template <typename T>
bool ArrayStack<T>::isEmpty()
{
    return topIndex < 0;
};

template <typename T>
bool ArrayStack<T>::isFull()
{
    return (size - 1) == topIndex;
};

template <typename T>
T ArrayStack<T>::push(const T &element)
{
    if (!isFull())
    {
        topIndex++;
        data[topIndex] = element;
    }
};

template <typename T>
T ArrayStack<T>::pop(){

};

template <typename T>
T ArrayStack<T>::top()
{
}