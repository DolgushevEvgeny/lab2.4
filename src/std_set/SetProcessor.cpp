#include "stdafx.h"
#include "SetProcessor.h"
#include <algorithm>
#include <iterator>

using namespace std;

void ProcessSetDivSumDigits(set<int> &numbersDivSumDigitsNumber, int &upperBound)
{
	int result = 1;
	while (result <= upperBound)
	{
		if (result % ReturnSumDigitsOfNumber(result) == 0)
		{
			numbersDivSumDigitsNumber.insert(result);
		}
		++result;
	}
}

int ReturnSumDigitsOfNumber(int processedNUmber)
{
	int modSum = 0;
	while (processedNUmber)
	{
		modSum += processedNUmber % 10;
		processedNUmber = processedNUmber / 10;
	}
	return modSum;
}

void ProcessSetSumDigitsNumberDiv2(set<int> &numbersSumDigitsNumberDiv2, int &upperBound)
{
	int result = 1;
	while (result <= upperBound)
	{
		if (ReturnSumDigitsOfNumber(result) % 2 == 0)
		{
			numbersSumDigitsNumberDiv2.insert(result);
		}
		++result;
	}
}

vector<int> CrossSet(set<int> const &numbersDivSumDigitsNumber, set<int> const &numbersSumDigitsNumberDiv2)
{
	vector<int> resultSet;
	set_intersection(numbersDivSumDigitsNumber.begin(), numbersDivSumDigitsNumber.end(), numbersSumDigitsNumberDiv2.begin(), numbersSumDigitsNumberDiv2.end(), back_inserter(resultSet));
	return resultSet;
}