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

class SportCards : public Items {
public:

    string manufacturer;
    string grade;

    SportCards() : manufacturer("???"), grade("???") {}
    virtual ~SportCards() {}

    ///--------------------------------- toString ------------------------------------
	// Prints the description of the item
	// Preconditions: None
	// Postconditions: Prints out the description for a SportsCard
    virtual void toString();   



};
