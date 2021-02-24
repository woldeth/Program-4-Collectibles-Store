// ------------------------------------------------------------------------
// Name: Tomas H Woldemichael
// Date: Feb 11, 2021
// File Name: Items.h
// Title: PROGRAM 4
// -------------------------------------------------------------------------

#pragma once
#include <iostream>

using namespace std;

// Base class
class Items
{

public:
    char id;  // Coin (M), Comic (C) or Card (S)
    int qty;  // amount of this item in inventory
    int year; // integer year

    Items() : id('?'), qty(1), year(2021) {}                // constructor if nothing passed in
    Items(char i, int q, int y) : id(i), qty(q), year(y) {} // constructor with parameters
    virtual ~Items() {}                                     // deconstructor

    ///--------------------------------- toString ------------------------------------
    // Prints the description of the item
    // Preconditions: None
    // Postconditions: Prints the ID, QTY and Year (inheriting classes can update toString)
    virtual void toString()
    {
        // prints ID, QTY, Year
    }

    ///--------------------------------- operator< ------------------------------------
    // Defines have Items are < than eachother
    // Preconditions: Two objects of the same class
    // Postconditions: Determines the lesser than obj
    virtual bool operator<(const Items &rhs) const
    {
        // compares to see Coin < Comic Book < SportsBook
        // comparing book vs book will be handeled in subclass
        return true;
    }

    ///--------------------------------- hash ------------------------------------
    // Creates a unique integer value from data member variables
    // Preconditions: None
    // Postconditions: returns a unique value that will be used in hash table for index
    virtual int hash() const
    {
        //  hash value some integer value calculated from member variables
        return 0; // hash value;
    }
};
