// ------------------------------------------------------------------------
// Name: Tomas H Woldemichael
// Date: Feb 23, 2021
// File Name: Coins.h
// Title: PROGRAM 4
// -------------------------------------------------------------------------

#pragma once
#include <iostream>
#include "Items.h"

using namespace std;

//coin
class Coins : public Items
{
public:
    int grade; // Grade of Coin

    Coins() : grade(-1) {}     // Constructor if nothing passed in
    Coins(int g) : grade(g) {} // Constructor with parameters

    virtual ~Coins() {} // Destructor

    ///--------------------------------- toString ------------------------------------
    // Prints the description of the item
    // Preconditions: None
    // Postconditions: Prints out the description for a coin
    virtual void toString()
    {
        // update toString to add addtional grade for coin
    }

    ///--------------------------------- operator< ------------------------------------
    // Defines lesser than operator for coin
    // Preconditions: Two objects of the same subclass
    // Postconditions: Determines the lesser than Object from Coins
    virtual bool operator<(const Items &rhs) const
    {
        // use inherited Items::<operator if not from same subclass
        // if from same subclass use this <operator for comparing (ex. coins and coins)
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
