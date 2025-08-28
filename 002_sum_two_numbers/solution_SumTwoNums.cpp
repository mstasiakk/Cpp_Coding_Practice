#include "solution_SumTwoNums.hpp"
#include <iostream>

void sumTwoNumbersTask() {
    std::cout << "[Task] Sum Two Numbers\n";
    std::cout << "Input example: a=2, b=3\n";

    int a, b;
    std::cout << "First number: ";
    std::cin >> a;
    std::cout << "Second number: ";
    std::cin >> b;

    std::cout << "Result: " << (a + b) << "\n";
}