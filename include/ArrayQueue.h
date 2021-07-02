#include <iostream>

template <typename T>
class Queue
{
public:
    virtual bool enqueue(const T &element) = 0;
    virtual bool dequeue(T &element) = 0;
    virtual bool isEmpty() const = 0;
    virtual bool isFull() const = 0;
    virtual void display() const = 0;
    virtual bool front(T &element) const = 0;
    virtual bool back(T &element) const = 0;
};

template <typename T>
class ArrayQueue : public Queue<T>
{
public:
    ArrayQueue(int maxQueueSize);
    bool enqueue(const T &element);
    bool dequeue(T &element);
    bool isEmpty() const;
    bool isFull() const;
    void display() const;
    bool front(T &element) const;
    bool back(T &element) const;

protected:
    T *data;
    int frontIndex;
    int rearIndex;
    int maxQueueSize;
};

template <typename T>
ArrayQueue<T>::ArrayQueue(int maxQueueSize) : maxQueueSize(maxQueueSize),
                                              data(new T[maxQueueSize]),
                                              frontIndex(-1),
                                              rearIndex(-1){};

template <typename T>
bool ArrayQueue<T>::enqueue(const T &element)
{
    if (!isFull())
    {
        rearIndex++;
        data[rearIndex] = element;
        return true;
    }
    else
    {
        std::cout << "Queue is full\n";
        return false;
    }
}
template <typename T>
bool ArrayQueue<T>::isEmpty() const
{
    if (frontIndex == rearIndex)
    {
        return true;
    }
    else
    {
        return false;
    }
}

template <typename T>
bool ArrayQueue<T>::isFull() const
{
    if (rearIndex == (maxQueueSize - 1))
    {
        return true;
    }
    else
    {
        return false;
    }
}

template <typename T>
void ArrayQueue<T>::display() const
{
    if (!isEmpty())
    {
        std::cout << "\nThe Queue is:" << std::endl;

        for (int i = frontIndex + 1; i <= rearIndex; i++)
        {
            std::cout << data[i] << "\t";
        }
        std::cout << std::endl;
        std::cout << std::endl;
    }
};

template <typename T>
bool ArrayQueue<T>::dequeue(T &element)
{
    if (!isEmpty())
    {
        element = data[frontIndex + 1];
        for (int i = 1; i <= rearIndex; i++)
        {
            data[i - 1] = data[i];
        }
        rearIndex--;
        return true;
    }
    else
    {
        std::cout << "Queue is Empty\n";
        return false;
    }
}
template <typename T>
bool ArrayQueue<T>::front(T &element) const
{
    if (!isEmpty())
    {
        element = data[frontIndex + 1];
        return false;
    }
    else
    {
        std::cout << "Queue is Empty\n";
        return false;
    }
}
template <typename T>
bool ArrayQueue<T>::back(T &element) const
{
    if (!isEmpty())
    {
        element = data[rearIndex];
        return false;
    }
    else
    {
        std::cout << "Queue is Empty\n";
        return false;
    }
}