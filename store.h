#ifndef STORE_H
#define STORE_H

class Store {
public:
  // The class object that holds the customers
  CustomerHashTable customer;
  // The class object that holds the products
  Products products;
  // The class object that deals with transactions
  Transactions transactions;
}

#endif
