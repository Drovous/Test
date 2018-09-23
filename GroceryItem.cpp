#include"GroceryItem.h"
#include<string>
using namespace std;



GroceryItem::GroceryItem() {

}


GroceryItem::GroceryItem(const string&, const int&, const float&, const bool&) {

}


GroceryItem::getName() {
	return _name;
}

GroceryItem::setName(const string&) {

}

GroceryItem::getQuantity() {
	return _quantity;
}

GroceryItem::setQuantity(const int&) {

}

GroceryItem::getUnitPrice() {
	return _unitPrice;
}

GroceryItem::setUnitPrice(const float&) {

}

GroceryItem::isTaxable() {
	return _taxable;
}

GroceryItem::setTaxable(const bool) {

}