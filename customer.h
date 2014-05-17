#ifndef CUSTOMER_H
#define CUSTOMER_H
class Customer {
public:
  string getName();             // Returns the customer's name
  bool setName(string name);    // Sets the customer's name
  bool rent(Product product);   // Checks out the specified product to the customer
  bool return(Product product); // Checks the specified product back in
  bool validatePin(int possiblePin); // Returns true if the specified PIN is correct
  bool setPin(int newpin);      // Sets the customer's PIN
  
private:
  string name;      // The customer's name
  int pin;          // The customer's PIN
  LinkedList history;  // The customer's rental history
  HashMap  CurrentlyOut;  // The items the customer has out currently
}
#endif
