// std_set.cpp: определяет точку входа для консольного приложения.
//

#include "stdafx.h"
#include <iostream>
#include "SetProcessor.h"
#include <vector>

using namespace std;

int main(int argc, int argv[])
{
	set<int> numbersDivSumDigitsNumber;
	set<int> numbersSumDigitsNumberDiv2;
	vector<int> resultVector;
	int number = argv[1];
	ProcessingSet(numbersDivSumDigitsNumber, number);
	FillSet(numbersSumDigitsNumberDiv2, number);
	for (auto numb : numbersDivSumDigitsNumber)
	{
		printf("%d ", numb);
	}
	printf("%s", "\n");
	for (auto numb : numbersSumDigitsNumberDiv2)
	{
		printf("%d ", numb);
	}
	printf("%s", "\n");
	resultVector = CrossSet(numbersDivSumDigitsNumber, numbersSumDigitsNumberDiv2);
	for (auto numb : resultVector)
	{
		printf("%d ", numb);
	}
	printf("%s", "\n");
	system("pause");
	return 0;
}

