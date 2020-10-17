#pragma once
#include <string>
#include <vector>

int char2int(const char c);

char int2char(const int i);

std::string digitsToString(std::vector<int> digits);

std::vector<int> stringToDigits(std::string number);

std::vector<int> addTwoIntegers(std::vector<int> num1, std::vector<int> num2);

std::vector<int> addIntegers(std::vector<std::vector<int>> numbers);

std::string addIntegers(std::vector<std::string> numbers);
