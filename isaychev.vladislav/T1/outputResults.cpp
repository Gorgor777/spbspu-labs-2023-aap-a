#include "outputResults.hpp"
#include <iomanip>

void isaychev::outputResults(Shape ** Figures, size_t figuresCount)
{
  double sumOfAreas = 0;
  for (size_t j = 0; j < figuresCount; j++)
  {
    sumOfAreas += Figures[j]->getArea();
  }
  std::cout << std::fixed;
   std::cout << std::setprecision(1) << sumOfAreas << " ";
  for (size_t j = 0; j < figuresCount; j++)
  {
    rectangle_t rect = Figures[j]->getFrameRect();
    std::cout << std::setprecision(1) << rect.pos.x_ - (rect.width / 2) << " ";
    std::cout << std::setprecision(1) << rect.pos.y_ - (rect.height / 2) << " ";
    std::cout << std::setprecision(1) << rect.pos.x_ + (rect.width / 2) << " ";
    std::cout << std::setprecision(1) << rect.pos.y_ + (rect.height / 2) << " ";
  }
  std::cout << "\n";
}
