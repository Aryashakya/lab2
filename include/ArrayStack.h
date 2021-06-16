template <typename T>
class Stack
{
public:
    virtual bool isEmpty() = 0;
    virtual bool isFull() = 0;
    virtual T push(const T &element);
    virtual T pop() = 0;
    virtual T top() = 0;
};

template <typename T>
class ArrayStack : public Stack
{
public:
    ArrayStack(int size);
    bool isEmpty() = 0;
    bool isFull() = 0;
    T push(const T &element);
    T pop();
    T top();

protected:
    T *data;
    int topIndex;
    int size;
};