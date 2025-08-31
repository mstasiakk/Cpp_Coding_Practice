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

bool search(BstNode* rootptr, int data) {
    if (rootptr == nullptr) return false;
    else if (rootptr->data == data) return true;
    else if (rootptr->data > data) return search(rootptr->left, data);
    else search(rootptr->right, data);
}

int MaxHeight(BstNode* rootptr)
{
    if (rootptr == nullptr) return 0;

    int left_height = MaxHeight(rootptr->left);
    int right_height = MaxHeight(rootptr->right);

    return 1 + max(left_height, right_height);

}

int MinHeight(BstNode* rootptr)
{
    if (rootptr == nullptr) return 0;

    int left_height = MinHeight(rootptr->left);
    int right_height = MinHeight(rootptr->right);

    return 1 + min(left_height, right_height);
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
    cout << "[Task] Binary Search Tree\n";
    BstNode* rootPtr = nullptr;

    int n, value;
    string option;
    cout << "How many elements of the tree do you want to have? ";
    cin >> n;
    for (int i = 0; i < n; ++i) {
        std::cout << "Provide element " << (i + 1) << ": ";
        std::cin >> value;
        rootPtr = Insert(rootPtr, value);
    }

    cout << "Tree created.\n";
    cout << "Are you interested in checking if specific data is present in the tree?\n Type 'yes' or 'no'";
    cin >> option;

    if (option == "yes")
    {
        int number;
        cout << "Provide number: ";
        cin >> number;

        bool found = search(rootPtr, number);
        if (found)
            cout << "Number " << number << " is present in the tree.\n";
        else
            cout << "Number " << number << " is NOT present in the tree.\n";
    }

    cout << "Are you interested in checking maximum or minimum height of the tree?\n Type 'min' or 'max' or 'no' if you are not interested\n";
    cin >> option;

    if (option == "min") {cout << "Minimum depth of the tree is: " << MinHeight(rootPtr) << endl;}
    else if (option == "max") {cout << "Maximum depth of the tree is: " << MaxHeight(rootPtr) << endl;}

    // cout << "Tree visualization In order: ";
    // PrintTree(rootPtr);
    // cout << "\n";
 
}

