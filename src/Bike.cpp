#include "Bike.h"

#include <chrono>
#include <iostream>
#include <thread>

using namespace std::chrono_literals;

Bike::Bike() {}

void
Bike::run(const Road& road)
{
  std::system("clear");
  for (unsigned position = 0; position < road.getRoadLength(); ++position) {

    for (unsigned i = 0; i < road.getRoadLength(); ++i) {
      std::cout << " ";
      if (i == position) {
        std::cout << "  __o";
      }
    }
    std::cout << std::endl;

    for (unsigned i = 0; i < road.getRoadLength(); ++i) {
      std::cout << " ";
      if (i == position) {
        std::cout << "_ \\<_";
      }
    }
    std::cout << std::endl;

    for (unsigned i = 0; i < road.getRoadLength(); ++i) {

      if (i < position) {
        std::cout << ".";
      } else if (i == position) {
        std::cout << "(_)/(_)";
      } else {
        std::cout << ".";
      }
    }
    std::cout << std::endl;
    std::this_thread::sleep_for(50ms);
    std::system("clear");
  }
}
