//
// Created by gideo on 3/17/2020.
//

#include "ItemToPurchase.h"

int ItemToPurchase::GetQuantity() const {
    return itemQuantity;
}

const string &ItemToPurchase::GetName() const {
    return itemName;
}

void ItemToPurchase::SetName(const string &itemName) {
    ItemToPurchase::itemName = itemName;
}

double ItemToPurchase::getItemPrice() const {
    return itemPrice;
}

void ItemToPurchase::setItemPrice(double itemPrice) {
    ItemToPurchase::itemPrice = itemPrice;
}

void ItemToPurchase::setItemQuantity(int itemQuantity) {
    ItemToPurchase::itemQuantity = itemQuantity;
}
