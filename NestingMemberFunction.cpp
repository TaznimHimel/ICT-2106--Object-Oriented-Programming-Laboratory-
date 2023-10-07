#include <iostream>
class MathOperations
{
public:
    // Outer function
    void performOperations(int x, int y)
    {
        // Calling the inner functions
        int sum_result = add(x, y);
        // Displaying the results
        std::cout << "Sum: " << sum_result << std::endl;
    }

private:
    // Inner function 1
    int add(int a, int b)
    {
        return a + b;
    }
};

int main()
{
    MathOperations math;

    int num1 = 10;
    int num2 = 5;
    // Call the outer function
    math.performOperations(num1, num2);

    return 0;
}
