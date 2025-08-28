#include "solution_Hello.hpp"
#include <iostream>

void printHelloTask() {
    std::cout << "[Task] Print Hello\n";
    std::cout << "Example: Name = \"Alice\"\n";

    std::string name;
    std::cout << "Provide your name: ";
    std::cin >> name;

    std::cout << "Hello, " << name << "!\n";
}