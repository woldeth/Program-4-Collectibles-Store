// ------------------------------------------------------------------------//
// Name: Tomas H Woldemichael
// Date: January 13, 2021
// File Name: SearchTree.h
// Title: PROGRAM 4

#pragma once

#include <iostream>
#include "Items.h"

using namespace std;

class SearchTreeItems
{
public:
    //Constructors and destructor
    SearchTreeItems(){}  // Constructor creates a BST new root
    ~SearchTreeItems(){} // Destructor

private:
    struct Node
    {
        Items *item;                                               // Pointer to customer obj
        Node *left;                                                // Pointer to left child
        Node *right;                                               // Pointer to right child
        Node(Items *i) : item(i), left(nullptr), right(nullptr) {} // Constructor to initialize node
    };

    Node *root; // Root Node of SearchTree

    void insertPrivate(Items *ptr, Node *&node, bool &flag); // Helper function for insertion of new node - inorder traverals
    void inOrderPrivate(const Node *const &node) const;      // Helper function for Ostream << - preorder taversal

    void makeEmptyPrivate(Node *&node);                       // Helper function to clear SearchTree - post order traversal
    Node *retrievePrivate(Node *node, const Items &c1) const; // Helper function to retrieve a comparable from a node

    void removeRootPrivate(); // Helper function to remove the root node



    //Mutators
    bool insert(Items *ptr); // Inserts a Customer into the tree or increments
    void makeEmpty();        // Removes and deallocates all of the data from the tree (Tree still there)

    //Accessors
    const Items *retrieve(const Items &c1) const; // Returns the customer in within the SearchTree if found
};