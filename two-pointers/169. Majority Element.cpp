#include <iostream>
#include <vector>
#include <cmath>
using namespace std;

class Solution {
public:
    int majorityElement(vector<int>& nums)
    {
        int value = floor(nums.size()/2);
        for(int i = 0; i < nums.size(); i++)
        {
            int count = 0;
            for(int j = 0; j < nums.size(); j++)
            {
                if(nums[i]==nums[j])
                {
                    count++;
                }
            }
            if(count > value)
            {
                return nums[i];
                break;
            }
        }
        return -1;
    }
};