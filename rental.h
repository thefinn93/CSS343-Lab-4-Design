#ifndef RENTAL_H
#define RENTAL_H
class Rental : public Transaction {
public:
  // Registers that product has been returned by customer
  bool checkIn();
private:
  // Whether or not the product has been returned
  bool checkedOut;
}
#endif
