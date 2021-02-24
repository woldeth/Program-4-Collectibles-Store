// ------------------------------------------------------------------------
// Name: Tomas H Woldemichael
// Date: Feb 11, 2021
// File Name: Store.h
// Title: PROGRAM 4
// -------------------------------------------------------------------------

#pragma once
#include <iostream>

#include "Items.h"
#include "customer.h"
#include "SearchTreeCustomers.h"
#include "SearchTreeItems.h"
#include "HashTable.h"

const int SIZE = 3079;

using namespace std;

class Store
{

private:
    // Nodes to keep track of all transations
    struct transactionNode
    {
        Items *i;              // pointer to item that was sold
        string transType;      // type of transaction (Buy or Sell)
        transactionNode *next; // next transaction for the customer
    };

    //Node to hold customer obj and Head of transaction list.
    struct customerNode
    {
        Customer *cust;        // customer ptr
        transactionNode *head; // first transaction/ head pointer
    };

    customerNode *custTransactionList[1000]; // max of 1000 customers, 3 digit id = index

    // Node to keep store all pointer to item via the hash
    struct itemNode
    {
        Items *i;       // item in inventoryList
        itemNode *next; // if collision with hash build linked list
    };

    itemNode *inventoryList[SIZE]; //main list of all items in inventory (3079 is a large prime number)

    SearchTreeCustomer bstCustomers; // search tree for the customer objects
    SearchTreeItems bstItems;        // search tree for coins
    HashTable ht;                    // initalize hashTable class

public:
    Store() {}  //constructor
    ~Store() {} //deconstructor

    ///--------------------------------- BuildInventory ------------------------------------
    // Initalizes inventoryList
    // Preconditions: infile has been successfully opened and the file contains
    //                 properly formated data (according to the program specs)
    // Postconditions: All inventory is read from infile and stored in the object
    void buildInventory(ifstream &infile)
    {
        // While not end of file
        // 1. get the first char identify the type
        // 2. if M/C/S create new object
        // 3. Store item in bstItem
        // 4. get Index using hashTable
        // 5. store invertory in inventoryList
    }

    ///--------------------------------- BuildCustomerList ------------------------------------
    // Initalizes customerList
    // Preconditions: infile has been successfully opened and the file contains
    //                 properly formated data (according to the program specs)
    // Postconditions: All customers have been identifed and put into customerList
    void buildCustomerList(ifstream &infile)
    {
        // While not end of file
        // get id, get name
        // create customer obj
        // store customer in bstCustomers
        // update customerNode in custTransactionList[id]
    }

    ///--------------------------------- processAction ------------------------------------
    // Perform actions listed on file
    // Preconditions: infile has been successfully opened and the file contains
    //                 properly formated data (according to the program specs)
    // Postconditions: All actions list on file will be completed
    void processActions(ifstream &infile)
    {
        // While (not end of file)
        // get action (Buy, Sell, Display, Customer, History)

        // if(buy/sell)
        // get customer id
        // create tempItem and hash to get index
        // buyItem() / sellItem() records transaction
        //if(Display)
        //display();
        //if(Customer)
        // get customer id
        // customerTransactions(id);

        //if(history)
        // traverse through bstCustomer inOrder and get id
        // access custTransaction[id]
        // traverse linked list
        // print(customr)
    }

    ///--------------------------------- buyItem ------------------------------------
    // Record the purchase of an item
    // Preconditions: Customer and Item exist in inventoryList
    // Postconditions: Qty will be incremented and record transaction for customer
    void buyItem(Items *ptr, int id)
    {
        // ptr->qty++
        // record transaction on custTransactionList (append node)
    }

    ///--------------------------------- sellItem ------------------------------------
    // Record the selling of an item
    // Preconditions: Customer and Item exist in inventoryList
    // Postconditions: Qty will be decremented and record transaction for customer
    void sellItem(Items *ptr, int id)
    {
        // ptr->qty--
        // record transaction on custTransactionList (append node)
    }

    ///--------------------------------- display ------------------------------------
    // Prints all the items in the inventory
    // Preconditions: None
    // Postconditions: Prints the full inventoryList
    void display()
    {
        //traverse bstItems inorder
        //print out each item
    }

    ///--------------------------------- customerTransations ------------------------------------
    // Prints all transactions for a particular customer
    // Preconditions: None
    // Postconditions: Prints transactions for a particular customer
    void customerTransactions(int id)
    {
        // print name of customer and id
        // get ptr custTransactionList[id]->head
        // while (ptr->next != nullptr)
        // print(transactions)
    }
};
