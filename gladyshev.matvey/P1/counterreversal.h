#ifndef COUNTERREVERSAL_H
#define COUNTERREVERSAL_H

namespace gladyshev
{
  struct CounterReversal
  {
    CounterReversal();
    void operator()(long long int number);
    unsigned long long int operator()() const;
  public:
    unsigned long long counterznak;
  private:
    long long int number;
    long long int supnumber;
  };
}
#endif
