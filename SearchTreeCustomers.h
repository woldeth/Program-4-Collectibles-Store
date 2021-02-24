// ------------------------------------------------------------------------
// Name: Tomas H Woldemichael
// Date: Feb 23, 2021
// File Name: SearchTreeCustomers.h
// Title: PROGRAM 4
// -------------------------------------------------------------------------

#pragma once

#include <iostream>
#include "customer.h"

using namespace std;

class SearchTreeCustomer
{
public:
    //Constructors and destructor
    SearchTreeCustomer(){}  // Constructor creates a BST new root
    ~SearchTreeCustomer(){} // Destructor
private:
    struct Node
    {
        Customer *item;                                               // Pointer to customer object
        Node *left;                                                   // Pointer to left child
        Node *right;                                                  // Pointer to right child
        Node(Customer *i) : item(i), left(nullptr), right(nullptr) {} // Constructor to initialize node
    };

    Node *root; // Root Node of custSearchTree

    ///--------------------------------- Insert ------------------------------------
    // Takse ptr to customer and creates node to put in BST
    // Preconditions: unique customer in bst     
    // Postconditions: Nodes is inseerted in bst
    bool insert(Customer *ptr);

    ///--------------------------------- makeEmpty ------------------------------------
    // clears all dynamicall allocated memory
    // Preconditions: none    
    // Postconditions: bst is cleared out completely 
    void makeEmpty();        

    ///--------------------------------- traverseInorder ------------------------------------
    // Traverse the customer tree to print out all transactions
    // Preconditions: custTransactionList is populated with transactions
    // Postconditions: All transactions will be printed inorder of alpha numeric of customer 
    const void traverseInorder() const; 
};