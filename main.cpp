//---------------------------------------------------------------------------
// HW3.CPP
// Driver code for testing the Graph class.
// Authors:  Clark Olson and Carol Zander
//---------------------------------------------------------------------------
// This code tests the basic functionality of the class to
// perform Dijkstra's algorithm for CSS 502 Program 3.
// It is not meant to exhaustively test the class.
//
// Assumptions:
//   -- a text file named "HW3.txt" exists in the same directory
//      as the code and is formatted as described in the specifications
//---------------------------------------------------------------------------

#include <iostream>
#include <fstream>
#include "Store.h"
using namespace std;

//-------------------------- main -------------------------------------------
// Tests the Graph class by reading data from "HW3.txt"
// Preconditions:   If lab3.txt file exists, it must be formatted
//                  as described in the lab specifications.

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
    if (!infile3) {
        cerr << "File could not be opened." << endl;
        return 1;
    }

    // create store;
    Store st1;
    st1.buildInventory(infile1);            // initialize item inventoryList
    st1.buildCustomerList(infile2);         // initialize customerList
    st1.processActions(infile3);
    
    

    return 0;
}