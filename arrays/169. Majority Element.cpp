#include <iostream>
#include <vector>
using namespace std;

class Solution {
public:
    int majorityElement(vector<int>& nums)
    {
        int count_check =  nums.size() / 2;
        for(int i = 0; i < nums.size(); i++)
        {
            int count = 0;
            for(int j = 0; j < nums.size(); j++)
            {
                if(nums[j] == nums[i])
                {
                    count++;
                }
            }
            if(count > count_check)
            {
                return nums[i];
            }
        }
        return -1;        
    }
};