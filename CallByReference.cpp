// C program to illustrate Call by Reference
#include <iostream>
using namespace std;

// Function Prototype
void swapx(int &, int &);

// Main function
int main()
{
    int a = 10, b = 20;

    // Pass reference
    swapx(a, b);

    cout << "In the Caller:\n";
    cout << "a = " << a << " b = " << b << endl;

    return 0;
}

// Function to swap two variables
// by references
void swapx(int &x, int &y)
{
    int t;

    t = x;
    x = y;
    y = t;

    cout << "In the Caller:\n";
    cout << "x = " << x << " y = " << y << endl;
}
