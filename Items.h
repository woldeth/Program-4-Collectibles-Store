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

protected:
    char id;
    int qty;
    int year; 

public:
    Items() : id('Z'), qty(1), year(2021){}              // constructor
    virtual ~Items(){}                                   // deconstructor


};
