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

class Store {

private:
    struct transactionNode {
        Items* i;               // pointer to item that was sold
        string type;            // type of transaction (Buy or Sell)
        transactionNode *next;  // next transaction for the customer 
    };

    struct customerNode {
        int id;                 // customer 3 digit code
        string name;            // name of customer
        transactionNode *head;  // first transaction
    };

    struct itemNode {
        Items *i;               // item in inventoryList
        itemNode *next;         // if collision with hash build linked list
    };

    itemNode* inventoryList[1543];                 //main list of all items in inventory (1543 is a large prime number)
    customerNode* custTransactionList[1000];       // max of 1000 customers, 3 digit id = index 

public:
    Store(){}   //constructor
    ~Store(){}  //deconstructor

    ///--------------------------------- BuildInventory ------------------------------------
	// Initalizes inventoryList
	// Preconditions: infile has been successfully opened and the file contains
    //                 properly formated data (according to the program specs)
	// Postconditions: All inventory is read from infile and stored in the object
    void buildInventory(ifstream &infile){

        // While not end of file 
            // 1. get the first char identify the type
            // 2. if M/C/S build that type of object
            // 3. Hash using key and store in private inventoryList 
    }

    ///--------------------------------- BuildCustomerList ------------------------------------
	// Initalizes customerList
	// Preconditions: infile has been successfully opened and the file contains
    //                 properly formated data (according to the program specs)
	// Postconditions: All customers have been identifed and put into customerList
    void buildCustomerList(ifstream &infile) {
        // While not end of file 
            // get id 
            // get name
            // update custTransactionList[id] 
    }

    ///--------------------------------- procesAction ------------------------------------
	// perform actions listed on file
	// Preconditions: infile has been successfully opened and the file contains
    //                 properly formated data (according to the program specs)
	// Postconditions: All actions list on file will be completed
    void processActions(ifstream &infile) {
        // While not end of file 
            // get actions Buy, Sell, Display, Customer, History
        
            // if(buy/sell)
                    // get customer id 
                    // retrieve ptr to item with HASH FUNCTION item in inventory list
                    // buyItem() or sellItem() (record transaction)
            //if(Display)
                    //display();
            //if(Customer)
                    // go to index in custTrasactionList
                    // Traverse link list and print items

            //if(history)
                // traverse through BST with key pair
                // access index in 
    }

    ///--------------------------------- buyItem ------------------------------------
	// Record the purchase of an item
	// Preconditions: Customer and Item exist in inventoryList
	// Postconditions: Qty will be incremented and record transaction for customer 
    void buyItem(Items *ptr, int id) {
       // ptr->qty++ 
       // record transaction on custTransactionList (append node)
    }

    ///--------------------------------- sellItem ------------------------------------
	// Record the selling of an item
	// Preconditions: Customer and Item exist in inventoryList
	// Postconditions: Qty will be decremented and record transaction for customer 
    void sellItem(Items *ptr, int id) {
       // ptr->qty-- 
       // record transaction on custTransactionList (append node)
    }

};
