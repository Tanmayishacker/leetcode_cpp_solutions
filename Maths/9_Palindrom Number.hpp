#include "../CommanHPP.hpp"

bool isPalindrome(int64_t x)
{
    int64_t originalNumber = x;
    int64_t reversedNumber = 0;

    // Reverse the number
    while (x > 0)
    {
        int digit = x % 10;
        reversedNumber = reversedNumber * 10 + digit;
        x = x / 10;
    }

    // Check if the original number is equal to the reversed number
    return originalNumber == reversedNumber;
}