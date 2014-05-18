#ifndef CUSTOMERHISTORY_H
#define CUSTOMERHISTORY_H
class CustomerHistory {
public:
  // Head and tail pointers
  Transaction* oldest;
  Transaction* newest;

  void add(Transaction* newTransaction);

}
#endif
