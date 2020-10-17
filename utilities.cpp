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