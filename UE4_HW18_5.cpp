#include <iostream>

class Stack
{

private:
    int x = 5;
    int mas[5] = { 1,2,3,4,5 };

public:
    void push()
    {
        int a;
        std::cout << "\nType integer:";
        std::cin >> a;
        mas[x++] = a;
    }
    void printStack()
    {
        for (int i = 0; i < x; i++)
        {
            std::cout << mas[i] << " ";
        }
        std::cout << std::endl;
    }
    void pop()
    {
        std::cout << "\nLast integer "<< mas[x-1] << " was removed from stack"<< "\n";
        mas[x--];
    }
};


int main()
{

    Stack* data = new Stack;

    //always growing stack
    for (;;)
    {
        data->push(); //add integer
        data->printStack();
        data->push(); //add integer
        data->printStack();

        data->pop(); //remove last integer
        data->printStack();
    }

    return 0;
}
