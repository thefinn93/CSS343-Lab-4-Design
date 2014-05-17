#ifndef CUSTOMER_H
#define CUSTOMER_H
class Customer {
public:

  Customer(string newName, int newPin) {
    
  }

  // Returns the customer's name
  string getName();

  // Sets the customer's name
  bool setName(string name);

  // Returns true if the specified PIN is correct
  bool validatePin(int possiblePin);

  // Sets the customer's PIN
  bool setPin(int newpin);

  //
private:
  string name;      // The customer's name
  int pin;          // The customer's PIN
  LinkedList history;  // The customer's rental history
  HashMap  CurrentlyOut;  // The items the customer has out currently
}
#endif
