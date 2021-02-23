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
class Items {

public:
    char id;                                            // Coin (M), Comic (C) or Card (S)
    int qty;                                            // amount of items
    int year;                                           // integer year

    Items() : id('?'), qty(1), year(2021){}              // constructor
    virtual ~Items(){}                                   // deconstructor

    ///--------------------------------- toString ------------------------------------
	// Prints the description of the item
	// Preconditions: None
	// Postconditions: Prints the ID, QTY and Year (inheriting classes can update toString)
    virtual void toString();                                                        


};
