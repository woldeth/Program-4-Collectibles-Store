// ------------------------------------------------------------------------
// Name: Tomas H Woldemichael
// Date: Feb 23, 2021
// File Name: customer.h
// Title: PROGRAM 4
// -------------------------------------------------------------------------

#pragma once
#include <iostream>
#include <string>

using namespace std;

class Customer
{

public:
    int id;      // 3 digit id
    string name; // name of customr

    Customer() : id(-1), name("???") {}           // Constructor if nothing passed in
    Customer(int i, string n) : id(i), name(n) {} // Constructor with parameters
    ~Customer() {}

    ///--------------------------------- operator< ------------------------------------
    // Defines lesser than operator for Customer
    // Preconditions: Two objects of the same class
    // Postconditions: Determines the lesser than Object from customers
    bool operator<(const Customer &rhs) const
    {
        // customers will compare names to determine for alphanumeric ordering
        return true;
    }
};
