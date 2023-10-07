#include <iostream>
class MyClass
{
private:
    int data;
public:
    MyClass(int value) : data(value) {}
    // Declare a friend function
    friend void displayData(const MyClass &obj);
};
// Define the friend function
void displayData(const MyClass &obj)
{
    std::cout << "Roll: " << obj.data << std::endl;
}
int main()
{
    MyClass obj(2018032);
    // Call the friend function to access private data
    displayData(obj);
    return 0;
}
