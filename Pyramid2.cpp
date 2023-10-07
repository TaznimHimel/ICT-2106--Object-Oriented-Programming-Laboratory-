// C++ program to print number
// patterns using while loop
#include <iostream>
using namespace std;
int main()
{
    int rows = 1, columns = 0, n = 5;
    // while loops check the condition and repeat
    // the loop until the condition is false
    while (rows <= n)
    {
        while (columns <= rows - 1)
        {
            // printing number to get required pattern
            cout << rows << " ";
            // incrementing columns value
            columns++;
        }
        columns = 0;
        // incrementing rows value
        rows++;
        cout << endl;
    }
}