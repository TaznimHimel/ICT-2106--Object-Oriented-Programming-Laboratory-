#include <iostream>
class MyClass
{
public:
    MyClass()
    {
        std::cout << "Constructor called" << std::endl;
    }
    ~MyClass()
    {
        std::cout << "Destructor called" << std::endl;
    }
};
int main()
{
    std::cout << "Creating an object of MyClass" << std::endl;
    MyClass obj; // Constructor called
    std::cout << "Object is going out of scope" << std::endl;
    // Destructor will be called automatically when obj goes out of scope
    // Destructor called
    std::cout << "Program exiting" << std::endl;
    return 0;
}
