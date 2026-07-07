#include <iostream>
#include <vector>
using namespace std;

class Solution {
public:
    bool containsDuplicate(vector<int>& nums) 
    {
        for (int i = 0; i < nums.size(); i++) 
        {
            int count = 0;
            for (int j = 0; j < nums.size(); j++) 
            {
                if (nums[j] == nums[i])
                {
                    count++;
                }
            }
            if (count >= 2)
            {
                return true;
            }
        }
        return false;
    }
};