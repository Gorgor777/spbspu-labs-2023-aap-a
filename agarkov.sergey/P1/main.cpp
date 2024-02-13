#include <iostream>
#include <stdexcept>

#include "PythTripleCounter.hpp"

int main()
{
  int num = 0;
  agarkov::PythTripleCounter pyth_triple_counter;
  do
  {
    std::cin >> num;

    if (!std::cin)
    {
      std::cerr << "Is not a sequence\n";
      return 2;
    }
    else if (num != 0)
    {
      pyth_triple_counter(num);
    }
  }
  while (num != 0);
  std::cout << pyth_triple_counter.getCount() <<"\n";
}