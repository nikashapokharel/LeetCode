#include <iostream>
#include <vector>
using namespace std;

class Solution {
public:
    int findNonMinOrMax(vector<int>& nums) 
    {
        int min = nums[0];
        int max = nums[0];
        for(int i = 0; i < nums.size(); i++)
        {
            if(nums[i] > max)
            {
                max = nums[i];
            }
        }
        for(int j = 0; j < nums.size(); j++)
        {
            if(nums[j] < min)
            {
                min = nums[j];
            }
        }
        for(int k = 0; k < nums.size(); k++)
        {
            if(nums[k] != max && nums[k]!= min)
            {
                return nums[k];
                break;
            }
        }
        return -1;
    }
};