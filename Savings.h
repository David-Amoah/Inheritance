// Copyright 2023
// Author: David Amoah

#ifndef EXAM10_SAVINGS_H
#define EXAM10_SAVINGS_H

/*
 * create a class Savings that inherit from class Account.
 * 1. create a default constructor.
 * 2. create a non-default constructor that takes an initial balance.
 * 3. create a method that calculate the daily interest.  Add the daily interest
 * to the account balance.  Return none.
 *
 */

#include "Account.h"


class Savings: public Account{
public:
    Savings();

    Savings(double initBal);

    virtual void daily_interest();
};





#endif //EXAM10_SAVINGS_H
