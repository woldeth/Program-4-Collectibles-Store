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
        Customer *item;                                               // Pointer to customer obj
        Node *left;                                                   // Pointer to left child
        Node *right;                                                  // Pointer to right child
        Node(Customer *i) : item(i), left(nullptr), right(nullptr) {} // Constructor to initialize node
    };

    Node *root; // Root Node of SearchTree

    void insertPrivate(Customer *ptr, Node *&node, bool &flag); // Helper function for insertion of new node - inorder traverals
    void inOrderPrivate(const Node *const &node) const;         // Helper function for Ostream << - preorder taversal

    void makeEmptyPrivate(Node *&node);                                       // Helper function to clear SearchTree - post order traversal
    Node *retrievePrivate(Node *node, const Customer &c1) const; // Helper function to retrieve a comparable from a node

    void removeRootPrivate(); // Helper function to remove the root node



    //Mutators
    bool insert(Customer *ptr); // Inserts a Customer into the tree or increments
    void makeEmpty();           // Removes and deallocates all of the data from the tree (Tree still there)

    //Accessors
    const Customer* retrieve(const Customer &c1) const; // Returns the customer in within the SearchTree if found
};