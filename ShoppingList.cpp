#include <bits/stdc++.h>
using namespace std;
class shoppinglist
{
    string name;
    double price;
    double quantity;

public:
    void readitems()
    {
        cout << "Enter the item name: " << endl;
        cin >> name;
        cout << "Enter the price: " << endl;
        cin >> price;
        cout << "Enter the Quantity: " << endl;
        cin >> quantity;
    }
    void display()
    {
        cout << setw(10) << name;
        cout << setw(10) << price;
        cout << setw(10) << quantity;
        cout << setw(10) << price * quantity << endl;
    }
};
int main()
{
    int n;
    cout << "Enter the item number: " << endl;
    cin >> n;
    shoppinglist item[n];
    for (int i = 0; i < n; i++)
        item[i].readitems();

    cout << setw(30) << "Shopping List" << endl;
    cout << setw(10) << "Item name" << setw(10) << "Price" << setw(10) << "Quantity" << setw(10) << "Total" << endl;
    for (int i = 0; i < n; i++)
    {
        item[i].display();
    }
    return 0;
}