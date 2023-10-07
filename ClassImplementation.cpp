#include <iostream>
using namespace std;
class Employee
{
public:
    int Roll;
    string Name;
};

int main()
{
    Employee Himel;
    Himel.Roll = 2018032;
    Himel.Name = "Himel";
    cout << "Employee having Roll No. " << Himel.Roll << " is " << Himel.Name << endl;
}