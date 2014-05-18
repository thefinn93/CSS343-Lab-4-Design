#ifndef TRANSACTION_H
#define TRANSACTION_H
class Transaction {
public:
  // An item in the transaction ledger. product was action'd by customer.
  // Action can be either 0 (check out) or 1 (check in).
  Transaction(Product* product, Customer* customer, int type);

  // The product that the transction is performed upon
  Product* product;

  // The customer that performed the transaction
  Customer* customer;

  // What type of transaction this is
  int type;

  // These are going to be part of a linked list, so we need a next and previous
  Transaction* older;
  Transaction* newer;
}
#endif
