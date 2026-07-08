#include <iostream>
#include <vector>
using namespace std;

class Solution {
public:
    void moveZeroes(vector<int>& nums)
    {
        int non_zero_count = 0;
        for(int i = 0; i < nums.size(); i++)
        {
             if (nums[i] != 0)
             {
                std::swap(nums[non_zero_count], nums[i]);
                non_zero_count++;
             }
        }
    }
};
