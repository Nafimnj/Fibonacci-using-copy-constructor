#include <iostream>
using namespace std;
class Fibonacci
{
    int a, b, c;

public:
    Fibonacci()
    {
        cout << "0" << endl;
    }
    Fibonacci(int x, int y)
    {
        a = x;
        b = y;
        c = a + b;
        cout << c << endl;
    }
    Fibonacci(Fibonacci &x)
    {
        a = x.b;
        b = x.c;
        c = a + b;
        cout << a << "+" << b << "= " << c << endl;
    }
    void show()
    {
        cout << c << endl;
    }
};

int main()
{
    Fibonacci f0;
    Fibonacci f1(0, 1);
    Fibonacci f2(f1);
    Fibonacci f3(f2);
    Fibonacci f4(f3);
    Fibonacci f5(f4);

    return 0;
}