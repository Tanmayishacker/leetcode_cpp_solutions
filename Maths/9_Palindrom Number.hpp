#include "../CommanHPP.hpp"

bool isPalindrome(int64_t x)
{
    size_t originalNumber = x;
    size_t reversedNumber = 0;
    // Reverse the number
    while (x > 0)
    {
        int8_t digit = x % 10;
        reversedNumber *= 10 + digit;
        x = x / 10;
    }
    // Check if the original number is equal to the reversed number
    return originalNumber == reversedNumber;
}