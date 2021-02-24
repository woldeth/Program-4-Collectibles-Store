// ------------------------------------------------------------------------
// Name: Tomas H Woldemichael
// Date: Feb 23, 2021
// File Name: main.cpp
// Title: PROGRAM 4
// -------------------------------------------------------------------------

#include <iostream>
#include <fstream>
#include "Store.h"
using namespace std;

//-------------------------- main -------------------------------------------

int main()
{
    ifstream infile1("input.txt");
    if (!infile1)
    {
        cerr << "File could not be opened." << endl;
        return 1;
    }

    ifstream infile2("input2.txt");
    if (!infile2)
    {
        cerr << "File could not be opened." << endl;
        return 1;
    }

    ifstream infile3("input3.txt");
    if (!infile3)
    {
        cerr << "File could not be opened." << endl;
        return 1;
    }

    // create store;
    Store st1;
    st1.buildInventory(infile1);    // initialize item inventoryList
    st1.buildCustomerList(infile2); // initialize customerList
    st1.processActions(infile3);    // Completes all actions for store

    return 0;
}