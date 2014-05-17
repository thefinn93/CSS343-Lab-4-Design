#ifndef TRANSACTIONS_H
#define TRANSACTIONS_H
class Transactions {
public:
  // Checks out product to customer
  checkOut(Product product, Customer customer);
  // Registers that product has been returned by customer
  checkIn(Prodct product, Customer customer);
}
#endif
