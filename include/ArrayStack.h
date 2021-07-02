#include <iostream>

template <typename T>
class Stack
{
public:
    virtual bool isEmpty() const = 0;
    virtual bool isFull() const = 0;
    virtual void display() const = 0;
    virtual bool push(const T &element) = 0;
    virtual bool pop(T &element) = 0;
    virtual bool top(T &element) const = 0;
};

template <typename T>
class ArrayStack : public Stack<T>
{
public:
    ArrayStack(int maxStackSize);
    ~ArrayStack();
    bool isEmpty() const;
    bool isFull() const;
    void display() const;
    bool push(const T &element);
    bool pop(T &element);
    bool top(T &element) const;

protected:
    T *data;
    int topIndex;
    int maxStackSize;
};

template <typename T>
ArrayStack<T>::ArrayStack(int maxStackSize) : maxStackSize(maxStackSize),
                                              data(new T[maxStackSize]),
                                              topIndex(-1){};
template <typename T>
ArrayStack<T>::~ArrayStack()
{
    std::cout << "Deleted" << std::endl;
    delete[] data;
}

template <typename T>
bool ArrayStack<T>::isEmpty() const
{
    return topIndex < 0;
};

template <typename T>
bool ArrayStack<T>::isFull() const
{
    return (maxStackSize - 1) == topIndex;
};

template <typename T>
void ArrayStack<T>::display() const
{
    if (!isEmpty())
    {
        std::cout << "\nThe Stack is:" << std::endl;

        for (int i = topIndex; i >= 0; i--)
        {
            std::cout << data[i] << std::endl;
        }
        std::cout << std::endl;
    }
};

template <typename T>
bool ArrayStack<T>::push(const T &element)
{
    if (!isFull())
    {
        topIndex++;
        data[topIndex] = element;
        return true;
    }
    else
    {
        std::cout << "Stack is full\n";
        return false;
    }
};

template <typename T>
bool ArrayStack<T>::pop(T &element)
{
    if (!isEmpty())
    {
        element = data[topIndex--];
        return true;
    }
    else
    {
        std::cout << "Stack is Empty\n";
        return false;
    }
};

template <typename T>
bool ArrayStack<T>::top(T &element) const
{
    if (!isEmpty())
    {
        element = data[topIndex];
        return true;
    }
    else
    {
        std::cout << "Stack is Empty\n";
        return false;
    }
};
