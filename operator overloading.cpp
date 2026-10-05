#include<iostream>
using namespace std;

class Number
{
    int value;

public:
    Number(int v = 0)
    {
        value = v;
    }

    Number operator-(Number n)
    {
        Number temp;
        temp.value = value - n.value;
        return temp;
    }

    void display()
    {
        cout << value;
    }
};

int main()
{
    Number n1(100);
    Number n2(80);

    Number n3;

    n3 = n1 - n2;

    n3.display();
}
