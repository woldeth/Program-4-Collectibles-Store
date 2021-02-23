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

class ComicBooks : public Items {

public:
    string publisher;
    string grade;
    ComicBooks() : publisher("???"), grade("???") {}
    ComicBooks(string p, string g) : publisher(p), grade(g) {}
    
    virtual ~ComicBooks() {}

    ///--------------------------------- toString ------------------------------------
	// Prints the description of the item
	// Preconditions: None
	// Postconditions: Prints out the description for a Comicbook
    virtual void toString();   


};
