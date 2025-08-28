#include <iostream>
#include <map>
#include <functional>

#include "001_print_hello/solution_Hello.hpp"
#include "002_sum_two_numbers/solution_SumTwoNums.hpp"
#include "003_BinarySearchTree/solution_BST.hpp"

int main() {
    std::map<std::string, std::function<void()>> tasks = {
        {"printHello", printHelloTask},
        {"sumTwoNumbers", sumTwoNumbersTask},
        {"bst", bstTask}
    };

    while (true) {
        std::cout << "Provide task name: \n if you don't know any type 'help' \n if you want to close type 'exit' \n ('help' / 'exit'): ";
        std::string choice;
        std::cin >> choice;

        if (choice == "exit") break;

        if (choice == "help") {
            std::cout << "Available:\n";
            for (const auto& [name, _] : tasks) {
                std::cout << " - " << name << "\n";
            }
            continue;
        }

        auto it = tasks.find(choice);
        if (it != tasks.end()) {
            it->second();
        }
        else {
            std::cout << "Task not found: " << choice << "\n";
        }
        std::cout << "--------------------------\n";
    }

    return 0;
}