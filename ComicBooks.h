// ------------------------------------------------------------------------
// Name: Tomas H Woldemichael
// Date: Feb 11, 2021
// File Name: ComicBooks.h
// Title: PROGRAM 4
// -------------------------------------------------------------------------

#pragma once
#include <iostream>
#include "Items.h"

using namespace std;

class ComicBooks : public Items {
public:
    ComicBooks() : publisher("Tomas W"), grade("Great") {}
    virtual ~ComicBooks() {}

protected:
    string publisher;
    string grade;
};
