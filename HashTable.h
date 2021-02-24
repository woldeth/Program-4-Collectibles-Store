// ------------------------------------------------------------------------
// Name: Tomas H Woldemichael
// Date: Feb 23, 2021
// File Name: Store.h
// Title: PROGRAM 4
// -------------------------------------------------------------------------

#pragma once
#include <iostream>

#include "Items.h"

using namespace std;

class HashTable
{

public:
    int arraySize; // size of inventoryList in Store
    HashTable(int size) : arraySize(size) {}
    ~HashTable() {}

    ///--------------------------------- retrieveIndex ------------------------------------
    // returns the index of a particular Item
    // Preconditions: Class has a hash function and a valid size for inventory list
    // Postconditions: Returns the index of where the inventory should be stored in hash array
    int retrieveIndex(Items *ptrItem)
    {
        // index = ptrItem->hash() % arraySize;
        // return index
        return 0;
    }
};
