#pragma once
#include <set>
#include <vector>

void ProcessSetDivSumDigits(std::set<int> &numbersDivSumDigitsNumber, int &upperBound);
void ProcessSetSumDigitsNumberDiv2(std::set<int> &numbersSumDigitsNumberDiv2, int &upperBound);
int ReturnSumDigitsOfNumber(int processedNUmber);
std::vector<int> CrossSet(std::set<int> const &numbersDivSumDigitsNumber, std::set<int> const &numbersSumDigitsNumberDiv2);