#pragma once

#include <string>
using namespace std;

class GroceryItem {
private:
    string _name;
    int _quantity;
    float _unitPrice;
    bool _taxable;

public:
    GroceryItem();
    GroceryItem(const string&, const int&, const float&, const bool&);

    string getName() const;//return name
    void setName(const string&);
    int getQuantity() const;//return Quantity
    void setQuantity(const int&);
    float getUnitPrice() const;// return price
    void setUnitPrice(const float&);
    bool isTaxable() const;//return whether its taxable or not
    void setTaxable(const bool&);
};
