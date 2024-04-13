#include <iostream>
#include "Sales_item.h"

int main() {
  Sales_item total;
  if (std::cin >> total) {
    Sales_item temp;
    while (std::cin >> temp)
      total += temp;
  } else {
    std::cout << "No data" << std::endl;
  }
  std::cout << total << std::endl;
  return 0;
}
