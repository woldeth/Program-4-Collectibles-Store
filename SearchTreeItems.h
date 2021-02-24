// ------------------------------------------------------------------------//
// Name: Tomas H Woldemichael
// Date: January 13, 2021
// File Name: SearchTree.h
// Title: PROGRAM 4
// -------------------------------------------------------------------------
#pragma once

#include <iostream>
#include "Items.h"

using namespace std;

class SearchTreeItems
{
public:
    //Constructors and destructor
    SearchTreeItems() {}  // Constructor creates a BST new root
    ~SearchTreeItems() {} // Destructor

private:
    struct Node
    {
        Items *item;                                               // Pointer to customer obj
        Node *left;                                                // Pointer to left child
        Node *right;                                               // Pointer to right child
        Node(Items *i) : item(i), left(nullptr), right(nullptr) {} // Constructor to initialize node
    };

    Node *root; // Root Node of SearchTree

    ///--------------------------------- Insert ------------------------------------
    // Take ptr to Item and creates node to put in BST
    // Preconditions: unique item in bst
    // Postconditions: Nodes is inseerted in bst
    bool insert(Items *ptr); 

    ///--------------------------------- makeEmpty ------------------------------------
    // clears all dynamicall allocated memory
    // Preconditions: none
    // Postconditions: bst is cleared out completely
    void makeEmpty(); 

    ///--------------------------------- traverseInorder ------------------------------------
    // Traverse the item tree to print all items in inventory in order (coin, commic, sport cars)
    // Preconditions: Items are sorted in binaryST
    // Postconditions: Current inventory will be printed in order for display function
    const void traverseInorder() const;
};