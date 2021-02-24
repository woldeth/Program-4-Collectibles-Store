// ------------------------------------------------------------------------
// Name: Tomas H Woldemichael
// Date: Feb 11, 2021
// File Name: ComicBooks.h
// Title: PROGRAM 4
// -------------------------------------------------------------------------

#pragma once
#include <iostream>
#include "Items.h"

using namespace std;

class ComicBooks : public Items
{

public:
    string publisher; // string for publisher name
    string grade;     // string for grade of comic book
    ComicBooks() : publisher("?"), grade("?") {}
    ComicBooks(string p, string g) : publisher(p), grade(g) {}

    virtual ~ComicBooks() {}

    ///--------------------------------- toString ------------------------------------
    // Prints the description of the item
    // Preconditions: None
    // Postconditions: Prints out the description for a Comicbook
    virtual void toString()
    {
        // update toString to add addtional publisher and grade
    }

    ///--------------------------------- operator< ------------------------------------
    // Defines lesser than for two comicBooks
    // Preconditions: Two objects of the same subclass
    // Postconditions: Determines the lesser than Object from ComicBooks
    virtual bool operator<(const Items &rhs) const
    {
        // use inherited Items::<operator if not from same subclass
        // if from same subclass use this <operator for comparing (ex. books and books)
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
