// ------------------------------------------------------------------------
// Name: Tomas H Woldemichael
// Date: Feb 11, 2021
// File Name: Store.h
// Title: PROGRAM 4
// -------------------------------------------------------------------------

#pragma once
#include <iostream>

#include "Items.h"

using namespace std;

class HashTable {

public:
    
    int arraySize;
    int numOfItems; 
    HashTable(int size, int num) : arraySize(size), numOfItems(num) {}

    virtual ~HashTable(){}
    
    virtual int HashFunction(Items *ptrItem);
    virtual int retrieveFunction(Items *ptrItem);

};
