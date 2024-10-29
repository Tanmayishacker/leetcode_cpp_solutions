#include "../CommanHPP.hpp"

int reverse(int x)
{
    long long reversedNo = 0;
    long long remainder = 0;
    int originalNo = x;
    int32_t minRange = -2147483648;
    int32_t maxRange = 2147483647;

    if (x <= minRange || x >= maxRange)
    {
        return 0;
    }

    if (x >= 0)
    {
        while (x != 0)
        {
            remainder = x % 10;
            reversedNo = remainder + (reversedNo * 10);
            x = x / 10;
        }
    }
    else
    {
        x = x * -1;
        while (x != 0)
        {
            remainder = x % 10;
            reversedNo = remainder + (reversedNo * 10);
            x = x / 10;
        }
    }

    if (originalNo < 0)
    {
        reversedNo *= -1;

        if (reversedNo < minRange)
        {
            return 0;
        }
        else
        {
            return reversedNo;
        }
    }

    else if (reversedNo > maxRange)
    {
        return 0;
    }
    else
    {
        return reversedNo;
    }
}