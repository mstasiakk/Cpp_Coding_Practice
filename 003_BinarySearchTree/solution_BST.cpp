// Binary search tree - Implementation in c++
#include <iostream>
#include <iomanip>
#include "solution_BST.hpp"

using namespace std;

BstNode* GetNewNode(int data) {
    BstNode* newNode = new BstNode();
    newNode->data = data;
    newNode->left = newNode->right = nullptr;
    return newNode;
}

BstNode* Insert(BstNode* rootptr, int data) {
    if (rootptr == nullptr) {
        rootptr = GetNewNode(data);
    }
    else if (data <= rootptr->data) {
        rootptr->left = Insert(rootptr->left, data);
    }
    else {
        rootptr->right = Insert(rootptr->right, data);
    }
    return rootptr;
}

/*
// This function needs to be corrected
void PrintTree(BstNode* root, int space = 0, int indent = 4) {
    // indent -> area between tree levels (vertically)
    // space -> horizontal indentation between tree levels
    if (!root) return;

    space += indent;

    // right branch printing
    PrintTree(root->right, space);

    // root printing
    std::cout << std::endl;
    for (int i = indent; i < space; i++)
        std::cout << " ";
    std::cout << root->data << "\n";

    // left branch printing
    PrintTree(root->left, space);
}*/

// Fuunction called from main to run simulation of BST
void bstTask() {
    std::cout << "[Task] Binary Search Tree\n";
    BstNode* rootPtr = nullptr;

    int n, value;
    std::cout << "How many elements of the tree do you want to have? ";
    std::cin >> n;
    for (int i = 0; i < n; ++i) {
        std::cout << "Provide element " << (i + 1) << ": ";
        std::cin >> value;
        rootPtr = Insert(rootPtr, value);
    }

    std::cout << "Tree created.\n\n";

    // std::cout << "Tree visualization In order: ";
    // PrintTree(rootPtr);
    // std::cout << "\n";
 
}

