#pragma once
#include <iostream>

struct BstNode {
    int data;
    BstNode* left;
    BstNode* right;
};

// BST functions
BstNode* GetNewNode(int data);
BstNode* Insert(BstNode* rootptr, int data);
bool search(BstNode* rootptr, int data);
int MaxHeight(BstNode* rootptr);
int MinHeight(BstNode* rootptr);

//void PrintTree(BstNode* rootptr, int space, int indent);

// run
void bstTask();