#include "stdafx.h"
#include "../std_set/SetProcessor.h"

using namespace std;

bool isSetsEqual(set<int> first, set<int> second)
{
	return first == second;
}

bool isVectorsEqual(vector<int> first, vector<int> second)
{
	return first == second;
}

BOOST_AUTO_TEST_CASE(ZeroNumberProduceZeroSets)
{
	int number = 0;
	set<int> firstSet; set<int> secondSet;
	auto copyFirstSet = firstSet; auto copySecondSet = secondSet;
	vector<int> resultVector;
	auto copyResultVector = resultVector;
	ProcessingSet(firstSet, number);
	FillSet(secondSet, number);
	resultVector = CrossSet(firstSet, secondSet);
	BOOST_CHECK(isSetsEqual(firstSet, copyFirstSet), isSetsEqual(secondSet, copySecondSet), 
				isVectorsEqual(resultVector, copyResultVector));
}

BOOST_AUTO_TEST_CASE(TestWithNumber_1)
{
	int number = 1;
	set<int> firstSet; set<int> secondSet;
	auto copyFirstSet = { 1 }; auto copySecondSet = secondSet;
	vector<int> resultVector;
	auto copyResultVector = resultVector;
	ProcessingSet(firstSet, number);
	FillSet(secondSet, number);
	resultVector = CrossSet(firstSet, secondSet);
	BOOST_CHECK(isSetsEqual(firstSet, copyFirstSet), isSetsEqual(secondSet, copySecondSet), 
				isVectorsEqual(resultVector, copyResultVector));
}

BOOST_AUTO_TEST_CASE(TestWithNumber_5)
{
	int number = 5;
	set<int> firstSet; set<int> secondSet;
	set<int> copyFirstSet = { 1, 2, 3, 4, 5 }; set<int> copySecondSet = { 2, 4 };
	vector<int> resultVector;
	vector<int> copyResultVector = { 2, 4 };
	ProcessingSet(firstSet, number);
	FillSet(secondSet, number);
	resultVector = CrossSet(firstSet, secondSet);
	BOOST_CHECK(isSetsEqual(firstSet, copyFirstSet), isSetsEqual(secondSet, copySecondSet), 
				isVectorsEqual(resultVector, copyResultVector));
}

BOOST_AUTO_TEST_CASE(TestWithNumber_20)
{
	int number = 20;
	set<int> firstSet; set<int> secondSet;
	set<int> copyFirstSet = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 12, 18, 20 }; 
	set<int> copySecondSet = { 2, 4, 6, 8, 11, 13, 15, 17, 19, 20 };
	vector<int> resultVector;
	vector<int> copyResultVector = { 2, 4, 6, 8, 20 };
	ProcessingSet(firstSet, number);
	FillSet(secondSet, number);
	resultVector = CrossSet(firstSet, secondSet);
	BOOST_CHECK(isSetsEqual(firstSet, copyFirstSet), isSetsEqual(secondSet, copySecondSet), 
				isVectorsEqual(resultVector, copyResultVector));
}