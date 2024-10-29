#include "../CommanHPP.hpp"

vector<int> twoSum(vector<int> &nums, int target)
{
    vector<int> results;
    for (uint8_t i; i < nums.size(); i++)
    {
        if (nums[i] + nums[i + 1] == target)
        {
            if (i != i + 1)
            {
                results = {i, i + 1};
                break;
            }
            else
            {
                continue;
            }
        }
    }
    return results;
}