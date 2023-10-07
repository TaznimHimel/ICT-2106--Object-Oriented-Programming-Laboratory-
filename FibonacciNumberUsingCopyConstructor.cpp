#include <iostream>

class Fibonacci
{
private:
    unsigned long int f0, f1, fib;
public:
    Fibonacci()
    {
        f0 = 0;
        f1 = 1;
        fib = f0 + f1;
    }
    // Copy constructor
    Fibonacci(const Fibonacci &ptr)
    {
        f0 = ptr.f0;
        f1 = ptr.f1;
        fib = ptr.fib;
    }
    void increment()
    {
        f0 = f1;
        f1 = fib;
        fib = f0 + f1;
    }
    void display()
    {
        std::cout << fib << ' ';
    }
}; // end of class definition
int main()
{
    Fibonacci number;
    for (int i = 0; i < 15; i++)
    { // Use < instead of <=
        number.display();
        number.increment();
    }
    return 0;
}
