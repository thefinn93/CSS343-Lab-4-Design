#ifndef CUSTOMER_H
#define CUSTOMER_H
class Customer {
public:

  Customer(string newName, int newPin);

  // Returns the customer's name
  string getName();

  // Sets the customer's name
  bool setName(string name);

  // Returns true if the specified PIN is correct
  bool validatePin(int possiblePin);

  // Sets the customer's PIN
  bool setPin(int newpin);

  // Displays the specified number of items in history, or all if items is not
  // specified or set to 0
  void displayHistory(int items);
private:
  string name;      // The customer's name
  int pin;          // The customer's PIN
  CustomerHistory history;  // The customer's rental history
}

#endif
