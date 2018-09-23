#include"GroceryItem.h"
#include<string>
using namespace std;



GroceryItem::GroceryItem() {

}


GroceryItem::GroceryItem(const string&, const int&, const float&, const bool&) {

}


string GroceryItem::getName() {
	return _name;
}

void GroceryItem::setName(const string&) {

}

int GroceryItem::getQuantity() {
	return _quantity;
}

void GroceryItem::setQuantity(const int&) {

}

float GroceryItem::getUnitPrice() {
	return _unitPrice;
}

void GroceryItem::setUnitPrice(const float&) {

}

bool GroceryItem::isTaxable() {
	return _taxable;
}

void GroceryItem::setTaxable(const bool) {

}