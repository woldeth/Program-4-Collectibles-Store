// ------------------------------------------------------------------------
// Name: Tomas H Woldemichael
// Date: Feb 11, 2021
// File Name: customer.h
// Title: PROGRAM 4
// -------------------------------------------------------------------------

#pragma once
#include <iostream>
#include <string>

using namespace std;

class Customer {

public:
    int id;
    string name;

    Customer() : id(-1) , name("???") {}
    Customer(int i, string n) : id(i) , name(n) {}
    ~Customer(){}

    bool operator<(const Customer &rhs) const { return true;}




};
