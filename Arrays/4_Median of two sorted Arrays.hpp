#include "../CommanHPP.hpp"
#include <algorithm>

double findMedianSortedArrays(vector<int>& nums1, vector<int>& nums2) 
    {
        vector<int> mergedID(nums1.size() + nums2.size());

        merge(nums1.begin(),nums1.end(),nums2.begin(),nums2.end(),mergedID.begin());
    
        sort(mergedID.begin(),mergedID.end());
        
        if (mergedID.size() % 2 != 0)
        {
            return mergedID[(mergedID.size()-1)/2];
        }
        else
        {
            return (double)(mergedID[(mergedID.size()/2)-1] + mergedID[mergedID.size()/2])/2;
        }
    }