#include <iostream>
#include <map>
#include <functional>

#include "001_print_hello/solution_Hello.hpp"
#include "002_sum_two_numbers/solution_SumTwoNums.hpp"
#include "003_BinarySearchTree/solution_BST.hpp"
#include "004_TwoSumIndex/solution_TwoSumIdx.hpp"
#include "005_BubbleSort/solution_BubbleSort.hpp"

using namespace std;

int main() {
    map<string, function<void()>> tasks = {
        {"printHello", printHelloTask},
        {"sumTwoNumbers", sumTwoNumbersTask},
        {"bst", bstTask},
        {"TwoSumIdx", TwoSumIdx},
        {"bubbleSort", bubbleSort_task}
    };

    while (true) {
        cout << "Provide task name: \n if you don't know any type 'help' \n if you want to close type 'exit' \n ('help' / 'exit'): ";
        string choice;
        cin >> choice;

        if (choice == "exit") break;

        if (choice == "help") {
            cout << "Available:\n";
            for (const auto& [name, _] : tasks) {
                cout << " - " << name << "\n";
            }
            continue;
        }

        auto it = tasks.find(choice);
        if (it != tasks.end()) {
            it->second();
        }
        else {
            cout << "Task not found: " << choice << "\n";
        }
        cout << "--------------------------\n";
    }

    return 0;
}