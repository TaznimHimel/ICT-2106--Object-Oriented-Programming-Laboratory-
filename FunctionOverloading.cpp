#include <iostream>
using namespace std;
int calc(int);
int calc(int, int);
int main()
{
    int S, a, b;
    cout << "Enter a number: ";
    cin >> S;
    cout << "Square is: " << calc(S) << endl;
    cout << "Enter two numbers: ";
    cin >> a >> b;
    cout << "Addition is: " << calc(a, b);
    return 0;
}

int calc(int x)
{
    return (x * x);
}
int calc(int x, int y)
{
    return (x + y);
}