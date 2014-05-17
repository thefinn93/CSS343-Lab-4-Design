#ifndef TRANSACTIONS_H
#define TRANSACTIONS_H
class Transactions {
public:
  // Checks out product to customer
  bool checkOut(Product product, Customer customer);
  
  // Registers that product has been returned by customer
  bool checkIn(Prodct product, Customer customer);
}
#endif
