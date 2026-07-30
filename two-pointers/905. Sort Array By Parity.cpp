#include <iostream>
#include <vector>
using namespace std;

class Solution {
public:
    vector<int> sortArrayByParity(vector<int>& nums)
    {
        vector<int> output;
        for(int i = 0; i < nums.size();i++)
        {
            if(nums[i] % 2 == 0)
            {
                output.push_back(nums[i]);
            }
        }
        for(int j = 0; j < nums.size();j++)
        {
            if(nums[j] % 2 != 0)
            {
                output.push_back(nums[j]);
            }
        }
        return output;
    }
};