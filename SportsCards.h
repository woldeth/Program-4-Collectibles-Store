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
    SportCards() : manufacturer("Tomas W"), grade("Great") {}
    virtual ~SportCards() {}

protected:
    string manufacturer;
    string grade;
};
