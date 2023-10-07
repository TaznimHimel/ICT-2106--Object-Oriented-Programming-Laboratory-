#include <iostream>
// Global variable
int globalVariable = 10;
class MyClass
{
public:
    // Class-specific variable
    static int classVariable;
    // Class-specific function
    static void printClassVariable()
    {
        std::cout << "Class Variable: " << classVariable << std::endl;
    }
};
// Initialize the class-specific variable
int MyClass::classVariable = 20;
int main()
{
    // Access the global variable using the scope resolution operator
    std::cout << "Global Variable: " << ::globalVariable << std::endl;
    // Access the class-specific variable and function using the scope resolution operator
    MyClass::printClassVariable();
    return 0;
}