#include "stdafx.h"
#include "SetProcessor.h"
#include <algorithm>
#include <iterator>

using namespace std;

void ProcessingSet(set<int> &numbersDivSumDigitsNumber, int number)
{
	int modSum = 0, result = 1, subsid;
	while (result <= number)
	{
		subsid = result;
		while (subsid)
		{
			modSum += subsid % 10;
			subsid = subsid / 10;
		}
		if (result % modSum == 0)
		{
			numbersDivSumDigitsNumber.insert(result);
		}
		modSum = 0;
		++result;
	}
}

void FillSet(set<int> &numbersSumDigitsNumberDiv2, int number)
{
	int modSum = 0, result = 1, subsid;
	while (result <= number)
	{
		subsid = result;
		while (subsid)
		{
			modSum += subsid % 10;
			subsid = subsid / 10;
		}
		if (modSum % 2 == 0)
		{
			numbersSumDigitsNumberDiv2.insert(result);
		}
		modSum = 0;
		++result;
	}
}

vector<int> CrossSet(set<int> const &numbersDivSumDigitsNumber, set<int> const &numbersSumDigitsNumberDiv2)
{
	vector<int> resultSet;
	set_intersection(numbersDivSumDigitsNumber.begin(), numbersDivSumDigitsNumber.end(), numbersSumDigitsNumberDiv2.begin(), numbersSumDigitsNumberDiv2.end(), back_inserter(resultSet));
	return resultSet;
}