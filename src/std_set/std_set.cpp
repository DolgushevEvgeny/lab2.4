// std_set.cpp: определяет точку входа для консольного приложения.
//

#include "stdafx.h"
#include <iostream>
#include "SetProcessor.h"
#include <vector>

using namespace std;

int main(int argc, int argv[])
{
	cout << "Enter your number: ";
	int upperBound;
	cin >> upperBound;
	set<int> numbersDivSumDigitsNumber;
	ProcessSetDivSumDigits(numbersDivSumDigitsNumber, upperBound);
	set<int> numbersSumDigitsNumberDiv2;
	ProcessSetSumDigitsNumberDiv2(numbersSumDigitsNumberDiv2, upperBound);
	
	for (auto numb : numbersDivSumDigitsNumber)
	{
		cout << numb << " ";
	}
	cout << "\n";
	
	for (auto numb : numbersSumDigitsNumberDiv2)
	{
		cout << numb << " ";
	}
	cout << "\n";
	
	vector<int> resultSet;
	resultSet = CrossSet(numbersDivSumDigitsNumber, numbersSumDigitsNumberDiv2);
	for (auto numb : resultSet)
	{
		cout << numb << " ";
	}
	cout << "\n";
	return 0;
}

