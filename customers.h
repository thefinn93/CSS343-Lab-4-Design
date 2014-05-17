#ifndef CUSTOMERS_H
#define CUSTOMERS_H

class Customers {
public:
  // Returns the new customer's ID number on success, -1 on failure
  int add(string name);

  // Returns the customer with the specified ID
  Customer find(int id);

  // Removes a customer from the database, returns true on success
  bool remove(int id);

private:
  CustomerHashTable customerlist;
}
#endif
