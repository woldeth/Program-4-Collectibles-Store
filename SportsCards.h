// ------------------------------------------------------------------------
// Name: Tomas H Woldemichael
// Date: Feb 11, 2021
// File Name: SportCards.h
// Title: PROGRAM 4
// -------------------------------------------------------------------------

#pragma once
#include <iostream>
#include "Items.h"

using namespace std;

class SportCards : public Items
{
public:
    string manufacturer; // manafaturer of SportsCard
    string grade;        // Grade of sports cards

    SportCards() : manufacturer("???"), grade("???") {}           // constructor
    SportCards(string m, string g) : manufacturer(m), grade(g) {} // constructor w/ parameters
    virtual ~SportCards() {}                                      //destructor

    ///--------------------------------- toString ------------------------------------
    // Prints the description of the item
    // Preconditions: None
    // Postconditions: Prints out the description for a SportsCard
    virtual void toString()
    {
        // update toString to add addtional manafatuer and grade
    }

    ///--------------------------------- operator< ------------------------------------
    // Defines lesser than operator for SportCards
    // Preconditions: Two objects of the same subclass
    // Postconditions: Determines the lesser than Object from two SportCards
    virtual bool operator<(const Items &rhs) const
    {
        // use inherited Items::<operator if not from same subclass
        // if from same subclass use this <operator for comparing (ex. Card and Card)
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
