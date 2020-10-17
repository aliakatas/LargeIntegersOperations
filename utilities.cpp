#include "utilities.h"

// As stoi needs a string and not a char...
int char2int(const char c) {
    switch (c) {
    case '1':
        return 1;
    case '2':
        return 2;
    case '3':
        return 3;
    case '4':
        return 4;
    case '5':
        return 5;
    case '6':
        return 6;
    case '7':
        return 7;
    case '8':
        return 8;
    case '9':
        return 9;
    default:
        return 0;
    }
}

char int2char(const int i) {
    switch (i) {
    case 1:
        return '1';
    case 2:
        return '2';
    case 3:
        return '3';
    case 4:
        return '4';
    case 5:
        return '5';
    case 6:
        return '6';
    case 7:
        return '7';
    case 8:
        return '8';
    case 9:
        return '9';
    default:
        return '0';
    }
}

std::string digitsToString(std::vector<int> digits) {
    std::string out;
    for (auto it = digits.rbegin(); it != digits.rend(); ++it)
        out.push_back(int2char(*it));
    return out;
}

std::vector<int> stringToDigits(std::string number) {
    std::vector<int> out;
    for (auto it = number.rbegin(); it != number.rend(); ++it)
        out.push_back(char2int(*it));
    return out;
}

std::vector<int> addTwoIntegers(std::vector<int> num1, std::vector<int> num2) {
    std::vector<int> out;

    auto n1 = num1.begin();
    auto n2 = num2.begin();

    int digit1 = 0;
    int digit2 = 0;

    int carry = 0;
    int temp = 0;

    while (!(n1 == num1.end() && n2 == num2.end())) {
        if (n1 == num1.end())
            digit1 = 0;
        else
            digit1 = *n1;

        if (n2 == num2.end())
            digit2 = 0;
        else
            digit2 = *n2;

        temp = digit1 + digit2 + carry;

        out.push_back(temp % 10);
        carry = temp / 10;

        if (n1 != num1.end())
            ++n1;
        if (n2 != num2.end())
            ++n2;
    }
    return out;
}

std::vector<int> addIntegers(std::vector<std::vector<int>> numbers) {
    int N = numbers.size();

    if (N == 0)
        return { 0 };

    if (N == 1)
        return numbers[0];

    std::vector<int> out = addTwoIntegers(numbers[0], numbers[1]);

    if (N > 2) {
        for (auto i = 2; i < N; ++i)
            out = addTwoIntegers(out, numbers[i]);
    }
    return out;
}   

std::string addIntegers(std::vector<std::string> numbers) {
    int N = numbers.size();

    if (N == 0)
        return "0";

    if (N == 1)
        return numbers[0];

    std::vector<int> out = addTwoIntegers(stringToDigits(numbers[0]), stringToDigits(numbers[1]));

    if (N > 2) {
        for (auto i = 2; i < N; ++i)
            out = addTwoIntegers(out, stringToDigits(numbers[i]));
    }
    return digitsToString(out);
}

