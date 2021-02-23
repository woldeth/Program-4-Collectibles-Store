// ------------------------------------------------------------------------
// Name: Tomas H Woldemichael
// Date: Feb 11, 2021
// File Name: Items.h
// Title: PROGRAM 4
// -------------------------------------------------------------------------

#pragma once
#include <iostream>
#include "Items.h"

using namespace std;


//coin
class Coins : public Items {
public:
    int grade;                  // Grade of Coin

    Coins(): grade(-1){}         // Constructor 
    Coins(int g): grade(g){}    // Constructor

    virtual ~Coins() {}         // Destructor 

    ///--------------------------------- toString ------------------------------------
	// Prints the description of the item
	// Preconditions: None
	// Postconditions: Prints out the description for a coin
    virtual void toString();     

};
