// Howell Nguyen
// 27hnguyen@csu.fullerton.edu
// @HowieNguyen-bot
// Partners: @AMartinez025

#include <iostream>
#include <string>
#include <vector>

int main(int argc, char* argv[]) {
  std::vector<std::string> arguments{argv, argv + argc};
  if (arguments.size() != 4) {
    std::cout << "error: you must supply three arguments\n";
    return 1;
  }

  std::string protein;
  std::string bread;
  std::string condiment;
  protein = arguments.at(1);
  bread = arguments.at(2);
  condiment = arguments.at(3);
  std::cout << "Your order: A " << protein << " sandwich on " << bread
            << " with " << condiment << ".\n";
  return 0;
}
