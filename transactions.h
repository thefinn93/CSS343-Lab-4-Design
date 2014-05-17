#ifndef TRANSACTION_H
#define TRANSACTION_H
class Transaction {
public:
  // Checks out product to customer, creating the Transaction object
  Transaction(Product* productCheckedOut, Customer* customerCheckingOut);
private:
  // The product that the transction is performed upon
  Product* product;
  // The customer that performed the transaction
  Customer* customer;
}
#endif
