#ifndef PRODUCT_H
#define PRODUCT
class Product {
	// Return product count
	int ProductCount();
	// Display a single product
	void display();
	void sort();
	Product& retrieve();

	string name;
};
#endif
