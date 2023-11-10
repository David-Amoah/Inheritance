/* Generated file, do not edit */

#ifndef CXXTEST_RUNNING
#define CXXTEST_RUNNING
#endif

#define _CXXTEST_HAVE_STD
#define _CXXTEST_HAVE_EH
#include <cxxtest/TestListener.h>
#include <cxxtest/TestTracker.h>
#include <cxxtest/TestRunner.h>
#include <cxxtest/RealDescriptions.h>
#include <cxxtest/TestMain.h>
#include <cxxtest/ErrorPrinter.h>

int main( int argc, char *argv[] ) {
 int status;
    CxxTest::ErrorPrinter tmp;
    CxxTest::RealWorldDescription::_worldName = "cxxtest";
    status = CxxTest::Main< CxxTest::ErrorPrinter >( tmp, argc, argv );
    return status;
}
bool suite_newCxxTest_init = false;
#include "..\newCxxTest.h"

static newCxxTest suite_newCxxTest;

static CxxTest::List Tests_newCxxTest = { 0, 0 };
CxxTest::StaticSuiteDescription suiteDescription_newCxxTest( "C:/Users/amoah/CLionProjects/exam10/newCxxTest.h", 23, "newCxxTest", suite_newCxxTest, Tests_newCxxTest );

static class TestDescription_suite_newCxxTest_testMyAccountClass : public CxxTest::RealTestDescription {
public:
 TestDescription_suite_newCxxTest_testMyAccountClass() : CxxTest::RealTestDescription( Tests_newCxxTest, suiteDescription_newCxxTest, 27, "testMyAccountClass" ) {}
 void runTest() { suite_newCxxTest.testMyAccountClass(); }
} testDescription_suite_newCxxTest_testMyAccountClass;

static class TestDescription_suite_newCxxTest_testMyCheckingClass : public CxxTest::RealTestDescription {
public:
 TestDescription_suite_newCxxTest_testMyCheckingClass() : CxxTest::RealTestDescription( Tests_newCxxTest, suiteDescription_newCxxTest, 42, "testMyCheckingClass" ) {}
 void runTest() { suite_newCxxTest.testMyCheckingClass(); }
} testDescription_suite_newCxxTest_testMyCheckingClass;

static class TestDescription_suite_newCxxTest_testMySavingsClass : public CxxTest::RealTestDescription {
public:
 TestDescription_suite_newCxxTest_testMySavingsClass() : CxxTest::RealTestDescription( Tests_newCxxTest, suiteDescription_newCxxTest, 72, "testMySavingsClass" ) {}
 void runTest() { suite_newCxxTest.testMySavingsClass(); }
} testDescription_suite_newCxxTest_testMySavingsClass;

#include <cxxtest/Root.cpp>
const char* CxxTest::RealWorldDescription::_worldName = "cxxtest";
