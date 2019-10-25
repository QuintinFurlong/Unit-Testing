//#include "pch.h"
#include "CppUnitTest.h"
#include <iostream>
#include <assert.h>

#include "../ProductionProject/Production.h"

using namespace std;
using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTest1
{
	TEST_CLASS(UnitTest1)
	{
	public:
		
		TEST_METHOD(TestMethod1)
		{
			Production p;

			int a = 10;

			cout << p.someMethod(a) << endl;
			assert(p.someMethod(a) == 0);
			//assert(p.someMethod(a) == 1);
			//cin.get();
		}
		TEST_METHOD(TestMethod2)
		{
			Production p;

			int arrayTest[] = { 1,-1,47,1,1,1 };
			assert(p.checkBetweenOneAnd46(arrayTest) == false);
		}
		TEST_METHOD(TestMethod3)
		{
			Production p;

			int arrayTest[] = { 1,2,3,4,5,6 };
			assert(p.checkBetweenOneAnd46(arrayTest) == true);
		}
		TEST_METHOD(TestMethod4)
		{
			Production p;

			int arrayTest[] = { 1,1,1,1,1,1 };
			assert(p.checkNoRepeats(arrayTest) == false);
		}
		TEST_METHOD(TestMethod5)
		{
			Production p;

			int arrayTest[] = { 1,1,1,1,1,1 };
			assert(p.checkNoRepeats(arrayTest) == false);
		}
		TEST_METHOD(TestMethod6)
		{
			Production p;

			int arrayTest[] = { 1,2,3,4,5,5 };
			assert(p.checkNoRepeats(arrayTest) == false);
		}
		TEST_METHOD(TestMethod7)
		{
			Production p;

			int arrayTest[] = { 1,2,3,4,5,6 };
			assert(p.checkNoRepeats(arrayTest) == true);
		}
	};
}
