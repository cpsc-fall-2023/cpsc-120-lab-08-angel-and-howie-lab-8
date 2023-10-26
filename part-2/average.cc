// Howell Nguyen
// 27hnguyen@csu.fullerton.edu
// @HowieNguyen-bot
// Partners: @AMartinez025

#include <iostream>
#include <string>
#include <vector>

int main(int argc, char* argv[]) {
  std::vector<std::string> arguments{argv, argv + argc};
  if (arguments.size() <= 1) {
    std::cout << "error: you must supply at least one number";
    return 1;
  }

  double sum{0.0};
  for (std::string& argument : arguments) {
    if (argument == arguments.at(0)) {
      continue;
    }
    sum = sum + std::stod(argument);
  }

  double average{0.0};
  average = sum / static_cast<double>(arguments.size() - 1);
  std::cout << "average = " << average << "\n";
  return 0;
}
