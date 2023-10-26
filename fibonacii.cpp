#include <iostream>
using namespace std;
class fib
{
    int a, b, c;

public:
    fib(int x, int y)
    {
        a = x;
        b = y;
        c = a + b;
        cout << a << endl;
        cout << b << endl;
        cout << c << endl;
    }

    fib(fib &xx)
    {
        a = xx.b;
        b = xx.c;
        c = a + b;
        cout << c << endl;
    }
};

int main()
{
    fib aa(0, 1);
    fib bb(aa);
    fib cc(bb);
    fib dd(cc);
    fib ee(dd);
    return 0;
}