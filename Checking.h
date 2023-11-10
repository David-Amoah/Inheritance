// Copyright 2023
// Author: David Amoah

#ifndef EXAM10_CHECKING_H
#define EXAM10_CHECKING_H

#include "Account.h"


/*
 * create a class Checking that inherit from class Account.
 * 1. create a default constructor.
 * 2. create a non-default constructor that takes an initial balance.
 * 3. create a method that calculate the daily interest.  Add the daily interest
 * to the account balance.  Return none.
 *
 */

class Checking: public Account {
public:
    Checking();

    Checking(double initBal);

    virtual void daily_interest();
};




#endif //EXAM10_CHECKING_H
