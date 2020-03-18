//
// Created by gideo on 3/17/2020.
//

#ifndef UNTITLED_ITEMTOPURCHASE_H
#define UNTITLED_ITEMTOPURCHASE_H
#include<string>
#include <iostream>
using namespace std;

class ItemToPurchase {
public:
    ItemToPurchase();

    ItemToPurchase(const string& itemName, double itemPrice, int itemQuantity);

    void SetName(string nameIn);
    void SetPrice (double priceIn);
    void SetQuantity(int quantityIn);
    string Getname();
    double GetPrice();
    int GetQuantity();

    int getQuantity() const;

    const string &getName() const;

    void setName(const string &itemName);

    double getItemPrice();

    void setItemPrice(double itemPrice);

    void setItemQuantity(int itemQuantity);

private:
    string itemName;
    double itemPrice;
    int itemQuantity;
};
#endif //UNTITLED_ITEMTOPURCHASE_H
