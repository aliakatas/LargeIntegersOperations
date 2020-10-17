#include "utilities.h"

#include <iostream>
#include <string>

int main(int argc, const char* argv[]) {

    std::cout << "Will be operating with some big numbers now...\n";

    std::cout << "   Test conversion :: \n";

    std::cout << "   123456 = " << digitsToString(stringToDigits("123456")) << "\n";

    //std::cout << "    123456 + 123456 = " << 123456 + 123456 << "\n";
    //std::cout << "-->                   " << addTwoIntegers("123456", "123456") << "\n";

    //std::cout << "    1234567890 + 1234567890 = " << 1234567890U + 1234567890U << "\n";
    //std::cout << "-->                           " << addTwoIntegers("1234567890", "1234567890") << "\n";

    //std::cout << "    123 + 123456 = " << 123 + 123456 << "\n";
    //std::cout << "-->                " << addTwoIntegers("123", "123456") << "\n";

    //std::cout << "    1234 + 12345 + 123456 + 1234567 = " << 1234 + 12345 + 123456 + 1234567 << "\n";
    //std::cout << "-->                                   " << addIntegers({ "1234",  "12345", "123456", "1234567" }) << "\n";

    std::cout << "Done. \n\n";
    return 0;
}