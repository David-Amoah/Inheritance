//Copyright 2023
// Author: David Amoah

#ifndef EXAM10_NEWCXXTEST_H
#define EXAM10_NEWCXXTEST_H


#ifndef NEWCXXTEST_H
#define NEWCXXTEST_H



#include "Checking.h"
#include "Savings.h"
#include "Account.h"
#include <iostream>

using std::cout;
using std::endl;

#include <cxxtest/TestSuite.h>

class newCxxTest : public CxxTest::TestSuite {
public:


    void testMyAccountClass() {
        Account Account1;
        Account Account3 = Account(40.00);

        Account Account2;
        Account2.deposit(50.00);
        Account2.withdraw(20.00);

        TS_ASSERT_DELTA(Account1.get_balance(),0,0.0001);
        TS_ASSERT_DELTA(Account2.get_balance(),30.00,0.0001);
        TS_ASSERT_DELTA(Account3.get_balance(),40.00,0.0001);
        TS_ASSERT_THROWS_NOTHING(Account1.daily_interest());

    }

    void testMyCheckingClass() {
        Checking myCheck1;
        Checking myCheck2;
        Checking myCheck3 = Checking(30000);

        myCheck1.deposit(1200.00);

        TS_ASSERT_DELTA(myCheck1.get_balance(),1200.00,0.0001);
        TS_ASSERT_DELTA(myCheck2.get_balance(),0.0,0.0001);
        TS_ASSERT_DELTA(myCheck3.get_balance(),30000,0.0001);

        // This is to check that the withdrawal method works
        myCheck1.withdraw(120.25);
        TS_ASSERT_DELTA(myCheck1.get_balance(),1079.75,0.0001);

        myCheck1.daily_interest();
        myCheck2.daily_interest();
        myCheck3.daily_interest();


        cout << endl;
        cout << myCheck1.get_balance();

        cout << endl;
        cout << myCheck3.get_balance();

        // This is to check that myCheck2 return 0 even after the daily interest method has been applied
        TS_ASSERT_DELTA(myCheck2.get_balance(),0.0,0.0001);
    }

    void testMySavingsClass() {
        Savings save1;
        Savings save2;
        Savings save3 = Savings(50000);

        TS_ASSERT_DELTA(save1.get_balance(),0.0,0.0001);

        save2.deposit(15000);
        TS_ASSERT_DELTA(save2.get_balance(),15000,0.0001);

        save2.withdraw(400);
        TS_ASSERT_DELTA(save2.get_balance(),14600,0.0001);

        save2.daily_interest();
        cout << endl;
        cout << save2.get_balance();

    }


};
#endif /* NEWCXXTEST_H */



#endif //EXAM10_NEWCXXTEST_H
