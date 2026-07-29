#include <iostream>
#include <vector>
using namespace std;

class Solution {
public:
    vector<int> findDisappearedNumbers(vector<int>& nums)
    {
        vector<int> output;
        for(int i = 0; i < nums.size(); i++)
        {
            bool has_value = false;
            int val = i + 1;
            for(int j = 0; j < nums.size(); j++)
            {
                if(nums[j] == val)
                {
                    has_value = true;
                }
            }
            if(!has_value)
            {
                output.push_back(val);
            }
        }
        return output;
    }
};