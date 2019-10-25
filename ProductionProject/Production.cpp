#include "..//UnitTest1/pch.h"
#include "Production.h"
#include <iostream>
int Production::someMethod(int a)
{
	return a - a;
}

int* Production::getSixNumbers()
{
	int numArray [] = { 0,0,0,0,0,0 };
	for (int i = 0; i < NUM_OF_NUMS;i++)
	{
		std::cin >> numArray[i];
	}
	return numArray;
}

bool Production::checkBetweenOneAnd46(int* t_numbers)
{
	for (int i = 0; i < NUM_OF_NUMS; i++)
	{
		if (t_numbers[i] < 1 || t_numbers[i] > 46)
		{
			return false;
		}
	}
	return true;
}

bool Production::checkNoRepeats(int* t_numbers)
{
	for (int i = 0;i < NUM_OF_NUMS - 1;i++)
	{
		for (int i2 = i + 1; i2 < NUM_OF_NUMS; i2++)
		{
			if (t_numbers[i] == t_numbers[i2])
			{
				return false;
			}
		}
	}
	return true;
}
