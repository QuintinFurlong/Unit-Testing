#include <iostream>
#include <assert.h>
#include "..//UnitTest1/pch.h"
#include "Production.h"

using namespace std;


int main()
{
	Production p;

	p.someMethod(10);
	bool notDone = true;
	while (notDone)
	{
		cout << "Enter 6 numbers between 1 and 46" << endl;
		notDone = false;
		int* pointerToArray = p.getSixNumbers();
		int array[6];
		for (int i = 0;i< 6;i++)
		{
			array[i] = pointerToArray[i];
		}
		if (!p.checkBetweenOneAnd46(array))
		{
			cout << "Not all numbers are between 1 and 46" << endl;
			notDone = true;
		}
		if (!p.checkNoRepeats(array))
		{
			cout << "Reapting number has appeared" << endl;
			notDone = true;
		}
	}
	return 0;
}
