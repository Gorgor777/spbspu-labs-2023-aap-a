#include <iostream>
#include <stdexcept>

#include "transform_string.hpp"
#include "reading_a_string.hpp"

int main()
{
  using namespace belokurskaya;

  const int initial_input_size = 100;
  const int new_memory = 10;

  char* input_str = new char[initial_input_size + 1];
  char* not_input_chars = nullptr;
  char* original_input_str = nullptr;

  try
  {
    input_str = inputString(std::cin);
    not_input_chars = new char[26]{};
    transformString(input_str, not_input_chars);

    std::cout << not_input_chars << "\n";

    original_input_str = resizeStringBuffer(input_str, strlen(input_str), strlen(input_str) + new_memory + 1);

    toLowerCase(original_input_str);
    std::cout << original_input_str << "\n";
    delete[] input_str;
    delete[] not_input_chars;
    delete[] original_input_str;
  }
  catch (const std::bad_alloc& e)
  {
    std::cerr << "Error: " << e.what() << "\n";
    delete[] input_str;
    delete[] not_input_chars;
    delete[] original_input_str;
    return 1;
  }
  catch (const std::logic_error& e)
  {
    std::cerr << "Error: " << e.what() << "\n";
    delete[] input_str;
    delete[] not_input_chars;
    delete[] original_input_str;
    return 1;
  }

  return 0;
}
