#pragma once
#include <set>
#include <vector>

void ProcessingSet(std::set<int> &numbersDivSumDigitsNumber, int number);
void FillSet(std::set<int> &numbersSumDigitsNumberDiv2, int number);
std::vector<int> CrossSet(std::set<int> const &numbersDivSumDigitsNumber, std::set<int> const &numbersSumDigitsNumberDiv2);