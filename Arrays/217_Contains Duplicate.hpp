#include "../CommanHPP.hpp"
#include <unordered_set>

bool containsDuplicate(vector<int>& nums) 
    {
        unordered_set<int> seen;  // Efficient hash set
    
        for (const int& num : nums) 
        {
            if (!seen.insert(num).second)  // Insert returns {iterator, success}, checking if insertion was successful
            {
                return true;  // Duplicate found
            }
        }
        
        return false;  // No duplicates
    }