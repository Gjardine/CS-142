#include <iostream>
#include <iomanip>
#include<string>
#include<fstream>
#include "ItemToPurchase.h"


using namespace std;

int main() {
    string name;
    int quantity;
    double price;

    ItemToPurchase item1;
    ItemToPurchase item2;

    cout << "Item 1" << endl;
    cout << "Enter the item name: " << endl;
    getline(cin, name);
    cout << "Enter the item price: " << endl;
    cin >> price;
    cout << "Enter the item quantity: " << endl;
    cin >> quantity;
    item1.SetName(name);
    item1.SetPrice(price);
    item1.SetQuantity(quantity);


    return 0;

}