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
	};
}
