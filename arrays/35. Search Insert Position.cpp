#include <iostream>
#include <vector>
using namespace std;

class Solution {
public:
    int searchInsert(vector<int>& nums, int target)
    {
        // this is a binary search question
        int first = 0;
        int last = nums.size() - 1;
        for(int i = 0; i < nums.size(); i++)
        {
            int middle = (first + last) / 2;
            if(nums[middle] == target)
            {
                return middle;
            }
            else if(nums[middle] > target)
            {
                last = middle - 1;
            }
            else
            {
                first = middle +  1;
            }
        }
        return first;   
    }
};